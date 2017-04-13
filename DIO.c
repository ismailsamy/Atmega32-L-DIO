/*
 * DIO.c
 *
 *  Created on: Apr 7, 2017
 *      Author: ismail
 */


#include "types.h"
#include "register.h"
#include "DIO.h"


void DIO_SetPortDir(u8 PortNum,u8 Dir)
{
	switch(PortNum)
	{

		case 0:
			{
			DDRA=Dir;
			}break;

		case 1:
			{
			DDRB=Dir;
			}break;

		case 2:
			{
				DDRC=Dir;
			}break;

		case 3:
		{
			DDRD=Dir;
		}break;

		default:
		{
		}break;
	}
}


void DIO_SetPintDir(u8 PortNum,u8 PinNum,u8 Dir)
{
	switch(PortNum){

		case 0:
		{
			if(Dir==1)
					{
					DDRA|=1<<PinNum; // using or to set this pin without affecting all pins
					}
					else if(Dir==0)
					{
					DDRA&=~(1<<PinNum); //~ complement for toggle
					}
					else{
					}
		     }break;

		case 1:
			{
			if(Dir==1)
					{
					DDRB|=1<<PinNum; // using or to set this pin without affecting all pins
					}
					else if(Dir==0)
					{
					DDRB&=~(1<<PinNum); //~ complement for toggle
					}
					else{
						}
			}
		break;

		case 2:
		{
			if(Dir==1)
					{
					DDRC|=1<<PinNum; // using or to set this pin without affecting all pins
					}
					else if(Dir==0)
					{
					DDRC&=~(1<<PinNum); //~ complement for toggle
					}
					else{
						}
			}break;

		case 3:
		{
					if(Dir==1)
					{
					DDRD|=1<<PinNum; // using or to set this pin without affecting all pins
					}
					else if(Dir==0)
					{
					DDRD&=~(1<<PinNum); //~ complement for toggle
					}
					else{
						}
		}break;

				default:
				{
				}break;

		}

}

u8 DIO_ReadPortValue(u8 PortNum)
{
	u8 Value=0;

	switch(PortNum)
	{
	case 0:{
			Value=PINA;
	}break;

	case 1:{
			Value=PINB;
	}break;
	case 2:{
			Value=PINC;
	}break;
	case 3:{
			Value=PIND;
	}break;
	default:{

			}
	}
	return (Value); // u8 must return a value
}


u8 DIO_ReadPinValue(u8 PortNum,u8 PinNum)
{
	u8 Value=0;
	switch(PortNum)
	{
	case 0:{
			Value=(PINA&(1<<PinNum)>>PinNum); // to seek it at the first least bit 000100000>>>00000001
	}break;
	case 1:{
			Value=(PINB&(1<<PinNum)>>PinNum);
	}break;
	case 2:{
			Value=(PINC&(1<<PinNum)>>PinNum);
	}break;
	case 3:{
			Value=(PIND&(1<<PinNum)>>PinNum);
	}break;
	}
	return (Value); // u8 must return value
}

void DIO_WritePintValue(u8 PortNum,u8 PinNum,u8 Dir)

{
		switch(PortNum)
		{
		case 0:{
			if(Dir==1)
					{
					PORTA|=1<<PinNum; // using or to set this pin without affecting all pins
					}
					else if(Dir==0)
					{
					PORTA&=~(1<<PinNum); //~ complement for toggle
					}
					else{

					}// after else if there is must else condition
		}break;

		case 1:{
			if(Dir==1)
					{
					PORTB|=1<<PinNum; // using or to set this pin without affecting all pins
					}
					else if(Dir==0)
					{
					PORTB&=~(1<<PinNum); //~ complement for toggle
					}
					else{

					}
		}break;

		case 2:{
			if(Dir==1)
					{
					PORTC|=1<<PinNum; // using or to set this pin without affecting all pins
					}
					else if(Dir==0)
					{
					PORTC&=~(1<<PinNum); //~ complement for toggle
					}
					else{

					}
		}break;

		case 3:{
			if(Dir==1)
					{
					PORTD|=1<<PinNum; /* using or to set this pin without affecting all pins*/
					}
					else if(Dir==0)
					{
					PORTD&=~(1<<PinNum); //~ complement for toggle
					}
					else{

					}
					}break;
		default:{
		}break;

		}
}

void DIO_WritePortValue(u8 PortNum,u8 Dir)
{
	switch(PortNum){
		case 0:{
			PORTA=Dir;
		}break;

		case 1:{
			PORTB=Dir;
		}break;

		case 2:{
			PORTC=Dir;
		}break;

		case 3:{
			PORTD=Dir;
		}break;

		default:{
		}break;
		}
}

