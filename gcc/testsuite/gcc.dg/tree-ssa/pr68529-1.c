/* { dg-do compile } */
/* { dg-options "-O2 -ftree-loop-distribution -ftree-loop-distribute-patterns -fdump-tree-ldist-details" } */

void bar(char *s);
int foo()
{
  char c[10000] = {};
  unsigned short nchar = 9999;

  while(nchar-- != 0)
    {
      c[nchar] = 'A';
    }

  bar (c);
  return 0;
}

/* { dg-final { scan-tree-dump "distributed: split to 0 loops and 1 library calls" "ldist" } } */
/* { dg-final { scan-tree-dump "generated memset" "ldist" } } */
