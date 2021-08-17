#ifndef ACQUISITION_H
#define ACQUISITION_H

#include "dados.h"

enum
{
    ID_ROTACAO = 1,
    ID_VB,
    ID_TINJECAO,
    ID_DENTE,
    ID_TAGUA,
    ID_TAR,
    ID_LAMBDA,
    ID_MAP
}ID_DATA;

class Acquisition: public Dados
{
    uint16_t    rotacao;
    double      VB;
    uint16_t    tInjecao;
    uint8_t     dente;
    uint8_t     tAgua;
    uint8_t     tAr;
    uint8_t     lambda;
    uint8_t     MAP;

public:
    Acquisition();
    void updateAcquisitions(QByteArray frame, uint16_t frameSize);

};

#endif // ACQUISITION_H
