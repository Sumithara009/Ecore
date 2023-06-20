#include <AT89S52.h>
#define led P2_4
#define ON 0
#define OFF 1
#define SW1 P3_3
#define SW2 P3_4
#define INPUT 1
/* OR gate logic for LED glow*/
void main()
{
   led = OFF; /* Turn off the LED */
   while(1) /*Infinite loop*/
   {
     if(SW1==1 && SW2==1)/*Sw1 is OFF and Sw2 is OFF*/
     led = OFF;
     else
     led = ON;
   }
}
