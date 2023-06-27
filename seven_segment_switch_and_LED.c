#include<AT89S52.h>
#define SEV_SEG P0
#define SW P1
const char code[11]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
const char read_Switch[9]={0xFE,0xFD,0xFB,0xF7,0xEF,0xDF,0xBF,0x7F};
void main()
{
     SW = 0xFF;/*switch is OFF*/
     SEV_SEG=0xFF;/*display is OFF*/
     while(1)
     {
       char s,c;/*declare a count varible c*/
       s=SW;/*write switch logic to variable s*/
       for(c=0;c<8;c++)
       {
         if(s==read_Switch[c])/* check if switch and led are same*/
         {
        
         break;
         }
         else
         {
         }
        }
        if(c!=8)
        {
            SEV_SEG=code[c];/*Code values assigned to seven segment display*/
        }
        else
         SEV_SEG=0xFF;/*else false*/
       
     }
}
