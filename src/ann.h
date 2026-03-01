#ifndef ANN
#define ANN

#include "math.h"
#include <stdint.h>

/* Okay so this library should be able to implement any optimizations we may need.
 * Specifically for our 8088 machine we want parts that are 16 bit fixed point
 * and 8 bit fixed point, etc, but we also want to support experimentation. This
 * means the ability to compile LUT's or do math in time, this means differing
 * fixed point values that are configurable during build, start with a bare bones
 * capability targeted at our system but allow crazy stuff like 64 bit fixed
 * point maybe even floating point. I would not worry about threading yet though?.
 * An impractically flexible NN library.
 */

// Implement a directed cyclic graph


// We will need tanh and sigmoid so maybe fixed point.

typedef struct {
	// Input Bais
	// Output Weight
	// Activiation Function
} Neuron;

typedef struct {

} NeuralNetwork;

// FFNN, RNN, LSTM, GPT, etc etc.

#endif
