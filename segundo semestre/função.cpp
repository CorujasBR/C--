#include<iostream>
using namespace std;

void somar(int num1, int num2)
{
    int resposta;

    resposta = num1 + num2;
    cout<<"soma = "<<resposta<<endl;
}
int subtrair(int num1, int num2)
{
    int resp;

    resp = num1 - num2;

    return resp;
}


int main()
{
    int n1, n2;
    cout<<"valor 1"<<endl;
    cin>>n1;
    cout<<"valor 2"<<endl;
    cin>>n2;


    somar(n1, n2);

    int sub = subtrair(n1, n2);
    cout<<sub;
    
    return 0;
}