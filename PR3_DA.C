//Q.3 DEVELOP A PROGRAM TO FIND THE SUM OF A NUMBER'S FIRST & LAST DIGIT ?

#include<stdio.h>
#include<conio.h>
void main()
{
    int fd, ld, num, sum;
    clrscr();

    printf("\n Enter Any Number:");
    scanf("%d",&num);

    ld=num%10;

    while(num>0)
    {
    fd=num%10;
    num/=10;
    }

    sum = fd + ld;
    printf("\n Sum of First Digit & Last Digit:%d",sum);
    getch();
}
