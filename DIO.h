/*
 * DIO.h
 *
 *  Created on: Apr 7, 2017
 *      Author: ismail
 */

#ifndef DIO_H_
#define DIO_H_

void DIO_SetPortDir(u8 PortNum,u8 Dir);

void DIO_SetPintDir(u8 PortNum,u8 PinNum,u8 Dir);

u8 DIO_ReadPortValue(u8 PortNum);

u8 DIO_ReadPinValue(u8 PortNum,u8 PinNum);

void DIO_WritePortValue(u8 PortNum,u8 Dir);

void DIO_WritePintValue(u8 PortNum,u8 PinNum,u8 Dir);

#endif
/* DIO_H_ */
