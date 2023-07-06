#include <AT89S52.h>
#define Row P0
#define Col P1
const char pattern={0x7E,0xBD,0xDB,0xE7,0xDB,0xBD,0x7E};
void main()
{
   /*Row=0x10;
   Col=0xEF; for glowing of single led*/
   while(1)
   {s
     char i;
     for(i=0;i<8;i++)
     {
        Col=pattern[i];
        Row=0x01<<i;
        Row=0x00;
     }  
   }
}
