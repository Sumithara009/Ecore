#include <AT89S52.h>
#define FOSC 12000000 /*frequency of oscillation*/
#define FTIM FOSC/12 /*time period of one machine cycle*/
#define LED P0_0 /*configure LED in P0.0*/

void main()
{
  TR0=0;
  TMOD=((TMOD&0xF0)|0x02);
  TH0=0x9c;
  TL0=0x9c;
  TR0=1;
 while(1)
 {
  char i;
  for(i=0;i<10;i++)
  {
     while(TF0==0)
     {}
      TF0=0;
  }
     LED=!LED;
     /*TR0=0;
     TH0=0xFC;
     TL0=0x18;
     TR0=1;*/
   }
}
