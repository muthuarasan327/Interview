#include <stdio.h>
#include <stdint.h>

char* return_string(char *str,char *des)
{
    char *temp = des;
    while(*str != '\0' )
    {
        *des++ = *str++;
    }
    *des = '\0';
    return temp;
}

int main()
{
    char str1[6] = "muthu";
    char str2[6];

    printf("%s",return_string(str1,str2));
    return 0;
}