/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int n,m;
    printf("enter number");
    scanf("%d",&n);
    m=reverse(n);
    printf("reverse of given number is %d",m);
}
int reverse(int i)
{
    int rev=0;
    while(i!=0)
    {
        rev=rev*10;
        rev=rev+i%10;
        i=i/10;
    }
    return(rev);
}


