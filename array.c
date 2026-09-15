#include <stdio.h>
#include <stdint.h>

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
/* remove dublicate number */
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
/* array rotation based on position */

int main()
{
    int arr[] = {1,0,0,4,0,3,5,2,9};

    int len = sizeof(arr)/sizeof(arr[0]);   

    move_zero_to_last(arr,len);

    // int pos,data = 0;
    // printf("Enter the pos:");
    // scanf("%d",&pos);
    // printf("Enter the value:");
    // scanf("%d",&data);

    // remove_element(arr,pos,len);


}