/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Cpu.h
**     Project     : SignalGenerator
**     Processor   : MK22FN512VLH12
**     Component   : MK22FN512LH12
**     Version     : Component 01.048, Driver 01.00, CPU db: 3.00.000
**     Datasheet   : K22P121M120SF7RM, Rev. 1, March 24, 2014
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-03-12, 10:58, # CodeGen: 3
**     Abstract    :
**         This file collects Processor Expert components configuration 
**         and interface files.
**     Settings    :
**
**     Contents    :
**         SetClockConfiguration - LDD_TError Cpu_SetClockConfiguration(LDD_TClockConfiguration ModeID);
**         GetClockConfiguration - LDD_TClockConfiguration Cpu_GetClockConfiguration(void);
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
** @file Cpu.h
** @version 01.00
** @brief
**         This file collects Processor Expert components configuration 
**         and interface files.
*/         
/*!
**  @addtogroup Cpu_module Cpu module documentation
**  @{
*/         

#ifndef __Init_Config_H
#define __Init_Config_H
  
/* MODULE Init_Config.h */

/* Processor Expert types and constants */
#include "PE_Types.h"

/* Processor configuration file */
#include "CPU_Config.h"

/* PinSettings component header file */
#include "pin_mux.h"
  
/* Initialization component configuration header file */
#include "UART1_Config.h"
/* Initialization component static header file */
#include "UART1_Init.h"
/* Initialization component generated header file */
#include "UART1.h"

/* Initialization component configuration header file */
#include "I2C0_Config.h"
/* Initialization component static header file */
#include "I2C0_Init.h"
/* Initialization component generated header file */
#include "I2C0.h"

#endif /* __Init_Config_H */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.11]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
