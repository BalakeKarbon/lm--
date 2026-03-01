#ifndef FIXEDPOINT
#define FIXEDPOINT

#include <stdint.h>

/* Perhaps we define all optional bases noting our largest base
 * then we define our fraction bits for any bases defined
 * then we generate all operational functions based on those
 * definitions inclusion conversion functions between all types?
 */

/* Have mode selectors for LUT or Compute for applicable functions.
 * Default to compute probably.
 */

// Type options must be defined before this point

/* Base Options: 8, 16, 32, 64
 * Structure:
 * Set the MAX_BASE size and overwrite as base increases.
 */
// 8 bit bases
#ifdef Q1_6
#define MAX_BASE int8_t
#endif
#ifdef Q2_5
#define MAX_BASE int8_t
#endif
// 16 bit bases
#ifdef Q2_13
#define MAX_BASE int16_t
#endif
// At this point MAX_BASE should be set properly.

#endif
