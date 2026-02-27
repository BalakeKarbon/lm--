#ifndef FIXEDPOINT
#define FIXEDPOINT

#include <stdint.h>

#ifndef Q_BASE_TYPE
#define Q_BASE_TYPE int16_t
#endif

#ifndef Q_FRAC_BITS
#define Q_FRAC_BITS 15
#endif

// Example of Q1.15:
// #define Q_BASE_TYPE int16_t
// #define Q_FRAC_BITS 15
// Example of Q2.15:
// #define Q_BASE_TYPE int16_t
// #define Q_FRAC_BITS 14
// Example of Q1.7:
// #define Q_BASE_TYPE int8_t
// #define Q_FRAC_BITS 7

// Types we want:
// Q1.15
// Q2.14
// Q1.7

typedef struct {
	// Fixed Point Stuff
} FP;

// Tanh
// Sigmoid

#endif
