#include <iostream>
using namespace std;

int main()
{
    int H,M,S,tempo1, tempo2, tempoT;

    cout<<"entre com as horas: "<<endl;
    cin>>H;

    cout<<"entre com o valor dos minutos: "<<endl;
    cin>>M;

    cout<<"entre com valor dos segundos: "<<endl;
    cin>>S;

    tempo1 = (H * 60) * 60;

    tempo2 = M *  60;

    tempoT = tempo1 + tempo2 + S;

    cout <<"o horario requerido em segundos e: "<<tempoT;

    return 0;
}