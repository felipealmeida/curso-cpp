
#include <stdexcept>

// Pre: $rhs \neq 0 \wedge R = \frac{lhs}{rhs}$
int divide(int lhs, int rhs)
{
  if(rhs == 0)
    throw std::runtime_error
      ("rhs must be different from zero");
  return lhs / rhs;
}

int main()
{
}
