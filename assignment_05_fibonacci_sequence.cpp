#include <iostream>
using namespace std;

void printFibonacci(int n)
{
    int a = 0, b = 1, next;

    cout << "Fibonacci sequence: ";

    for (int i = 0; i < n; i++)
    {
        cout << a << " ";

        next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
}

bool isFibonacci(int num)
{
    int a = 0, b = 1, next;

    while (a <= num)
    {
        if (a == num)
        {
            return true;
        }

        next = a + b;
        a = b;
        b = next;
    }

    return false;
}

int main()
{
    int n, num;

    cout << "How many terms? ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: Number of terms must be positive." << endl;
        return 0;
    }

    printFibonacci(n);

    cout << "Enter a number to check: ";
    cin >> num;

    if (isFibonacci(num))
    {
        cout << num << " is a Fibonacci number." << endl;
    }
    else
    {
        cout << num << " is NOT a Fibonacci number." << endl;
    }

    return 0;
}