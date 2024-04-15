#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{

float H, B2, B1, V;

cout << "Entre com o valor da menor base: ";
cin >> B2;

cout << "Entre com o valor da maior base: ";
cin >> B1;

cout << "Entre com o valor da altura: ";
cin >> H;

V = (H * (B1 + B2)) /2;

cout << "Valor do trapezio: ";
cout << V;

return 0;

}