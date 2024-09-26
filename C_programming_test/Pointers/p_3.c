#include <stdio.h>

 struct SDataset
 {
     unsigned char data1;
     unsigned int data2;
     unsigned char data3;
     unsigned short data4;
 };
 struct SDataset data;

void print_memory_range(char* base , int size)
{
    int i;
    for(i = 0 ; i < size ; i++)
    {
        printf("%p\t%X\n",base++,(unsigned char) *base);
    }
}

int main() {
    data.data1 = 0x11 ;
    data.data2 = 0xFFFFEEEE ;
    data.data3 = 0x22 ;
    data.data4 = 0xabcd ;
   
    print_memory_range(&data , sizeof(data));
    return 0;
}