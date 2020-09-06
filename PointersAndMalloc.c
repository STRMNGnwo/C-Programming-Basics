//Simple Program to demonstrate the use of malloc and pointers.



#include <stdio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

void Modify(int size,char *s)
{
    char *original;//when the pointer is created it has nothing(no memory location) to point to
    original=malloc(sizeof(char) * size);//memory is allocated for original to point to. This allows a copy of name to be made and the changes made to user input by s  will not be reflected on original.
    strcpy(original,s);
    
    int i=0;
    while(i<size)
    {
        *(s+i)=toupper(*(s+i));
        i++;
    }
    printf("Original:%s\n",original);
    printf("String converted to UpperCase: ");
    printf("%s ",s);//changes made to name will be reflected on s as name is passed straight to s and thus they share the same memory locations.
}

int main()
{
    //char *s;
    char name[30];
    int length;
    printf("Enter your name\n");
    gets(name);
    length=strlen(name);
    Modify(length,name);
    //printf("%s",name);
    
    
    

    return 0;
}

