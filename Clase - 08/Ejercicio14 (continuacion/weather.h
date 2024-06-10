#ifndef WEATHER_H
#define WEATHER_H

#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QUrlQuery>

class Weather : public QObject {
    Q_OBJECT
private:
    double latitud, longitud, temperatura;
    QNetworkAccessManager* manager;

public:
    Weather(double latitud, double longitud, QObject* parent = nullptr);

signals:
    void weatherChanged(const QString &temperatura);

public slots:
    void obtenerTemperatura();

private slots:
    void slot_descargaFinalizada(QNetworkReply* reply);
};

#endif // WEATHER_H
