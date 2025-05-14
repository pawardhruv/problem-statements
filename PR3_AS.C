// Q.1 DEVELOP A PROGRAM THAT PRINTS ALL ALPHABETS FROM 'A' TO 'Z' BY SKIPPING 3 ALPHABETS USING A DO-WHILE LOOP?//

#include<stdio.h>
#include<conio.h>
void main()
{
    char ab = 'a';
    clrscr();
    do
    {
    printf(" %c", ab);
    ab = ab + 4;
    }
    while(ab<='z');
    getch ();

}