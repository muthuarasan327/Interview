#include <stdio.h>
#include <stdint.h>

/* store 32bit value into 16bit */
typedef union
{
    uint32_t whole_value;
    struct
    {
        uint16_t highval;
        uint16_t lowval;
    }srt;
}u32val;

void store_32bit_value_into_16bit(uint32_t value)
{
    u32val value_str;

    value_str.whole_value = value;

    printf("high value - %x \n low value - %x",value_str.srt.highval, value_str.srt.lowval);
}

/* store two 8bit value into single 16bit variable */
void store_two8bit_value_into_16bit(uint8_t value1,uint8_t value2)
{
    uint16_t value = (value1 << 8) | value2;
    printf("\n16bit value:%d",value);
}

/* Bit Reverse */
uint32_t bit_reverse(uint32_t value)
{
    uint32_t reverse = 0;
    for(int i=0;i<=31;i++)
    {
        if(value&1<<i)
        {
            reverse = reverse | (1<<(31-i));
        }
        else
        {
            reverse = reverse &  ~(1<<(31-i));
        }
    }
    return reverse;
}

int main()
{
    store_two8bit_value_into_16bit(10,20);
    return 0;
}