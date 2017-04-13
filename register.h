
#ifndef REGISTER_H_
#define REGISTER_H_

///////FROM PORT A TO PORT D //////////////
#define DDRA *( (volatile u8*)0X3A)  // must putted inside prackets to take all of its values
#define PORTA (*( (volatile u8*)0X3B) )
#define PINA (*( (volatile u8*)0X39) )

#define DDRB (*((volatile u8*)0X37))
#define PORTB (*((volatile u8*)0X38))
#define PINB (*((volatile u8*)0X36))

#define DDRC (*((volatile u8*)0X34))
#define PORTC (*((volatile u8*)0X35))
#define PINC (*((volatile u8*)0X33))

#define DDRD (*((volatile u8*)0X31))
#define PORTD (*((volatile u8*)0X32))
#define PIND (*((volatile u8*)0X30))
///////END FROM PORT A TO PORT D //////////////

#define SREG (*((volatile u8*)0X5F))
#define SPH (*((volatile u8*)0X5E))
#define SPL (*((volatile u8*)0X5D))
#define OSR0 (*((volatile u8*)0X5C))//Timer/Counter0 Output Compare Register
#define GICR (*((volatile u8*)0X5B))
#define GIFR (*((volatile u8*)0X5A))

#define TIMSK (*((volatile u8*)0X59))
#define TIFR (*((volatile u8*)0X58))
#define SPMCR (*((volatile u8*)0X57))
#define TWCR (*((volatile u8*)0X56))
#define MCUCR (*((volatile u8*)0X55))
#define MCUCSR (*((volatile u8*)0X54))
#define TCCR0 (*((volatile u8*)0X53))

#define TCNT0 (*((volatile u8*)0X52))//Timer/Counter0 (8 Bits)
#define OSCCAL (*((volatile u8*)0X51))//Oscillator Calibration Register
#define OCDR (*((volatile u8*)0X51))//On-Chip Debug Register

#define SFIOR (*((volatile u8*)0X50))
#define TCCR1A (*((volatile u8*)0X4F))
#define TCCR1B (*((volatile u8*)0X4E))
#define TCNT1H (*((volatile u8*)0X4D))//Timer/Counter1 – Counter Register High Byte
#define TCNT1L (*((volatile u8*)0X4C))//Timer/Counter1 – Counter Register Low Byte

#define OCR1AH (*((volatile u8*)0X4B))//Timer/Counter1 – Output Compare Register A High Byte
#define OCR1AL (*((volatile u8*)0X4A))//Timer/Counter1 – Output Compare Register A Low Byte
#define OCR1BH (*((volatile u8*)0X49))//Timer/Counter1 – Output Compare Register B High Byte
#define OCR1BL (*((volatile u8*)0X48))//Timer/Counter1 – Output Compare Register B Low Byte
#define ICR1H (*((volatile u8*)0X47))//Timer/Counter1 – Input Capture Register High Byte
#define ICR1L (*((volatile u8*)0X46))//Timer/Counter1 – Input Capture Register Low Byte

#define TCCR2 (*((volatile u8*)0X45))

#define TCNT2 (*((volatile u8*)0X44))//Timer/Counter2 (8 Bits)
#define OCR2 (*((volatile u8*)0X43))//Timer/Counter2 Output Compare Register

#define ASSR (*((volatile u8*)0X42))
#define WDTCR (*((volatile u8*)0X41))
#define UBRRH (*((volatile u8*)0X40))
#define UCSRC (*((volatile u8*)0X40))

#define EEARH (*((volatile u8*)0X3F))
#define EEARL (*((volatile u8*)0X3E))//EEPROM Address Register Low Byte
#define EEDR (*((volatile u8*)0X3D))//EEPROM Data Register
#define EECR (*((volatile u8*)0X3C))

#define SPDR (*((volatile u8*)0X2F))//SPI Data Register
#define SPSR (*((volatile u8*)0X2E))
#define SPCR (*((volatile u8*)0X2D))
#define UDR (*((volatile u8*)0X2C))//USART I/O Data Register
#define UCSRA (*((volatile u8*)0X2B))
#define UCSRB (*((volatile u8*)0X2A))
#define UBRRL (*((volatile u8*)0X29))//USART Baud Rate Register Low Byte
#define ACSR (*((volatile u8*)0X28))
#define ADMUX (*((volatile u8*)0X27))
#define ADCSRA (*((volatile u8*)0X26))

#define ADCH (*((volatile u8*)0X25))//ADC Data Register High Byte
#define ADCL (*((volatile u8*)0X24))//ADC Data Register Low Byte

#define TWDR (*((volatile u8*)0X23))//Two-wire Serial Interface Data Register
#define TWAR (*((volatile u8*)0X22))



#endif
