#include<AT89S52.h>
#define SEV_SEG P0
void wait(int);
void main()
{
    /* const char code[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};*/
     SEV_SEG=0xFF;/* OFF condition */
     while(1)
     {
       SEV_SEG = 0xB0;/* To blink 3*/
       wait(5);
       SEV_SEG = 0xFF;
       wait(5);
     }
}
/* delay program */
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
