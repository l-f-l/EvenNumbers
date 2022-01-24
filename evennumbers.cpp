#include <iostream>
using namespace std;

int main()
{
    int numOfEvens;
    int count;

    cout << "Please enter a positive integer: ";
    cin >> numOfEvens;

    if (numOfEvens > 0)
    {
        for (count = 1; count <= numOfEvens; count++)
        {
            cout << count * 2 << endl;
        }
    }

    return 0;
}