#include<iostream>
using namespace std;

int main()
{
    float C;
    float F;

    cout<<"entre com o valor do Celsius: "<<endl;
    cin>>C;

    F = (1.8 * C + 32);

    cout<< "valor em Fahrenheit: "<<F;
return 0;
}