#include<iostream>
#include<cstdlib>
#include <cmath>

using namespace std;

int main()

{
    int D, M, A, K, X;

    cout << "Entre com o valor do dia: ";
    cin >> D;

    cout << "Entre com o valor do mes: ";
    cin >> M;

    cout << "Entre com o valor do ano: ";
    cin >> A;

    K = D + (2 * M) + floor(3 * (M + 1) / 5) + A + floor(A/4) - floor(A/100) + floor(A/400);

    X = (K % 7) + 1;
    
    if (X==0)
    {
        cout << "O dia da semana vai ser domigo";
    }
    else 
    if (X==1)
        {
            cout <<"O dia da semana vai ser segunda";
        }
            else
            if (X==2)
            {
                cout << "O dia da semana vai ser terca";
            }
                else
                if (X==3)
                {
                    cout <<"O dia da semana vai ser quarta";
                }
                    else
                    if (X==4)
                    {
                        cout <<"O dia da semana vai ser quinta";
                    }

                        else
                        if (X==5)
                        {
                        cout << "O dia da semana vai ser sexta";
                        }

                            else
                            if(X==6)
                            {
                            cout <<"O dia da semana vai ser sabado";
                            }
    return 0;   
}