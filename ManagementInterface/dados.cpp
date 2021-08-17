#include "dados.h"




Dados::Dados()
{

}
uint8_t Dados::HandleFrame(QByteArray data)
{
    if(data.length()-1 != ACK)
        return -1;

    uint8_t CRC = data[data.length()-2];
    QByteArray bytesCRC = data.left(2);

    int8_t type = data[TYPE_HEADER];
    uint16_t frameSize = data[FRAME_SIZE];
    this->parametersSize = data[PARAMETERS_QUANTITY];
    this->frame = data.mid(2, 2);

    return (CRC == CRC8(bytesCRC, frameSize))? type:-1;
}
QByteArray Dados::getFrame()
{
    return this->frame;
}
uint16_t Dados::getFrameSize()
{
    return this->parametersSize;
}
uint8_t Dados::CRC8(QByteArray data, unsigned char len)
{
    unsigned char crc = 0x00;
    unsigned char i = 0;
    while (len--)
    {
        unsigned char extract = data[i];

        for (unsigned char tempI = 8; tempI; tempI--)
        {
            unsigned char sum = (crc ^ extract) & 0x01;
            crc >>= 1;

            if (sum)
            {
                crc ^= 0x8C;
            }

            extract >>= 1;
        }
        i++;
    }

  return crc;
}
