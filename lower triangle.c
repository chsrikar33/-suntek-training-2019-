/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(k=3;k>i;k--)
        {
            printf(" ");
            
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
