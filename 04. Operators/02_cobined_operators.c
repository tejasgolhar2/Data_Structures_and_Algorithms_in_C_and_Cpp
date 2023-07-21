#include<stdio.h>
#include<conio.h>

int main()
{
    int a=10,b=12,c,d,e=56;
    //clrscr();
    c = b++;
    d = b;
    printf("%d\n",a<b>c<d);
    printf("%d\n",b==e);
    printf("%d\n",c+1>e);
    printf("%d", a+c==b>e<c+d);
    getch();
    return 0;
}