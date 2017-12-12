/* Test the `vreinterpretQp128_s16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_crypto_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_crypto } */

#include "arm_neon.h"

void test_vreinterpretQp128_s16 (void)
{
  poly128_t out_poly128_t;
  int16x8_t arg0_int16x8_t;

  out_poly128_t = vreinterpretq_p128_s16 (arg0_int16x8_t);
}

