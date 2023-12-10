#include "plotter.h"
#include <QBrush>
#include <QPen>
#include <QPainter>
#include <QDebug>
#include <QMouseEvent>
#include <algorithm>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}{
    amp = 1;
    freq = 1;
    veloc = 0;
    teta = 0;
    rPlot = 0; gPlot = 155; bPlot = 0;
    // inicia o temporizador ciclico
    startTimer(10);
}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    // prepara a caneta do contorno
    pen.setColor(QColor(255,0,0));

    // prepara o pincel de preenchimento
    brush.setColor(QColor(255,255,200));
    brush.setStyle(Qt::SolidPattern);

    // entrega caneta e pincel ao pintor
    painter.setPen(pen);
    painter.setBrush(brush);

    // desenha o plano (fundo do osciloscopio)
    painter.drawRect(0,0, width()-1, height()-1);

    float t1, t2, y1, y2;
    // teta = veloc*0.05;
    t1 = timestamp[0]; y1 = values[0];
    // muda a cor do tracado para verde
    pen.setColor(QColor(rPlot,gPlot,bPlot));
    pen.setWidth(2);
    painter.setPen(pen);
    // desenha o gráfico

    int j = 1;
    for(int i=0; i<=width(); i++){
        float teste = i/static_cast<float>(width());
        if(teste >= timestamp[j]){
            t2 = timestamp[j]*width();
            y2 = values[j],
            j++;
            painter.drawLine(t1,
                             -y1*height()+height(),
                             t2,
                             -y2*height()+height());
            t1 = t2;
            y1 = y2;
        }
        /*else {
            t2 = teste*width();
            y2 = values[j - 1];
        }

        painter.drawLine(t1,
                         -y1*height()+height(),
                         t2,
                         -y2*height()+height());
        t1 = t2;
        y1 = y2;*/
    }
}

void Plotter::timerEvent(QTimerEvent *e){
    //   qDebug() << "click!";
    teta = teta + 0.1*veloc;
    repaint();
}

void Plotter::mousePressEvent(QMouseEvent *e)
{
    qDebug() << e->x() << " " << e->y();
    emit mudaXY(e->x(), e->y());
}

void Plotter::load(std::vector<long long> time, std::vector<float> value)
{
    timestamp.resize(time.size());
    values = value;

    //float maxvalue = 50;

    float maxvalue = *std::max_element(values.begin(), values.end());
    float minvalue = *std::min_element(values.begin(), values.end());

    long long maxtime = *std::max_element(time.begin(), time.end());
    long long mintime = *std::min_element(time.begin(), time.end());

    // preparar timestamp e value para serem plotados um versus o outro
    for(int i = 0; i < timestamp.size(); i++){
        timestamp[i] = (time[i] - mintime)/(1.0*(maxtime - mintime));
        qDebug() << "tempo: " << timestamp[i] ;
    }
    for(int i = 0; i < values.size(); i++){

        if(minvalue != maxvalue){
            values[i] = (values[i] - minvalue)/(maxvalue - minvalue);
            qDebug() << "valor: " << values[i];
        }

        //values[i] = values[i]/maxvalue;

    }
    repaint();
}

void Plotter::mudaAmplitude(int amp){
    this->amp = amp/100.0;
    //  qDebug() << amp;
    // redesenha a tela
    repaint();
}

void Plotter::mudaFrequencia(int freq){
    this->freq = freq;
    repaint();
}

void Plotter::mudaVelocidade(int veloc)
{
    this->veloc = veloc;
    repaint();
}

void Plotter::mudaCorPlot(int r, int g, int b){
    rPlot = r; gPlot = g; bPlot = b;
    repaint();
}
