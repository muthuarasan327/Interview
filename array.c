#include <stdio.h>
#include <stdint.h>

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

void remove_element(int arr[],int pos,int len)
{
    for(int i=pos;i<len;i++)
    {
        arr[i] = arr[i+1];
    }
    for(int i=0;i<len-1;i++)
    printf("value %d:%d\n",i,arr[i]);
}

int main()
{
    int arr[] = {1,2,3,4,5,3,5,2,9};

    int len = sizeof(arr)/sizeof(arr[0]);   

    int pos,data = 0;
    printf("Enter the pos:");
    scanf("%d",&pos);
    printf("Enter the value:");
    scanf("%d",&data);

    remove_element(arr,pos,len);
}