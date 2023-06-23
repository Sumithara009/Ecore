#include<AT89S52.h>
#define SW P0
#define LED P1
void wait(int);
void main()
{
    char s;
    SW = 0xFF;
    while(1)
    {
        s=SW;
        LED=s;
        wait(1);
        LED=0xFF;
        wait(1);
    }
}
/* delay program */
void wait(int del)
{
   int c1,c2;
   for(c1=0;c1<del;c1++)
   {
     for(c2=0;c2<15;c2++)
     {
     }
   }
}
