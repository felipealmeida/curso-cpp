
#include <cassert>

// Pre: $rhs \neq 0$
// Post: $R = \frac{lhs}{rhs}$
int divide(int lhs, int rhs)
{
  assert(rhs != 0);
  return lhs / rhs;
}

int main()
{
}
