#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int A=0, B=0, C=0, Delta=0, raiz1=0, raiz2=0;

    cout<<"entre com o valor de A: ";
    cin>>A;

    cout<<"entre com o valor de B: ";
    cin>>B;

    cout<<"entre com o valor de C: ";
    cin>>C;

    Delta = (B*B) * (-4 * A * C);

    raiz1 =  ((-B) + (sqrt(Delta))) / (2 * A);

    raiz2 = ((-B) - (sqrt(Delta))) / (2 * A);

    cout<<"valor da primeira raiz: "<<raiz1<<endl;
    cout<<"valor da segunda raiz: "<<raiz2;

    return 0;
}
