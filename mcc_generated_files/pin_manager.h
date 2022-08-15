/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1778
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED aliases
#define LED_TRIS                 TRISBbits.TRISB2
#define LED_LAT                  LATBbits.LATB2
#define LED_PORT                 PORTBbits.RB2
#define LED_WPU                  WPUBbits.WPUB2
#define LED_ANS                  ANSELBbits.ANSB2
#define LED_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define LED_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define LED_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define LED_GetValue()           PORTBbits.RB2
#define LED_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define LED_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define LED_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define LED_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set input aliases
#define input_TRIS                 TRISCbits.TRISC7
#define input_LAT                  LATCbits.LATC7
#define input_PORT                 PORTCbits.RC7
#define input_WPU                  WPUCbits.WPUC7
#define input_OD                   ODCONCbits.ODC7
#define input_ANS                  ANSELCbits.ANSC7
#define input_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define input_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define input_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define input_GetValue()           PORTCbits.RC7
#define input_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define input_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define input_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define input_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define input_SetPushPull()        do { ODCONCbits.ODC7 = 0; } while(0)
#define input_SetOpenDrain()       do { ODCONCbits.ODC7 = 1; } while(0)
#define input_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define input_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/