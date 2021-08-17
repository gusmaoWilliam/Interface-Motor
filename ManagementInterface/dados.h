#ifndef DADOS_H
#define DADOS_H

#include <QMainWindow>

#define ACQUISITION_HEADER      73
#define CALIBRATION_HEADER      74
#define SAVE_PARAMETERS_HEADER  75
#define ACK                     65


enum // PROTOCOLO HEADER
{
    TYPE_HEADER = 0,
    FRAME_SIZE,
    PARAMETERS_QUANTITY,
};

class Dados
{
    uint16_t parametersSize;
    QByteArray frame;

public:
    Dados();
    uint8_t HandleFrame(QByteArray data);
    QByteArray getFrame();
    uint16_t getFrameSize();

private:
    uint8_t CRC8(QByteArray data, unsigned char len);
};

#endif // DADOS_H
