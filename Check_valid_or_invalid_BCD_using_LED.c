#include <AT89S52.h>
#define SW P0
#define LED P1_0

void main()
{
  char status,high,low;
  SW=0xFF;
  LED=1;
  while(1)
  {
     status = ~SW;
     low=status&0x0F;//masking the bits
     high=status>>4;
     if(low<=9 && high<=9)/*if high and low nibble less than 9,it is valid BCD.else invalid*/
     {
       LED=0;
     }
     else
     {
       LED=1;
     }
  }
}
