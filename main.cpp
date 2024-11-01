#include <iostream>
#include <math.h>

bool isPerfectSquare(int z)
{
  int s = sqrt(z);
  return (s * s == z);
}

bool isFibonacci(int n)
{
  return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main()
{
  for(int count = 1; count <= 10; count ++){
    if (isFibonacci(count)) {
      std::cout << count << " is a Fibonacci Number \n";
    } else {
      std::cout << count << " is not a Fibonacci Number \n";
    }

return 0;
    
}
