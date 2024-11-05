#include <iostream>
using namespace std;

int main()
{
    int idad[15];

    for(int i = 0; i < 15; i++)
    {
        cout<<"entre com sua idade: ";
        cin>>idad[i];
    }

    for(int i = 0; i < 15; i++)
    {
        cout<<"idade: "<<idad[i];
        int bole;
        
        bole = idad[i] % 2;

        if(bole == 1)
        {
            cout<<"idade impar";
        }
        else{
            cout<<"idade par";
        }
    }

    return 0;
}