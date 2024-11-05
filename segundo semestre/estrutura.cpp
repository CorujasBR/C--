#include<iostream>
using namespace std;

int main(){


string frase1, frase2,frase3;
cout<<"entre com a primeira frase: ";
getline(cin,frase1);

cout<<"entre com a segunda frase: ";
getline(cin,frase2);

if((frase1.compare(frase2))==0)
{
 cout<<"as duas frases são iguais";  
}
else{
    cout<<"as duas frases nao sao iguais"<<endl;
}

frase3 = frase1.append(frase2);

for(int i =0; i<frase3.length(); i++)
{
    cout<<frase3[i];
    cout<<frase3.length();
}


return 0;

}
