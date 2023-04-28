#include<stdio.h>
#include<conio.h>

main()
{

    int a,b,c;
    clrscr();

    printf("enter the value A=");
    scanf("%d",&a);
    printf("enter the value B=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("swap a=%d\n",a);
    printf("swap b=%d",b);
    getch();

 }