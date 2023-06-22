#include <AT89S52.h>
void wait(int);
void main()
{
   while(1)
   {
     P0=0xAA;
     wait(5); /* delay */
     P0=0x55;
     wait(5);  /* delay */
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

Alternate logic 1:

#include <AT89S52.h>
void wait(int);
void main()
{
   char data=0x55;
   while(1)
   {
     data = ~data;/*toggles the data*/
     P0=data;
     wait(5); /* delay */
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

Alternate logic 2:

   #include <AT89S52.h>
void wait(int);
void main()
{
   char data=0xAA;
   while(1)
   {
     P0=data;
     wait(5); /* delay */
     P0=data<<1;
     wait(5); /* delay */
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
