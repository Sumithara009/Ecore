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
