#include <iostream>
using namespace std;

int main()
{
    int numOfEvens, i;

    cout << "Please enter a positive integer: ";
    cin >> numOfEvens;

    if (numOfEvens > 0)
    {
        for (i = 1; i <= numOfEvens; i++)
        {
            cout << i * 2 << endl;
        }
    }

    return 0;
}