#include<iostream>
using namespace std;

int main()
{
    int codigo;

    cout<<"entre com o valor do codigo do produto: ";
    cin>>codigo;

    switch (codigo)
    {
    case 1:
    cout<<"produto não perecivel";
    break;

    case 2:
    case 3:
    case 4:
    cout<<"produto perecivel";
    break;

    case 5:
    case 6:
    cout<<"vestuario";
    break;

    case 7:
    cout<<"higiene pessoal";
    break;

    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    cout<<"item de limpeza e domesticos";
        break;
    
    default:
    cout<<"codigo invalido";
        
    }
    return 0;
}