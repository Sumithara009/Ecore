/* Read switch at P3.3 nd Turn ON the LED at p2.4 if switch is closed(Initially LED is off)*/

#include <AT89S52.h>
#define led P2_4
#define ON 0
#define OFF 1
#define SW P3_3
#define INPUT 1
void main()
{
   __bit status; /* Initializing a bit variable*/
   led = OFF; /* Turn off the LED */
   SW = INPUT; /* Configure port pin to switch as Input */
   while(1) /*Infinite loop*/
   {
     status=SW;/*Read the switch and store the logic in the variable status*/
     led=!status;/*write logic to LED*/
   } 
}
