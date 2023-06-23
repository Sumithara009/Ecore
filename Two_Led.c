#include <AT89S52.h>
#define OFF 1
#define ON 0
#define led1 P2_4
#define led2 P2_5
void wait(int);
void main()
{
   led1 = OFF; /* led1 is made off */ 
   led2 = OFF; /* led2 is made off */ 
   while(1) /*Infinite loop*/
   {
     led1 = ON;
     led2 = OFF;
     wait(1);/* delay */
     led1 = OFF;
     led2 = ON;
     wait(1); /* delay */
   }
}
/* delay program*/
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
