#include<iostream>
using namespace std;

int main()
{
int X= 0, Y=0, S=0;
char R;
cout<<"entre com o primeiro valor: "<<endl;
cin>>X;

cout<<"entre com o segundo valor: "<<endl;
cin>>Y;

cout<<"entre com a operacao: "<<endl;
cin>>R;

switch (R)
{
case '+':
S =X + Y;
cout<<"resultado: "<< S;
    break;

case '-':
S = X - Y;
cout<<"resultado: "<< S;
    break;

case '/':
S = X / Y;
cout<<"resultado: "<< S;
    break;

case '*':
S = X * Y;
cout<<"resultado: "<< S;
break;

default:
cout<<"operação invalida";
    break;



    return 0;
}





















    return 0;
}