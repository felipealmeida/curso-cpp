#include <stdlib.h>
// Pre: $rhs \neq 0$
// Post: $R = \frac{lhs}{rhs}$
int divide(int lhs, int rhs);


// Pre: $denom \neq 0 \wedge ARRAY = array$
// Post: $\forall j < size: array[j] = \frac{ARRAY[j]}{denom}$
void divide_by(int array[], size_t size
               , int denom)
{
  size_t i = 0;
  // Inv: $\forall j: j < i: array[j] = \frac{ARRAY[j]}{denom}$
  //     $\wedge \forall k: i < k < size: array[k] = ARRAY[k]$
  while(i != size)
  {
    array[i] = divide(array[i], denom), i++;
  }
  // Post: $i = size \wedge \forall j < i: array[j] = \frac{ARRAY[j]}{denom}$
}
// Post: $i = size \wedge \forall j < i: array[j] = \frac{ARRAY[j]}{denom}$
