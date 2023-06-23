#include <AT89S52.h>
#define led P2_4
#define ON 0
#define OFF 1
#define SW1 P3_3
#define SW2 P3_4
#define INPUT 1
/* XOR gate logic for LED glow*/
void main()
{
   led = OFF; /* Turn off the LED */
   while(1) /*Infinite loop*/
   {
     if((SW1==0 && SW2==1) || (SW1==1 && SW2==0))/*give Sw1 and Sw2 alternate logic to glow*/
     led = ON;
     else
     led = OFF;
   }
}
