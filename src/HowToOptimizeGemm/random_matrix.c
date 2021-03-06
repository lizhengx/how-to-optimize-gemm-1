#include <stdlib.h>

#define A( i,j ) a[ (j)*lda + (i) ]

void random_matrix( int m, int n, float *a, int lda )
{
  double drand48();
  int i,j;

  for ( j=0; j<n; j++ )
    for ( i=0; i<m; i++ )
#if 1 
      A( i,j ) = 2.0 * (float)drand48( ) - 1.0;
#else
      A( i, j) = (i + j) % 4;
#endif
}
