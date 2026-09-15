#include <stdio.h>
#include <stdint.h>
/**
pointer integer,string, arthmetic, pointer arrar, arrar pointer,
function pointer, callback, const pointer and pointer to const,
type of pointer, struct pointer
*/

typedef struct 
{
    int a;
    int b;
    char c;
}info_t;

/* string reverse */
void string_reverse(char *str,int len)
{
    char *start,*end;

    start = str;
    end = str+len-1;

    /* with third variable */
    #if 0
    char temp;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    #endif

    /* without third variable */
    while(start < end)
    {
        *start = *start ^ *end;
        *end = *start ^ *end;
        *start = *start ^ *end;
        start++;
        end--;
    }
    printf("%s\n",str);
}
/* string lrngth */
int string_length(char *str)
{
    int count =0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

/* pointer arthmetc */
void pointer_arthmetic()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *ptr  = &arr[0];
    for(int i=0;i<len;i++)
    {
        printf("%d\n",*ptr++);
    }
}

void pointer_array()
{
    int *arr[5] = { 1,2,3,4,5};

    printf("pointer array index:%d\n",*(arr+4));
}

void array_pointer()
{
    int *(arr)[3] = {10,20,30};

    printf("array pointer index:%d",*(arr+1));
}

void function_pointer(info_t *data, void *data1)
{
    printf("\nHello from function pointer");
    printf("\na:%d b:%d c:%c\n",data->a,data->b,data->c);
    printf("void pointer function value:%x",*((uint32_t*)data1));
}

void callback(void (*call) (info_t*,void*))
{
    info_t arg;
    arg.a = 30;
    arg.b = 40;
    arg.c = 'n';
    uint32_t ab=0xffffffff;
    void *ptr = &ab;
    printf("\ncalling callback function");
    call(&arg,ptr);
}

int main()
{
    char a[]="interview";
    char *ptr=a;
    string_reverse(ptr,string_length(ptr));
    pointer_arthmetic();
    pointer_array();
    array_pointer();

    /* void pointer */
    uint32_t a_void = 0xffffffff;
    void *ptr_void;
    ptr_void = &a_void;
    printf("void pointer value:%d\n",*((int*)ptr_void));

    /* function pointer and argument */
    void (*fun_ptr) (info_t*,void*);
    fun_ptr = function_pointer;
    info_t arg;
    arg.a = 10;
    arg.b = 20;
    arg.c = 'm';
    fun_ptr(&arg,ptr_void);

    /* callback */
    callback(function_pointer);
}   