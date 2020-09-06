

#include <stdio.h>

int main()
{
    int Array[]={1,2,3,4,5,6,7};//Array is pre-determined.
    int target;
    int location;
    int arraysize;
    int temp;
    arraysize=(sizeof(Array)/sizeof(int));
    printf("Hello World\n");
    printf("Enter the element you want to be deleted\n");

    scanf(" %d",&target);
    printf("Array size is: %d\n",arraysize);
    
    for(int i=0;i<arraysize;i++)
    {
        if(Array[i]!=target)
        {
            continue;
        }
        else
        {
            temp=Array[i];
            Array[i]=Array[i+1];
            Array[i+1]=temp;
        }
        
    }
    arraysize--;//applicable only for the current case to show the user.The array should still have the same space so don't do this
    
    
    
    for(int i=0;i<arraysize;i++)
    {
        printf("Element %d is %d\n",i,Array[i]);
    }
    printf("New Array size is: %d",arraysize);
    return 0;
}

