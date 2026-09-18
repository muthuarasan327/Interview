#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#define VALUE(x)    x*x  //2+3*2+3 => 2+6+3 => 11

/* Insert */
void insert_element(int arr[],int pos,int data,int len)
{
    for(int i=len;i>=pos;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = data;
    for(int i=0;i<=len;i++)
    printf("insert index %d:%d\n",i,arr[i]);
}

/* deletion */
void remove_element(int arr[],int pos,int len)
{
    for(int i=pos;i<len;i++)
    {
        arr[i] = arr[i+1];
    }
    for(int i=0;i<len-1;i++)
    printf("value %d:%d\n",i,arr[i]);
}

/* Find dublicate numbers and count */

/* unsorted remove duplicate number */
void unsorted_duplicate_remove(int arr[],int len)
{
    int new_size = 1;

    for(int i=0;i<len;i++)
    {
        int dup=0;
        for(int j=0;j<new_size;j++)
        {
            if(arr[i] == arr[j])
            {
                dup = 1;
            }
        }
        if(dup==0)
        {
            arr[new_size] = arr[i];
            new_size++;
        }
    }
    printf("unsort remove element:");
    for(int k=0;k<new_size;k++)
    {
        printf("%d ",arr[k]);
    }
}

/* sorted remove dublicate number */
void sorted_dublicate_remove(int arr[],int len)
{
    int idx =0;
    for(int i=1;i<len;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            arr[idx++] = arr[i];
        }
    }
    for(int k=0;k<idx;k++)
    printf("value:%d\n",arr[k]);
}

/* remove dublicate string */
void string_duplicate_remove(char *str,int len)
{
    int new_size = 1;

    for(int i=0;i<len;i++)
    {
        int dup=0;
        for(int j=0;j<new_size;j++)
        {
            if(str[i] == str[j])
            {
                dup = 1;
            }
        }
        if(dup==0)
        {
            str[new_size] = str[i];
            new_size++;
        }
    }
    printf("\nstring duplicate remove element:");
    for(int k=0;k<new_size;k++)
    {
        printf("%c ",str[k]);
    }
}

/* move all 0 to last elements */
void move_zero_to_last(int arr[],int len)
{
    int idx=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i] !=0)
        {
            arr[idx++] = arr[i];
        }
    }
    for(int j=idx;j<len;j++)
    {
        arr[j] = 0;
    }
    for(int k=0;k<len;k++)
    printf("arr index:%d value:%d\n",k,arr[k]);
}

/* sting length */
int str_len(char *str)
{
    int length = 0;
    for(int i=0;str[i] != '\0';i++)
    {
        length++;
    }
    return length;
}

/* array rotation based on position */

int main()
{
    int arr[] = {5,7,9,7,7,1,6,8,1,8,6,99,99};

    int len = sizeof(arr)/sizeof(arr[0]);   

    // move_zero_to_last(arr,len);
    // printf("\n%d",VALUE(2+3));

    // int pos,data = 0;
    // printf("Enter the pos:");
    // scanf("%d",&pos);
    // printf("Enter the value:");
    // scanf("%d",&data);

    // remove_element(arr,pos,len);
    // sorted_dublicate_remove(arr,len);
    unsorted_duplicate_remove(arr,len);
    char str[] = "aabbhhuwenehfe";
    string_duplicate_remove(str,str_len(str));
}