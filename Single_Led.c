#include <AT89S52.h>
#define OFF 1
#define ON 0
#define led P2_4
void wait(int);
void main()
{
   char n;
   led = OFF;
   for(n=0;n<10;n++)
   while(1) /*Infinite loop*/
   {
     led = ON;
     wait(1);
     led = OFF;
     wait(1);
   }
}
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
