/* Check that the three loops are fused.  */

/* Make sure we fuse the loops like this:
AST generated by isl:
for (int c0 = 0; c0 <= 99; c0 += 1) {
  S_3(c0);
  S_6(c0);
  S_9(c0);
}
*/

/* { dg-final { scan-tree-dump-times "AST generated by isl:.*for \\(int c0 = 0; c0 <= 99; c0 \\+= 1\\) \\{.*S_.*\\(c0\\);.*S_.*\\(c0\\);.*S_.*\\(c0\\);.*\\}" 1 "graphite" } } */

#define MAX 100
int A[MAX], B[MAX], C[MAX];

extern void abort ();

int
main (void)
{
  int i;

  /* The next three loops should be fused.  */
  for (i = 0; i < MAX; i++)
    {
      A[i] = i;
      B[i] = i + 2;
      C[i] = i + 1;
    }
  for(i=0; i<MAX; i++)
    A[i] += B[i];
  for(i=0; i<MAX; i++)
    A[i] += C[i];

  for (i = 0; i < MAX; i++)
    if (A[i] != 3*i+3)
      abort ();

  return 0;
}
