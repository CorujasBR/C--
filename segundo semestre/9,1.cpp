#include <iostream>
using namespace std;

int main()
{
    string frase;
    cout<<"entre com uma frase"<<endl;
    getline(cin,frase);

    int quant = 0;

    for(int i = 0; i<frase.length(); i++)
    {
        if((frase[i])==' ')
        {
            quant++;
        }
    }

    cout<<"quantidade de palavras: "<<quant;




    return 0;
}