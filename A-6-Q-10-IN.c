/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x,r;
    int y=0;
    printf("Enter a number");
    scanf("%d",&x);
    while(x!=0)
    {
        r=x%10;
        y=y*10+r;
        x=x/10;
        
    }
      printf("Reverse is %d",y);

    return 0;
}
