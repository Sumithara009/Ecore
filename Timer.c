#include <AT89S52.h>
#define FOSC 12000000 /*frequency of oscillation*/
#define FTIM FOSC/12 /*time period of one machine cycle*/
#define LED P0_0 /*configure LED in P0.0*/

void main()/*for mode 2*/
{
  TR0=0;
  TMOD=((TMOD&0xF0)|0x02);
  TH0=0xF6;
  TL0=0xF6;/*for 10 count*/
  TR0=1;
 while(1)
 {
  while(TF0==0)
  {}
     TF0=0;
     LED=!LED;
     /* for mode 1
     TR0=0;
     TH0=0xFC;
     TL0=0x18;
     TR0=1;*/
   }
}
