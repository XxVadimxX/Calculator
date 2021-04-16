#include <iostream>
#include "function.h"
using namespace std;
int main()
{
	cout << ("Хаю-Хай с Вами калькулятор\nВыбери какую операцию ты хочешь выполнить и нажми Enter\n1-Сложение\n2-Вычитание\n3-Умножение\n4-Деление\n0-Выход из программы\n");

int ChoiceUser;
float FirstArg,SecondArg;

while(true)
{
cout << ("Выбирете операцию:"); 
cin >> ChoiceUser;
if (ChoiceUser == 0)
  {
  	return 0;
  }
if (ChoiceUser < 5)
{  
cout << "Введите первое значение\n";
cin >> FirstArg;
cout << "Введите второе значение\n";
cin >> SecondArg;
	switch(ChoiceUser)
	{
	case 1:
	  summation(FirstArg,SecondArg);
	  break;
	case 2:
	  difference(FirstArg,SecondArg);
	  break;
	case 3:
	  multiplication(FirstArg,SecondArg);
	  break;
	case 4:
	  division(FirstArg,SecondArg);
	  break;
	}
}
}
return 0;
}

