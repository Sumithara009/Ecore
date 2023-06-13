#include <AT89S52.h>
void wait(int);
void main()
{
    P2_0=1;
    while(1)
    {
       P2_0=0;
       wait(1);/*100us*/
       P2_0=1;
       wait(1);/*100us*/
    }
}
void wait(int del)/*delay */
{
   int c1,c2;
   for(c1=0;c1<del;c1++)
   {
     for(c2=0;c2<15;c2++)
     {
     }
   }
}
