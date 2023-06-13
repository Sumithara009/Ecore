#include <AT89S52.h>

void delay(void);

#include <AT89S52.h>	/* include header for AT89S52 */ 
void wait(int);		/* declare delay function */
void main()
{
 while(1)
 P2_0=1;	/*Initially turn OFF the LED */
 while(1)	/* Execute below lines in Super loop (Infinite loop) */
 {
  P2_0=0;
  delay();
  P2_0=1;
  delay();
  P2_0=0;	/* Turn On the LED */
  wait(1);	/* Wait for sometime 100us */
  P2_0=1;	/* Turn OFF the LED */
  wait(1);	/* Wait for sometime 100us */
 }
}

void delay(void)
void wait(int del)  /* this program generate delay in multiples of 100us */
{
 int i;
 for(i=0;i<100;i++)
 {}
 int c1,c2;  /* Inner and outer loop Count variables */
 for(c1=0; c1<del; c1++)	/* Outer loop runs for "del" times */
 {
  for(c2=0; c2<15; c2++)  /* Inner loop runs for 15 times */
  {
  }
 }
}
