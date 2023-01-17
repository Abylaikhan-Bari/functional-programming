//Bariev Abylaihan
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
  float a;
  cout << "a = ";
  cin >> a;
  float b;
  cout << "b = ";
  cin >> b;

  float Sum = pow(a, 2) + pow(b, 2);
  cout << "Sum = " << Sum;

  float Sub = pow(a, 2) - pow(b, 2);
  cout << "; Sub = " << Sub;

  float Mul = pow(a, 2) * pow(b, 2);
  cout << "; Mul = " << Mul;

  float Div = pow(a, 2) / pow(b, 2);
  cout << "; Div = " << Div;
  return 0;
}