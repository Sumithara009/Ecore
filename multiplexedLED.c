#include<AT89S52.h>
#define DATA P0
#define DIGIT P1
const char code[11]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main()
{
   DATA=code[2];
   DIGIT=0x07;
  /* DIGIT=0x0F;*/
   while(1)
   {
      
   }
}
