#include<iostream>
using namespace std;

int main()
{
    int n , answer;
    cout << "Enter an integer: ";
    cin >> n;
        if (n % 2 == 0)
            answer = n;
        else
            answer = n * 2;
    cout << "The smallest multiple of 2 that is greater than or equal to " << n << " is: " << answer;
    return 0;
} 