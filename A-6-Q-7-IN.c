/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
       N=N/10;
       if(N==0)
       {
       break;
       }
    }
     printf("%d",i);
    return 0;
}
