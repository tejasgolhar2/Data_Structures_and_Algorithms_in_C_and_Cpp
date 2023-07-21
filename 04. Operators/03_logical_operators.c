#include<stdio.h>
#include<conio.h>


int main()
{
    /*int a =5;
    printf("%d",!a); */  
    int a=1;
    int b = 6;
    int result1 = a-- && ++b;  
    printf("%d\n",result1);
    int result2 = --a && ++b;
    printf("%d",result2);
    return 0;
}