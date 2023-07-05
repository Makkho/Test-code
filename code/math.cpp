
#include <iostream>

using namespace std;

int x, y;
int sum;
int difference;
int product;
int quotient;

int main()
{

  cout << "please enter a X"
       << "\n";
  cin >> x;
  cout << "please enter a Y"
       << "\n";
  cin >> y;
  cout << x << " = ";
  cout << y << " = ";
  sum = x + y;
  cout << sum << " = ";
  difference = x - y;
  cout << difference << " = ";
  product = x * y;
  cout << product << " = ";
  quotient = x / y;
  cout << quotient;
}
