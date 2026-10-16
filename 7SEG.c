#include<p18f4580.h>
void delay(int a);
void main()
{

// Variable Initialize 

char arr[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
int i;

// one time execuation

TRISC = 0X00; // CONFIG AS DIGITAL O.P.

while(1)
{
for(i=0;i<10;i++)
{
PORTC = arr[i]; 
delay(10);
}
}
}
void delay(int a)
{
    int i, j;

    for(i = 0; i < a; i++)
    {
        for(j = 0; j < 1000; j++);
    }
}
