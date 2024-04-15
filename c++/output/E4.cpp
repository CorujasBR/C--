#include<iostream>
#include<cstdlib>

using namespace std;

int main()

{
float R, H, V;

cout << "Entre com o valor do raio: ";
cin >> R;

cout << "Entre com o valor da altura: ";
cin >> H;

V = (3.14 * (R * R)) * H;

cout << "Valor do volume do cilindro: ";
cout << V;

return 0;
}