#include <iostream>
#include "function.h"
using namespace std;

void summation(float a,float b)
{
cout << "Результат = " << (a+b) << '\n';
}


void difference(float a,float b)
{
cout << "Результат = " << (a-b) << '\n';
}


void multiplication(float a,float b)
{
cout << "Результат = " << (a*b) << '\n';
}


void division(float a,float b)
{
  if (b != 0)
   {
     cout << "Результат = " << (a/b) << '\n';
   }
  else
   {
     cout << "Ну ты ШО?? На ноль делить нельзя!!!\n";
   }
}
