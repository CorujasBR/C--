#include<iostream>
 using namespace std;

 int main()
 {
    int nota=0;
    cout<< "favor digitar a nota da discente: "<<endl;
    cin>>nota;

    if(nota>=60 && nota<=100)
    {
        cout<< "discente aprovado(a)."<<endl;
    }
    else if(nota>=49 && nota <=59)
    {cout<<"discente de recupercao."<<endl;

    cout<< "entre com pedido de recuperacao";

    }

    else if(nota<49 && nota>=0)
    {cout<< "discente reprovado(a)."<<endl;

    cout<< "verifique o periodo de inscricao."<<endl;
    }

    else
    cout<<"erro";

    return 0;
 }