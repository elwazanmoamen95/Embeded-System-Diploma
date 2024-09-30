#include "Uart.h"
unsigned char string_buffer[100] = "learn-in-depth:<<Moamen_Elwazan>>";
unsigned char const string_buffer2[100] = "learn-in-depth:<<Moamen_Elwazan>>"; //for read only data in memory

void main(void)
{
    Uart_Send_String(string_buffer);
}