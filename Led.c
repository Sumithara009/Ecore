#include <AT89S52.h>
int main()
{
   while(1)/*infinite loop*/
   {
     P0_1=!P0_1; /* led glows */
   }
}
