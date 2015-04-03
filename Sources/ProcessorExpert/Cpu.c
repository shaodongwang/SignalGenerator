/** ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Cpu.c
**     Project     : SignalGenerator
**     Processor   : MK22FN512VLH12
**     Component   : MK22FN512LH12
**     Version     : Component 01.048, Driver 01.00, CPU db: 3.00.000
**     Datasheet   : K22P121M120SF7RM, Rev. 1, March 24, 2014
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-03-12, 10:45, # CodeGen: 2
**     Abstract    :
**
**     Settings    :
**
**     Contents    :
**         SetClockConfiguration - LDD_TError Cpu_SetClockConfiguration(LDD_TClockConfiguration ModeID);
**         GetClockConfiguration - LDD_TClockConfiguration Cpu_GetClockConfiguration(void);
**
**     (c) Freescale Semiconductor, Inc.
**     2004 All Rights Reserved
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file Cpu.c
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup Cpu_module Cpu module documentation
**  @{
*/         

/* MODULE Cpu. */

#include "FreeRTOS.h" /* FreeRTOS interface */
#include "Cpu.h"
#include "Events.h"
#include "Init_Config.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
** ===================================================================
**     Method      :  Common_Init (component MK22FN512LH12)
**     Description :
**         Initialization of registers for that there is no 
**         initialization component.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#if CPU_COMMON_INIT
void Common_Init(void)
{
  /* Common initialization of registers which initialization is required 
     for proper functionality of components in the project but initialization
     component which would be configuring these registers is missing 
     in the project. 
     Add associated initialization component to the project to avoid 
     initialization of registers in the Common_Init().
     Also, after reset value optimization property affects initialization of 
     registers in this method (see active generator configuration 
     Optimizations\Utilize after reset values property or enabled processor 
     component Common settings\Utilize after reset values property) */
  /* Enable clock gate of peripherals initialized in Common_Init() */
  /* SIM_SCGC5: PORTE=1,PORTD=1,PORTC=1,PORTB=1,PORTA=1 */
  SIM_SCGC5 |= SIM_SCGC5_PORTE_MASK |
               SIM_SCGC5_PORTD_MASK |
               SIM_SCGC5_PORTC_MASK |
               SIM_SCGC5_PORTB_MASK |
               SIM_SCGC5_PORTA_MASK;

  /* PORTA_PCR1: ISF=0,MUX=1 */
  PORTA_PCR1 = (uint32_t)((PORTA_PCR1 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x06)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x01)
               ));
  /* PORTA_PCR12: ISF=0,MUX=6 */
  PORTA_PCR12 = (uint32_t)((PORTA_PCR12 & (uint32_t)~(uint32_t)(
                 PORT_PCR_ISF_MASK |
                 PORT_PCR_MUX(0x01)
                )) | (uint32_t)(
                 PORT_PCR_MUX(0x06)
                ));
  /* PORTA_PCR13: ISF=0,MUX=6 */
  PORTA_PCR13 = (uint32_t)((PORTA_PCR13 & (uint32_t)~(uint32_t)(
                 PORT_PCR_ISF_MASK |
                 PORT_PCR_MUX(0x01)
                )) | (uint32_t)(
                 PORT_PCR_MUX(0x06)
                ));
  /* PORTA_PCR2: ISF=0,MUX=1 */
  PORTA_PCR2 = (uint32_t)((PORTA_PCR2 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x06)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x01)
               ));
  /* PORTA_PCR5: ISF=0,MUX=6 */
  PORTA_PCR5 = (uint32_t)((PORTA_PCR5 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x01)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x06)
               ));
  /* PORTB_PCR17: ISF=0,MUX=1 */
  PORTB_PCR17 = (uint32_t)((PORTB_PCR17 & (uint32_t)~(uint32_t)(
                 PORT_PCR_ISF_MASK |
                 PORT_PCR_MUX(0x06)
                )) | (uint32_t)(
                 PORT_PCR_MUX(0x01)
                ));
  /* PORTB_PCR2: ISF=0,MUX=2,ODE=1 */
  PORTB_PCR2 = (uint32_t)((PORTB_PCR2 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x05)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x02) |
                PORT_PCR_ODE_MASK
               ));
  /* PORTB_PCR3: ISF=0,MUX=2,ODE=1 */
  PORTB_PCR3 = (uint32_t)((PORTB_PCR3 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x05)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x02) |
                PORT_PCR_ODE_MASK
               ));
  /* PORTC_PCR0: ISF=0,MUX=1 */
  PORTC_PCR0 = (uint32_t)((PORTC_PCR0 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x06)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x01)
               ));
  /* PORTC_PCR1: ISF=0,MUX=1 */
  PORTC_PCR1 = (uint32_t)((PORTC_PCR1 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x06)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x01)
               ));
  /* PORTC_PCR10: ISF=0,MUX=2,ODE=1 */
  PORTC_PCR10 = (uint32_t)((PORTC_PCR10 & (uint32_t)~(uint32_t)(
                 PORT_PCR_ISF_MASK |
                 PORT_PCR_MUX(0x05)
                )) | (uint32_t)(
                 PORT_PCR_MUX(0x02) |
                 PORT_PCR_ODE_MASK
                ));
  /* PORTC_PCR11: ISF=0,MUX=1,ODE=1 */
  PORTC_PCR11 = (uint32_t)((PORTC_PCR11 & (uint32_t)~(uint32_t)(
                 PORT_PCR_ISF_MASK |
                 PORT_PCR_MUX(0x06)
                )) | (uint32_t)(
                 PORT_PCR_MUX(0x01) |
                 PORT_PCR_ODE_MASK
                ));
  /* PORTC_PCR3: ISF=0,MUX=3 */
//  PORTC_PCR3 = (uint32_t)((PORTC_PCR3 & (uint32_t)~(uint32_t)(
//                PORT_PCR_ISF_MASK |
//                PORT_PCR_MUX(0x03)
//               )) | (uint32_t)(
//                PORT_PCR_MUX(0x03)
//               ));
  PORTC_PCR3 = (uint32_t)PORT_PCR_MUX(0x03)

		  /* PORTC_PCR4: ISF=0,MUX=3 */
//  PORTC_PCR4 = (uint32_t)((PORTC_PCR4 & (uint32_t)~(uint32_t)(
//                PORT_PCR_ISF_MASK |
//                PORT_PCR_MUX(0x03)
//               )) | (uint32_t)(
//                PORT_PCR_MUX(0x03)
//               ));
  PORTC_PCR4 = (uint32_t)PORT_PCR_MUX(0x03)

				  /* PORTC_PCR5: ISF=0,MUX=4 */
  PORTC_PCR5 = (uint32_t)((PORTC_PCR5 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x03)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x04)
               ));
  /* PORTC_PCR7: ISF=0,MUX=4 */
  PORTC_PCR7 = (uint32_t)((PORTC_PCR7 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x03)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x04)
               ));
  /* PORTC_PCR8: ISF=0,MUX=4 */
  PORTC_PCR8 = (uint32_t)((PORTC_PCR8 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x03)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x04)
               ));
  /* PORTC_PCR9: ISF=0,MUX=4 */
  PORTC_PCR9 = (uint32_t)((PORTC_PCR9 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x03)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x04)
               ));
  /* PORTD_PCR0: ISF=0,MUX=1 */
  PORTD_PCR0 = (uint32_t)((PORTD_PCR0 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x06)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x01)
               ));
  /* PORTD_PCR1: ISF=0,MUX=1 */
  PORTD_PCR1 = (uint32_t)((PORTD_PCR1 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x06)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x01)
               ));
  /* PORTD_PCR2: ISF=0,MUX=2 */
  PORTD_PCR2 = (uint32_t)((PORTD_PCR2 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x05)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x02)
               ));
  /* PORTD_PCR3: ISF=0,MUX=2 */
  PORTD_PCR3 = (uint32_t)((PORTD_PCR3 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x05)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x02)
               ));
  /* PORTD_PCR4: ISF=0,MUX=1 */
  PORTD_PCR4 = (uint32_t)((PORTD_PCR4 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x06)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x01)
               ));
  /* PORTD_PCR5: ISF=0,MUX=1 */
  PORTD_PCR5 = (uint32_t)((PORTD_PCR5 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_MUX(0x06)
               )) | (uint32_t)(
                PORT_PCR_MUX(0x01)
               ));
  /* PORTD_PCR6: ISF=0,MUX=7 */
  PORTD_PCR6 = (uint32_t)((PORTD_PCR6 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK
               )) | (uint32_t)(
                PORT_PCR_MUX(0x07)
               ));
  /* PORTD_PCR7: ISF=0,MUX=7 */
  PORTD_PCR7 = (uint32_t)((PORTD_PCR7 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK
               )) | (uint32_t)(
                PORT_PCR_MUX(0x07)
               ));
  /* PORTE_PCR0: ISF=0,MUX=3 */
//  PORTE_PCR0 = (uint32_t)((PORTE_PCR0 & (uint32_t)~(uint32_t)(
//                PORT_PCR_ISF_MASK |
//                PORT_PCR_MUX(0x04)
//               )) | (uint32_t)(
//                PORT_PCR_MUX(0x03)
//               ));
  /* PORTE_PCR1: ISF=0,MUX=3 */
//  PORTE_PCR1 = (uint32_t)((PORTE_PCR1 & (uint32_t)~(uint32_t)(
//                PORT_PCR_ISF_MASK |
//                PORT_PCR_MUX(0x04)
//               )) | (uint32_t)(
//                PORT_PCR_MUX(0x03)
//               ));

//  PORTE_PCR1 = PORT_PCR_MUX(0x03);
  /* Disable clock gate of peripherals initialized in Common_Init() */
  /* SIM_SCGC5: PORTE=0,PORTD=0,PORTC=0,PORTB=0,PORTA=0 */
  SIM_SCGC5 &= (uint32_t)~(uint32_t)(
                SIM_SCGC5_PORTE_MASK |
                SIM_SCGC5_PORTD_MASK |
                SIM_SCGC5_PORTC_MASK |
                SIM_SCGC5_PORTB_MASK |
                SIM_SCGC5_PORTA_MASK
               );
}

#endif /* CPU_COMMON_INIT */

/*
** ===================================================================
**     Method      :  Components_Init (component MK22FN512LH12)
**     Description :
**         Initialization of components (with exception for Peripheral
**         Initialization Components which are initialized in 
**         Peripherals_Init() method).
**         For example, if automatic initialization feature 
**         is enabled in LDD component then its Init method call 
**         is executed in Components_Init() method.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#if CPU_COMPONENTS_INIT
void Components_Init(void)
{
  /* ### FreeRTOS "FRTOS1" init code ... */
#if configSYSTICK_USE_LOW_POWER_TIMER
  /* enable clocking for low power timer, otherwise vPortStopTickTimer() will crash */
  SIM_PDD_SetClockGate(SIM_BASE_PTR, SIM_PDD_CLOCK_GATE_LPTMR0, PDD_ENABLE);
#endif
//  vPortStopTickTimer(); /* tick timer shall not run until the RTOS scheduler is started */
//  xPortSysTickHandler();
}
#endif /* CPU_COMPONENTS_INIT */

/*
** ===================================================================
**     Method      :  Cpu_INT_NMIInterrupt (component MK22FN512LH12)
**
**     Description :
**         This ISR services the Non Maskable Interrupt interrupt.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
PE_ISR(Cpu_INT_NMIInterrupt)
{
	Cpu_OnNMIINT();
}


#ifdef __cplusplus
}
#endif

/* END Cpu. */

