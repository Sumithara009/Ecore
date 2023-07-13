#include<AT89S52.h>
#define SCL P0_3
#define SDA P1_5

void i2c_init()
{
  SCL=0;/*make clock low initially they are high*/
  SDA=0;/*make data low*/
}

void i2c_start(void)
{
  SDA = 1;/*to make bus idle first make the data high*/
  SCL = 1;/*then make clock high (to make idle)*/
  SDA = 0;/*firstly make */
  SCL = 0;
}

void i2c_stop(void)
{
  SCL=1;
  SDA=1;
  SCL=0;
  SDA=0;  
}

void i2c_ack(void)
{
  SDA=0;
  SCL=1;
  SCL=0;
}

void i2c_nack(void)
{
   SDA=1;
   SCL=1;
   SCL=0;
}

void i2c_write(char b)
{
  char i;
  __bit v=1;
  while(v==1)
  {
    for(i=0;i<8;i++)
    {
      if((b)&(0x80>>i)!=0)
      {
        SDA=1;
      }
      else
      {
        SDA=0;
      }
      SCL=0;
      SCL=1;
    }
     SDA=1;
     SCL=1;
     v=SDA;
     SCL=0;
     SDA=0;
  }
}
char i2c_read(void)
{
  char s=0x00;/*initially it is zero*/
  char j;/*count variable*/
  SDA=1;
  for(j=0;j<8;j++)
  {
    SCL=1;
    if(SDA==1)
    {
       s=s|(0x80>>j);
    }
    else
    {
    }
     SCL=0;
  }
  SDA=0;
  return s;
}

void main()
{
   i2c_init();
   i2c_start();
   i2c_write(0xD0);
   i2c_write(0x00);
   i2c_write(0x00);
   i2c_stop();
   while(1)
   {
     i2c_start();
     i2c_write(0xD0);
     i2c_write(0x00);
     i2c_start();
     i2c_write(0xD1);
     P2=~i2c_read();/*device is active low,so we reverse it.*/
     i2c_nack();
     i2c_stop();
   }
}
