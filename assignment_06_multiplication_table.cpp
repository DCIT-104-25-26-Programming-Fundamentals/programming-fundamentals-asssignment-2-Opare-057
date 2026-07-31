#include <iostream>
using namespace std;

void printTable(int number)
{
    cout << "Multiplication Table for " << number << ":" << endl;

    for (int i = 1; i <= 12; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

void printTables(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printTable(i);
        cout << "---------------------------" << endl;
    }
}

int main()
{
    int number, n;

    cout << "Enter a number: ";
    cin >> number;

    if (number <= 0)
    {
        cout << "Error: Number must be positive." << endl;
        return 0;
    }

    printTable(number);

    cout << "Enter a number N: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: Number must be positive." << endl;
        return 0;
    }

    printTables(n);

    return 0;
}