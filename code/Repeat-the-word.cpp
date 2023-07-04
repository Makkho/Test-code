#include <iostream>

using namespace std;
int main()
{
  string x;
  bool w = true;
  string quitting;
  while (true)
  {
    cin >> x;
    if (x == "ex")
    {
      break;
    }
    cout << x << endl;
  }

  return 0;
}