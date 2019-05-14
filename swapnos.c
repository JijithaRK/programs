#include <stdio.h>

void main()
{
    int a=20,b=10;
    printf("before swapping a=%d b=%d  \n",a,b);
    a=a+b;//a=30
    b=a-b;//b=30-10=20
    a=a-b;
    printf("after swapping a=%d b=%d \n",a,b);
    
}
