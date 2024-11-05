#include<iostream>
using namespace std;

void nota(int nota1, int nota2, int nota3, char parametro)
{ 
    int resultado;
    
    if((parametro == 'A') or (parametro == 'a'))
    {
        resultado = (nota1 + nota2 + nota3)/3;
    }

    else if ((parametro == 'P') or (parametro == 'p'))
        {
            resultado = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2))/10;
        }
        else 
        {
            cout<<"valor invalido";
           }


    cout<<"valor da media: "<<resultado;
}

int main()
{

    int nota1, nota2, nota3;
    char parametro;
    cout<<"entre com o valor da primeira nota: "<<endl;
    cin>> nota1;

    cout<<"entre com o valor da segunda nota: "<<endl;
    cin>>nota2;

    cout<<"entre com o  valor da terceira nota: "<<endl;
    cin>>nota3;

    cout<<" entre com o parametro: "<<endl;
    cin>> parametro;



    nota(nota1, nota2, nota3, parametro);
    return 0;
}