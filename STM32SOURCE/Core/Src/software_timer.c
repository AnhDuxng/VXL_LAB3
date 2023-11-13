/*
 * software_timer.c
 *
 *  Created on: Nov 13, 2023
 *      Author: anhdu
 */

#include "software_timer.h"

int timer0_counter = 0;
int timer0_flag = 0;

int timer1_counter = 0;
int timer1_flag = 0;

int timer2_counter = 0;
int timer2_flag = 0;

void setTimer0(int duration) {
	timer0_counter = duration / TICK;
	timer0_flag = 0;
}

void setTimer1(int duration) {
	timer1_counter = duration / TICK;
	timer1_flag = 0;
}

void setTimer2(int duration) {
	timer2_counter = duration / TICK;
	timer2_flag = 0;
}


void timerRun() {
	if (timer0_counter > 0) {
		timer0_counter--;
		if (timer0_counter <= 0) {
			timer0_flag = 1;
		}
	}

	if (timer1_counter > 0) {
		timer1_counter--;
		if (timer1_counter <= 0) {
			timer1_flag = 1;
		}
	}

	if (timer2_counter > 0) {
		timer2_counter--;
		if (timer2_counter <= 0) {
			timer2_flag = 1;
		}
	}
}