#include <AT89S52.h>
void wait(int);
void main()
{
   {
     while(1)
     {
        P0=~0x01;
        wait(1); /* delay */
        P0=~0x02;
        wait(1); /* delay */
        P0=~0x04;
        wait(1); /* delay */
        P0=~0x08;
        wait(1); /* delay */
        P0=~0x10;
        wait(1); /* delay */
        P0=~0x20;
        wait(1); /* delay */
        P0=~0x40;
        wait(1); /* delay */
        P0=~0x80;
        wait(1); /* delay */
     }
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
