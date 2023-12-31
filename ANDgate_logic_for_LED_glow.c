#include <AT89S52.h>
#define led P2_4
#define ON 0
#define OFF 1
#define SW1 P3_3
#define SW2 P3_4
#define INPUT 1
/* AND gate logic for LED glow*/
void main()
{
   led = OFF; /* Turn off the LED */
   while(1) /*Infinite loop*/
   {
     if(SW1==0 && SW2==0)/*Sw1 and Sw2 is pressed*/
     led = ON;
     else
     led = OFF;
   }
}

Alternate logic 1:

#include <AT89S52.h>
#define led P2_4
#define ON 0
#define OFF 1
#define SW1 P3_3
#define SW2 P3_4
#define INPUT 1
/* AND gate logic for LED glow*/
void main()
{
   SW1=INPUT; /* SW1 is OFF */
   SW2=INPUT; /* SW2 is OFF */
   led = OFF; 
   while(1)
   {
    __bit a,b; /* Initialize Bit variables a and b */
    a=SW1;
    b=SW2;
    if(a==ON && b==ON)
    {
       led=ON;
    }
    else
    {
       led=OFF;
    }
   }
}

Alternate logic 2:

#include <AT89S52.h>
#define led P2_4
#define ON 0
#define OFF 1
#define SW1 P3_3
#define SW2 P3_4
#define INPUT 1
/* AND gate logic for LED glow*/
void main()
{
   SW1=INPUT;
   SW2=INPUT;
   led = OFF;
   while(1)
   {
    __bit a,b;
    a=!SW1;
    b=!SW2;
    led = !(a&b);
   }
}
