#include<iostream>
#include<cstdlib>

using namespace std;

int main()

{
int C, F;

cout << "Entre com o valor de Fahrenheit";
cin >> F;

C = (F - 32) / 1.8;

cout << "Valor em celcius: ";
cout << C;

return 0;
}