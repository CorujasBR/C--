#include<iostream>
using namespace std;

int main()
{
    int idade, data, ano;

    cout<< "entre com o ano de nascimento: ";
    cin>>data;
    
    cout<< "entre com o ano atual: ";
    cin>>ano;

    idade = data - ano;


    cout<<"sua idade: "<<idade;

    if(idade<16)
    {
        cout<<"sua idade não pode votar";
    }

    else if(idade>=16 && idade<18)
{
    cout<<"sua idade pode so votar";
}

else if(idade>=18)
{
    cout<<"idade suficiente pra votar e CNH";   
}

return 0;
}

