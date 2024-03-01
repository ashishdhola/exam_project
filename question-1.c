/*
check number is porostitive or consonant 
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any Number : ");
    scanf("%d",&num);
    if(num == 0)
    {
        printf("Number is Zero \n");
    }
    else if(num > 0)
    {
        
        printf(" Number is Positive Number \n");
    }
    else
    {
        printf("Number is Negative Number \n");
    }

    return 0;
}