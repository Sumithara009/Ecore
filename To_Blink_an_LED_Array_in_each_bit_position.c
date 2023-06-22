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

Alternate optimal code1:

#include <AT89S52.h>
void wait(int);
void main()
{
   char data=0x01;
   char i;
     while(1)
     {
       for(i=0;i<8;i++)/*for loop for running 8 times*/
       {
         P0=~(data<<i);
         wait(1);
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

Alternate optimal code2:

#include <AT89S52.h>
void wait(int);
void main()
{
   const char data[9]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
   char i;
     while(1)
     {
       for(i=0;i<8;i++)/*for loop for running 8 times*/
       {
         P0=~data[i];
         wait(1);
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
