/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x,i;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
        if (x%i==0)
        break;
    }
    if(i==x)
    printf("%d is a prime number",x);
    else
    printf("%d is not a prime number",x );

    return 0;
}
