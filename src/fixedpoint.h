#ifndef FIXEDPOINT
#define FIXEDPOINT

#include <stdint.h>

/* It looks like were really going to have to specialize so:
 * LUT for sigmoid and tanh
 * 8 bit values - Q2.5 probably (1 sign bit) for values providing 8 bit multiplication speed and a range of +- ~ 4?
 *
 * This is because multiplication is required outside of sigmoid and tanh and is much slower if we have to do 16 bit multiply.
 * Hopefully 8 bit fixed point is precise enough...
 */

//// Can be set with compiler flags
//#ifndef Q_BASE_TYPE
//#define Q_BASE_TYPE int16_t
//#endif
//#ifndef Q_FRAC_BITS
//#define Q_FRAC_BITS 15
//#endif
//// Example of Q1.15:
//// #define Q_BASE_TYPE int16_t
//// #define Q_FRAC_BITS 15
//// Example of Q2.15:
//// #define Q_BASE_TYPE int16_t
//// #define Q_FRAC_BITS 14
//// Example of Q1.7:
//// #define Q_BASE_TYPE int8_t
//// #define Q_FRAC_BITS 7
//
//typedef Q_BASE_TYPE q_t;
//
//#define Q_SCALE ((q_t)1 << Q_FRAC_BITS)
//
//// Types we want:
//// Q1.15
//// Q2.14
//// Q1.7

typedef struct {
	// Fixed Point Stuff
} FP;

// Make lookup tables pre-computed for:
// Tanh
// Sigmoid
// etc

#endif
