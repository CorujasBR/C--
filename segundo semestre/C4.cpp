#include<iostream>
using namespace std;

int main()
{
    float Altura, Base, Area; 

    cout<< "entre com o valor da altura: ";
    cin>>Altura;

    cout<<"entre com o valor da base: ";
    cin>>Base;

    Area = ((Base * Altura)/2);

    cout<< "valor da area do triangulo: "<<Area;

return 0;
}