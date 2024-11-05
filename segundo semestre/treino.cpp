#include<iostream>
using namespace std;
    
int main()
{

    int batata[4];

for(int i = 0; i < 5; i++)
{ cout<<"fale o numero da batata"<<endl;
    cin>>batata[i];
}

for(int i = 0; i < 5; i++)
{
    cout<<"batatas: "<<batata[i]<<endl;
}
    return 0;
}