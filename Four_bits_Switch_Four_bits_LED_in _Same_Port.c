#include<AT89S52.h>
void main()
{
   P0=0xFF;
   while(1)
   {
      char a;
      a=P0;
      P0=(a<<4)|0x0F;/*Left shifting the values so the values are shifted to next bits.the values in next bit becomes zero so we make OR operation for perfect operation
   }
}
