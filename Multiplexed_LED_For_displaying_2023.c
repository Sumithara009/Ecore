#include<AT89S52.h>
#define DATA P0
#define DIGIT P1
const char code[11]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main()
{
   while(1)
   {
   DATA=code[2];
   DIGIT=0x07;/*turn on the first display 0111*/
   DIGIT=0x0F;/*turn off the LED display */ /*delay*/
   DATA=code[0];
   DIGIT=0x0B;/*turn on the second display 1011*/
   DIGIT=0x0F;/*turn off the LED display*//*delay*/
   DATA=code[2];
   DIGIT=0x0D;/*turn on the third display 1101*/
   DIGIT=0x0F;/*turn off the LED display*//*delay*/
   DATA=code[3];
   DIGIT=0x0E;/*turn on the fourth display 1110*/
   DIGIT=0x0F;/*turn off the LED display*//*delay*/
   }
}
