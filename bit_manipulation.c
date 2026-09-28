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

    uint8_t count = 0;
    uint8_t value = 0x13;
    while(value)
    {
        if(value&(1<<0))
        {
            count++;
        }
        value=value>>1;
    }
    printf("\nbit count:%d",count);

    uint32_t in = 0x12345678;
    uint32_t out = 0;  // 78563412
    uint8_t a,b,c,d;
    
    a= in & 0xff;
    b= (in & 0xff00) >> 8;
    c= (in & 0xff0000) >> 16;
    d= (in & 0xff000000) >> 24;
    
    out = out | a;
    out = (out <<8) | b;
    out = (out <<8) | c;
    out = (out <<8) | d;
    printf("\n0x12345678 :0x%x",out);
    return 0;
}
