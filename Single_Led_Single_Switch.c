/* Intially LED must be turned OFF.Make the LED whenever the SW is closed */
#include <AT89S52.h>
#define OFF 1
#define ON 0
#define SW P3_2
#define led P2_4
#define INPUT 1
void wait(int);

void main()
{
  __bit status;
  led = OFF;
  SW = INPUT;
   while(1) /*Infinite loop*/
   {
     status=SW;
     if(status==0)
     {
      led=!led;
      wait(10);
     }
     else
     {
     led=OFF;
     }
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
