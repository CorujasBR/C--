#include<iostream>
using namespace std;

int main()
{
    float preco1=0, preco2=0, quant1=0, quant2=0, reslt1=0, result2=0, valor=0;

    cout<< "entre com o valor da primeira peca: "<<endl;
    cin>>preco1;

    cout<< "entre com o valor da segunda peca: "<<endl;
    cin>>preco2;

    cout<< "entre com a quantidade da primeira peca: "<<endl;
    cin>>quant1;

    cout<< "entre com a quantidade da segunda peca: "<<endl;
    cin>>quant2;

    reslt1 = (preco1 * quant1); 

    result2 = (preco2 * quant2);

    valor = reslt1 + result2 + 48.31;


    cout<< "valor da compra: "<<valor;
    return 0;
}