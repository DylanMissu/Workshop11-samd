/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
/*
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * + Pin number +  Autonomo pin    |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | Digital Low      |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */


#include "variant.h"

/*
 * Pins descriptions for Workshop11 Logger Zero
 *
 *  0..15 digital
 * 16..31 analog, A0..A15
 */
const PinDescription g_APinDescription[]=
{ 
  /*
  | PORT | PIN | PIN_TYPE    | PIN_ATTRIBUTES                                    | ADC_CHANNEL   | PWM_CHANNEL | TIMER_CHANNEL | EXT. INTERRUPT |
  */

  //0
  { PORTB, 31, PIO_SERCOM_ALT,  PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_15  }, // RX, SERCOM5/PAD[1], D0
  
  //1
  { PORTB, 30, PIO_SERCOM_ALT,  PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_14  }, // TX, SERCOM5/PAD[0], D1

  //2
  { PORTA, 2,  PIO_ANALOG,      PIN_ATTR_DIGITAL,                                      DAC_Channel0,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2   }, //  D2
  
  //3
  { PORTA, 3,  PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3   }, //  D3
  
  //4
  { PORTB, 4,  PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_4   }, //  D4
  
  //5
  { PORTB, 6,  PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6   }, //  D5
  
  //6
  { PORTB, 7,  PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_7   }, //  D6
  
  //7
  { PORTB, 8,  PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_8   }, //  D7
  
  //8
  { PORTB, 10, PIO_TIMER,       (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER),    No_ADC_Channel, PWM5_CH0,   TC5_CH0,      EXTERNAL_INT_10  }, // TC5[0], D8
  
  //9
  { PORTB, 11, PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11  }, //  D9
  
  //10
  { PORTA, 23, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER),     No_ADC_Channel, PWM4_CH1,   TC4_CH1,      EXTERNAL_INT_7   }, // TC4[1], D10
  
  //11
  { PORTA, 20, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER),     No_ADC_Channel, PWM7_CH0,   TC7_CH0,      EXTERNAL_INT_4   }, // TC7[0], D11
  
  //12
  { PORTA, 22, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER),     No_ADC_Channel, PWM4_CH0,   TC4_CH0,      EXTERNAL_INT_6   }, // TC4[0], D12
  
  //13
  { PORTA, 21, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER),     No_ADC_Channel, PWM1_CH0,   TC7_CH1,      EXTERNAL_INT_5   }, // TC7[1], D13 LED_BUILTIN
  
  //14
  { PORTA, 10, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER),     No_ADC_Channel, PWM7_CH1,   TCC1_CH0,     EXTERNAL_INT_10  }, // TCC1[0], D14
  
  //15
  { PORTA, 11, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER),     No_ADC_Channel, PWM1_CH1,   TCC1_CH1,     EXTERNAL_INT_11  }, // TCC1[1], D15

  //16
  { PORTA, 12, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER),     No_ADC_Channel, PWM2_CH0,   TCC2_CH0,     EXTERNAL_INT_NONE}, // TCC2[0], LED_RED,  D16
  
  //17
  { PORTA, 13, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER),     No_ADC_Channel, PWM5_CH1,   TC5_CH1,      EXTERNAL_INT_NONE}, // TC5[1], LED_GREEN, D17
  
  //18
  { PORTA, 14, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER),     No_ADC_Channel, PWM2_CH1,   TCC2_CH1,     EXTERNAL_INT_NONE},// TCC2[1], LED_BLUE,  D18
  
  //19
  { PORTA, 15, PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_15  },// BLUETOOTH_WAKE,     D19
  
  //20
  { PORTA, 16, PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE},
  
  //21
  { PORTA, 17, PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE},
  
  //22
  { PORTA, 18, PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE},
  
  //23
  { PORTA, 19, PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE},

  //24
  { PORTB,  5, PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE},
  
  //25
  { PORTB,  9, PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE},
  
  //26
  { PORTB, 12, PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE},
  
  //27
  { PORTB, 15, PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE},
  
  //28
  { PORTB, 16, PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE},
  
  //29
  { PORTB, 17, PIO_OUTPUT,      PIN_ATTR_DIGITAL,                                      No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE},

  //30
  { PORTB,  0, PIO_ANALOG,     PIN_ATTR_ANALOG,                                        ADC_Channel8,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_0   }, // ADC/AIN[8], A0
  
  //31
  { PORTB,  1, PIO_ANALOG,     PIN_ATTR_ANALOG,                                        ADC_Channel9,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_1   }, // ADC/AIN[9], A1
  
  //32
  { PORTB,  2, PIO_ANALOG,     PIN_ATTR_ANALOG,                                        ADC_Channel10,  NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2   }, // ADC/AIN[0], A2
  
  //33
  { PORTB,  3, PIO_ANALOG,     PIN_ATTR_ANALOG,                                        ADC_Channel11,  NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3   }, // ADC/AIN[1], A3
  
  //34
  { PORTA,  8, PIO_ANALOG,     PIN_ATTR_ANALOG,                                        ADC_Channel16,  NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NMI }, // ADC/AIN[2], A4
  
  //35
  { PORTA,  9, PIO_ANALOG,     PIN_ATTR_ANALOG,                                        ADC_Channel17,  NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9   }, // ADC/AIN[3], A5
  
  //36
  { PORTA,  4, PIO_ANALOG,     PIN_ATTR_ANALOG,                                        ADC_Channel4,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE}, // ADC/AIN[12], TEMPERATURE, A6
  
  //37
  { PORTA,  7, PIO_ANALOG,     PIN_ATTR_ANALOG,                                        ADC_Channel18,  NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_10  }, // ADC/AIN[18], A7

  //38
  { PORTB, 14, PIO_SERCOM,     PIN_ATTR_DIGITAL,                                       No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_14  }, // TX: SERCOM4/PAD[2]
  
  //39
  { PORTB, 13, PIO_SERCOM,     PIN_ATTR_DIGITAL,                                       No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_13  }, // RX: SERCOM4/PAD[1]
    
  //40
  { PORTA, 6, PIO_SERCOM_ALT,  PIN_ATTR_DIGITAL,                                       No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_5   }, // TX: SERCOM0/PAD[2] //LORA
  
  //41
  { PORTA, 5, PIO_SERCOM_ALT,  PIN_ATTR_DIGITAL,                                       No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6   }, // RX: SERCOM0/PAD[1] //LORA

  //42
  { PORTA, 24, PIO_COM,        PIN_ATTR_NONE,                                         No_ADC_Channel,  NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE}, // USB/DM
  
  //43
  { PORTA, 25, PIO_COM,        PIN_ATTR_NONE,                                         No_ADC_Channel,  NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE}, // USB/DP

  //44
  { PORTB, 16, PIO_OUTPUT,     PIN_ATTR_DIGITAL,                                      No_ADC_Channel,  NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE}, // FLASH CS
};

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TC3, TC4, TC5, TC6, TC7 } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ; // Serial2
SERCOM sercom1( SERCOM1 ) ; // I2C
SERCOM sercom2( SERCOM2 ) ; // I2C1
SERCOM sercom3( SERCOM3 ) ; // SPI
SERCOM sercom4( SERCOM4 ) ; // Serial1
SERCOM sercom5( SERCOM5 ) ; // Serial


Uart Serial( &sercom5, PIN_SERIAL_RX, PIN_SERIAL_TX, PAD_SERIAL_RX, PAD_SERIAL_TX ) ;
void SERCOM5_Handler()
{
  Serial.IrqHandler();
}

Uart Serial1( &sercom4, PIN_SERIAL1_RX, PIN_SERIAL1_TX, PAD_SERIAL1_RX, PAD_SERIAL1_TX ) ;
void SERCOM4_Handler()
{
  Serial1.IrqHandler();
}

Uart Serial2( &sercom0, PIN_SERIAL2_RX, PIN_SERIAL2_TX, PAD_SERIAL2_RX, PAD_SERIAL2_TX );
void SERCOM0_Handler()
{
  Serial2.IrqHandler();
}

