/* Test the `vget_highu32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vget_highu32 (void)
{
  uint32x2_t out_uint32x2_t;
  uint32x4_t arg0_uint32x4_t;

  out_uint32x2_t = vget_high_u32 (arg0_uint32x4_t);
}

