#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t output,input = 0x12345678; //87654321
        
    for(int i=0;i<8;i++)
    {
        output = (output <<4) | (input&0xf);
        input=input >>4;
    }
    printf("%x",output);
    return 0;
}
