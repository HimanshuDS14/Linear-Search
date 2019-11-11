#include<stdio.h>

int main()
{
    int size;
    printf("Enter array size : ");
    scanf("%d" , &size);
    int arr[size];

    printf("Enter %d elements into array : " , size);
    for(int i=0;i<size;i++)
    {
        scanf("%d" , &arr[i]);
    }

    printf("Given Array is : ");
    for(int i=0;i<size;i++)
    {
        printf("%d " , arr[i]);
    }

    int item , flag=0 , pos;
    printf("\nEnter a item which you want a search : ");
    scanf("%d" , &item);

    for(int i=0;i<size;i++)
    {
        if(arr[i]==item)
        {
            flag=1;
            pos = i;
            break;
        }
    }

    if(flag==1)
    {
        printf("Item present in array at location :  %d" , pos);
    }
    else
    {
        printf("Value not present ");
    }


}
