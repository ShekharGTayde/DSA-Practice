#include <bits/stdc++.h>
using namespace std;

void extractDigits(int n)
{
    while (n > 0)
    {
        int lastdigit = n % 10;
        cout << lastdigit << endl;
        n = n / 10;
    }
}

void count(int n)
{
    int count = 0;
    while (n > 0)
    {

        n = n / 10;
        count++;
    }
    cout << count << endl;
}

void reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        rev = rev * 10 + lastdigit;
        n = n / 10;
    }
    cout << rev << endl;
}

void isPalidrome(int n)
{
    int original = n;
    int rev = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        rev = rev * 10 + lastdigit;
        n = n / 10;
    }
    if (original == rev)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

void isArmstrong(int n)
{
    int original = n;
    int sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += lastdigit * lastdigit * lastdigit;
        n = n / 10;
    }
    if (original == sum)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

void gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        cout << b << endl;
    else
        cout << a << endl;
}

void primeNumber(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime" << endl;
        }
        else
        {
            cout << "Prime" << endl;
            break;
        }
    }
}

void printDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {

            cout << i << endl;
        }
        else
        {
            continue;
        }
    }
}


int main()
{

    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}