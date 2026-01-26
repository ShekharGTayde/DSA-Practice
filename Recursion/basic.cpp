// recursion meaans function call itself
#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n)
{
    if (i > n)
        return;
    cout << "Hello World" << endl;

    printName(i + 1, n); // recursive call
}

void countInc(int i, int n)
{
    // // base case
    // if(i>n) return;
    // cout<<i<<endl;
    // countInc(i+1, n); // recursive call

    // backword case
    if (i < 0)
        return;
    countInc(i - 1, n);
    cout << i << endl;
}

void countDec(int i, int n)
{
    // //base case
    // if(i<0) return;
    // cout<<i<<endl;
    // countDec(i-1,n); // recursive call

    // backward case
    if (i > n)
        return;
    countDec(i + 1, n);
    cout << i << endl;
}

// parameterized recursion
void intSum(int i, int n, int sum)
{
    if (i > n)
        return;
    sum += i;
    if (i == n)
        cout << sum << endl;
    intSum(i + 1, n, sum);
}

// functional recursion
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int reverseArray(int i, int arr[], int n)
{
    if (i >= n / 2)
        return 0;
    swap(arr[i], arr[n - i - 1]);
    reverseArray(i + 1, arr, n);
}

bool isPalindrome(int i, int arr[], int n)
{
    if (i >= n / 2)
        return true;
    if (arr[i] != arr[n - i - 1])
        return false;

    return isPalindrome(i + 1, arr, n);
}

bool isStringPalindrome(int i, string s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return isStringPalindrome(i + 1, s);
}

int fibonacci(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    int last = fibonacci(n - 1);
    int slast = fibonacci(n - 2);
    return last + slast;
}




