//
//  main.c
//  Removing spaces from a string(pointers)
//
//  Created by Srinivas Ilancheran on 08/04/2020.
//  Copyright © 2020 Srinivas Ilancheran. All rights reserved.
//

#include <stdio.h>

char * removeSpaces(char *inString);
void main()
{
    char A[100];
    printf("Enter a Sentence;");
    gets(A);
    printf("\nSentence with spacing is:");
    printf("%s",A);
    printf("\nSentence after space removal is:");
    removeSpaces(A);
}
char *removeSpaces(char *inString)
{
    int i=0;
    while(*(inString+i)!='\0')
    {
        if(*(inString+i)==' ')
        {
            int j=i;
            while(*(inString+j)!='\0')
            {
                *(inString+j)=*(inString+j+1);
                j++;
                
            }
        }
        i++;
    }
    printf("\n");
    printf(inString);
    return(1);
    
}
