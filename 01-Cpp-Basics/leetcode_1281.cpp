#include<iostream>
using namespace std;
int main()
{
    int n ,sum =0 , product = 1 , subtract = 0 , rem;
    cout << "Enter the number of intergers : " ;
    cin >> n;
    while ( n > 0 )
    {
        rem = n%10;
        sum+= rem;
        product *=rem;
        n/=10;
    }
subtract = product - sum ;
cout << "The subtraction of product and sum is : "<< subtract << endl;
return 0;
}