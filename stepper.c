#include <reg51.h>
sbit f_10ml = P3 ^ 0;
sbit f_75ml= P3 ^ 1;
sbit f_50ml = P3 ^ 2;
sbit f_25ml = P3 ^ 3;
sbit clk = P3^6;


unsigned char x = 1;

void msdelay(unsigned int time)

{
    unsigned int i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 922; j++);
}

void main()

{

    f_10ml = 1;
    f_75ml = 1;
    f_50ml = 1;
		f_25ml = 1;
		clk = 1;
    P2 = 0x00;

    while (1)

    {
        if(clk == 0)
				{
					if (f_10ml == 0)
					{
						P2 = 0x09;
						msdelay(x);
						P2 = 0x01;
						msdelay(x);
						P2 = 0x03;
						msdelay(x);
						P2 = 0x02;
						msdelay(x);
						P2 = 0x06;
						msdelay(x);
						P2 = 0x04;
						msdelay(x);
						P2 = 0x0C;
						msdelay(x);
						P2 = 0x08;
						msdelay(x);
						P2 = 0x09;
						msdelay(x);
					}
					else
					{
						P2 = 0X00;
					}
					if (f_75ml == 0)
					{
						P2 = 0x09;
						msdelay(x);
						P2 = 0X01;
						msdelay(x);
						P2 = 0x03;
						msdelay(x);
						P2 = 0x02;
						msdelay(x);
						P2 = 0x06;
						msdelay(x);
						P2 = 0x04;
						msdelay(x);
						P2 = 0x0C;
						msdelay(x);
						
					}
					else{
						P2 = 0x00;
					}
					if (f_50ml == 0)
					{
						P2 = 0x09;
						msdelay(x);
						P2 = 0x01;
						msdelay(x);
						P2 = 0x03;
						msdelay(x);
						P2 = 0x02;
						msdelay(x);
						P2 = 0x06;
						msdelay(x);
					}
					else
					{
						P2 =0x00;
					}
					if(f_25ml == 0)
					{
						P2 = 0x09;
						msdelay(x);
						P2 = 0x01;
						msdelay(x);
						P2 = 0x03;
						msdelay(x);
						
					}
					else {
						P2 = 0X00;
					}
				    }
				else
				{
					if (f_10ml == 0)
        {
					P2 = 0x09;
					msdelay(x);
					P2= 0x08;
					msdelay(x);
					P2 = 0x0C;
					msdelay(x);
					P2 = 0x04;
					msdelay(x);
					P2 = 0X06;
					msdelay(x);
					P2 = 0X02;
					msdelay(x);
					P2 = 0X03;
					msdelay(x);
					P2 = 0X01;
					msdelay(x);
					P2 = 0x09;
					msdelay(x);
        }

        else
        {
          P2 = 0x00;
					msdelay(x);
        }
				if (f_75ml == 0)
				{
					P2 = 0x09;
					msdelay(x);
					P2= 0x08;
					msdelay(x);
					P2 = 0x0C;
					msdelay(x);
					P2 = 0x04;
					msdelay(x);
					P2 = 0X06;
					msdelay(x);
					P2 = 0X02;
					msdelay(x);
					P2 = 0X03;
					msdelay(x);
				}
				else
				{
					 P2 = 0x00;
					msdelay(x);
				}
				if (f_50ml == 0)
				{
					P2 = 0x09;
					msdelay(x);
					P2= 0x08;
					msdelay(x);
					P2 = 0x0C;
					msdelay(x);
					P2 = 0x04;
					msdelay(x);
					P2 = 0X06;
					msdelay(x);
					
				}
				else 
				{
					P2 = 0x00;
					msdelay(x);
				}
				if (f_25ml == 0)
				{
					P2 = 0x09;
					msdelay(x);
					P2= 0x08;
					msdelay(x);
					P2 = 0x0C;
					msdelay(x);
					
				}
				else 
				{
					P2 = 0x00;
					msdelay(x);
				}
				}
}
}

