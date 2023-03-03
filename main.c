#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Wybierz Program");
    printf("Wpisz wybrany numer od 1 do 9");


}
void decimal_to_binary(int num)
{
    for(int i=128;i>0;i>>=1)
    {
        if(i&num)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}

void decimal_to_BCD(int num)
{
    for(int i=8;i>0;i>>=1)
    {
        if(i&num)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}



void zad1p1()
{
    for(int i = 0; i<=255;i++)
    {
        decimal_to_binary(i);
    }
}

void zad1p2()
{
    for(int i = 0; i<=255;i--)
    {
        decimal_to_binary(i);
    }
}




void zad1p5()
{
    for(int i=99;i>=0;i++)
    {
        if(i<10)
        {
            decimal_to_BCD(i);
            printf("\n");
        }
        else
        {
            int temp = i;
            int secend = temp%10;
            temp=temp%10;
            int first = temp%10;
            decimal_to_BCD(first);
            decimal_to_BCD(secend);
            printf("\n");
        }
    }
}

void zad1p6()
{
    for(int i=99;i>=0;i--)
    {
        if(i<10)
        {
            decimal_to_BCD(i);
            printf("\n");
        }
        else
        {
            int temp = i;
            int secend = temp%10;
            temp=temp%10;
            int first = temp%10;
            decimal_to_BCD(first);
            decimal_to_BCD(secend);
            printf("\n");
        }
    }
}

void zad1p8 ()
{
    int snake=7,a=1;
    decimal_to_binary(snake);
while(a==1)
{
    for(int i=0;i<5;i++)
    {
        snake=snake<<1;
        decimal_to_binary(snake);
    }
    for(int i=0;i<5;i++)
    {
        snake=snake>>1;
        decimal_to_binary(snake);
    }
}
}
