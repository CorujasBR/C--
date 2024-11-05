#include<iostream>
using namespace std;

int main()
{
    string frase;

    cout<<"entre com um frase: "<<endl;
    getline(cin,frase);

    int quantVogal;
    for(int i=0; i<frase.length(); i++)
    {
        if( (frase[i]=='a') or
            (frase[i]=='A') or
            (frase[i]=='e') or
            (frase[i]=='E') or
            (frase[i]=='i') or
            (frase[i]=='I') or
            (frase[i]=='o') or
            (frase[i]=='O') or
            (frase[i]=='u') or
            (frase[i]=='U')
        )
        {
            quantVogal++;
        }

        
    }



cout<<"valor de vogais da frase: "<<quantVogal;
return 0;
}
