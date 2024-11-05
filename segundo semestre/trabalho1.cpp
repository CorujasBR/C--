#include<iostream>
using namespace std;

int main()
{
    int T,P1,P2;

    cout<<"entre com o valor da primeira prova";
    cin>>P1;

    cout<<"entre com o valor da segunda prova";
    cin >>P2;

    T = P1 + P2;

    if((P1 + P2) >= 60)
    {
        cout<<"aluno aprovado com: "<< T<<"pontos";

    }
    else if((T>=50) && (T < 60))
    {
        cout<<"aluno em recuperação com:"<<T<< "pontos.";

    }

    else if (T<50)
    {
        cout<<"aluno reprovado com:"<<T<<"pontos";
    }
    return 0;
}