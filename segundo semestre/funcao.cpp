#include<iostream>
using namespace std;

void MAIOR (int n1, int n2, int n3)
{
    int aux;
if(n3 > n2)
{
aux = n2;
n2 = n3;
n3 = aux;
}
else if(n2 > n1)
{
aux = n1;
n1 = n2;
n2 = aux;
}

cout<<"maior valor:"<<n1<<endl;
cout<<"menor valor:"<<n3<<endl;

}

int main()
{   int n1, n2, n3;
    cout<<"entre com o valor da primeira nota: "<<endl;
    cin>> n1;

    cout<<"entre com o valor da segunda nota: "<<endl;
    cin>>n2;

    cout<<"entre com o  valor da terceira nota: "<<endl;
    cin>>n3;

    MAIOR(n1,n2,n3);

    return 0;
}