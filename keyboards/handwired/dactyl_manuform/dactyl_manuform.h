#ifndef REV2_H
#define REV2_H

#include "dactyl_manuform.h"

//void promicro_bootloader_jmp(bool program);
#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

//void promicro_bootloader_jmp(bool program);


#define LAYOUT( \
	L00, L01, L02, L03, L04, L05,                     R00, R01, R02, R03, R04, R05,\
	L10, L11, L12, L13, L14, L15,                     R10, R11, R12, R13, R14, R15, \
	L20, L21, L22, L23, L24, L25,                     R20, R21, R22, R23, R24, R25, \
  L30, L31, L32, L33, L34, L35,                     R30, R31, R32, R33, R34, R35, \
	     L41, L42,                                         R42, R43,      \
                       L43, L44,                     R40, R41,                \
                                 L54, L53, R51, R50,                          \
                                 L52, L51, R53, R52                           \
	) \
	{ \
		{ L00, L01, L02, L03, L04, L05 }, \
		{ L10, L11, L12, L13, L14, L15 }, \
		{ L20, L21, L22, L23, L24, L25 }, \
    { L30, L31, L32, L33, L34, L35 }, \
		{ KC_NO, KC_NO, L41, L42, L43, L44 }, \
		{ KC_NO, KC_NO, L51, L52, L53, L54 }, \
\
		{ R00, R10, R20, R30, R40, R50 },    \
		{ R01, R11, R21, R31, R41, R52 },    \
		{ R02, R12, R22, R32, R42, R52 },    \
    { R03, R13, R23, R33, R43, R53 },    \
		{ R04, R14, R24, R34, KC_NO, KC_NO },  \
		{ R05, R15, R25, R35, KC_NO, KC_NO }  \
	}


#endif
