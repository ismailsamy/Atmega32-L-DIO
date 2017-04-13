#include "types.h"
//#include "register.h" dont need to call its already in dio.c
#include "DIO.h"
#include<util/delay.h>
#define F_CPU 16000000UL // sync frequancy with atmega 32

int  main()
{
	DIO_SetPintDir(0,0b00000001,1);


}
/*
 *
	DIO_SetPortDir( 0,0xFF);   //output // DIO_SetPortDir(u8 PortNum,u8 Dir);
	DIO_WritePortValue(0,0x00);
 *
while(1){
for(u8 i=0;i<8;i++)
{
DIO_WritePintValue(0,i,1);
_delay_ms(150);

DIO_WritePintValue(0,i,0);
_delay_ms(150);

}
for(u8 i=7;i>0;i--)//when i used >= it will be 255 and stuck with loop at pin one flashing
		{
			DIO_WritePintValue(0,i,1);//
			_delay_ms(150);

			DIO_WritePintValue(0,i,0);
			_delay_ms(150);
	}
}
*/





/*set port direction as output
 * set port direction as input
 * read pin value (port b , pin 1 , )==1;
 * write pin value(port a,pin 1,high;
 *
 *
DIO_SetPortDir( 0,0xFF);   //output // DIO_SetPortDir(u8 PortNum,u8 Dir);
DIO_SetPortDir(1,0x00); // pin 0 output

while(1){

if((DIO_ReadPinValue(1,0b00000001))==1)
{
 DIO_WritePintValue(0,0b00000001,1);
 }

else if((DIO_ReadPinValue(1,0b00000001))==0)
	{
	 DIO_WritePintValue(0,0b00000001,0);
	}
else{

}
}

*/




/* select port direction as output
 * writing port value as output also
 * x= read port value
 * wirting port value using x value
 * while(1) used to loop the function DIO
 *
DIO_SetPortDir( 0,0xff);   //output // DIO_SetPortDir(u8 PortNum,u8 Dir);
DIO_WritePortValue(0,0x00);

while(1){

u8 x=DIO_ReadPortValue(1);

DIO_WritePortValue(0,x);


}
*/
