// Q.2 DEVELOP A PROGRAM TO COUNT THE TOTAL NUMBER OF DIGITS IN A NUMBER ? //

#include<stdio.h>
#include<conio.h>
void main()
{
    int num, count=0;
    clrscr();

    printf("\n Enter Any Number: ");
    scanf("%d",&num);

    while(num > 0)
    {
      count++;
      num/=10;
    }
    printf("\n Sum of all Digit:%d",count);
    getch();


}