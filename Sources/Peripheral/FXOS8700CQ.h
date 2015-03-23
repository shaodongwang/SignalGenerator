/*
 * FXOS8700CQ.h
 *
 *  Created on: Mar 13, 2015
 *      Author: TBiberdorf
 */

#ifndef FXOS8700CQ_H_
#define FXOS8700CQ_H_




const char *gFXOS8700CQTaskname;

void FXOS8700CQTask(void *pvParameters);

void readFXOSStatus();
void readFXOSWhoAmI();
void readFXOSx();
void readFXOSy();
void readFXOSz();

#endif /* FXOS8700CQ_H_ */