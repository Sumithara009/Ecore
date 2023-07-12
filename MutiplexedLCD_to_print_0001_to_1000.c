#include<AT89S52.h>
#define Data P0
#define Digit P1
#define Blank 0x0F
const char code[11]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
const char digit[5]={0x0E,0x0D,0x0B,0x07};
void display(int);
void main()
{
int val=0001;
   while(1)
   {
    display(val++);
   }
 }
void display(int val)
{
 
     char d3,d2,d1,d0;
     d3=(val/1000);
     d2=(val%1000)/100;
     d1=(val%100)/10;
     d0=(val%10);
     Data=code[d3];
     Digit=digit[3];
     Digit=Blank;
     Data=code[d2];
     Digit=digit[2];
     Digit=Blank;
     Data=code[d1];
     Digit=digit[1];
     Digit=Blank;
     Data=code[d0];
     Digit=digit[0];
     Digit=Blank;  
}
