#include<iostream>
using namespace std;

int main()
{

    int X, Y, R;

    R = 1;
    X = 0;
    while(R <= 4)
    {
        cin >> Y;

        X = X + Y;
        R++;

    }

    cout << X;

    return 0;

}