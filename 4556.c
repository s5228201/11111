#include<reg52.h>
sbit P1_1=P1^1;
unsigned char xx;

void delay()
{
   unsigned int i,j;
 for(i=0;i<300;i++)
 {
   for(j=0;j<120;j++)
   {
   }
 }
}


void main()
{


unsigned char mm;

while(1)
{
P1_1=0;
delay();
P1_1=1;

delay();
}
while(1);
}