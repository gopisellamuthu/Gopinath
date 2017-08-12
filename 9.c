#include <iostream>
using namespace std;

int main()
{
    int positiveInteger;
    int startingNumber = 1;
    int i = 0;

    cout << "Please input an integer up to 100." << endl;

    cin >> positiveInteger;

    for (int i=0; i < positiveInteger; i++)
    {
        i = startingNumber + 1;
        cout << i;
    }

    return 0;

}
