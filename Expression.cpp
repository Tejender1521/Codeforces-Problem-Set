#include<bits/stdc++.h>

using namespace std;

int largest(int arr[], int n)
{
    return *max_element(arr, arr+n);
}

int main()
{
    int a,b,c,arr[8];
    cin >> a >> b >> c;
    arr[0] = a+b+c;
    arr[1] = a*b*c;
    arr[2] = a+(b*c) ;
    arr[3] = (a*b)+c;
    arr[4] = a+b*c ;
    arr[5] = a*b+c ;
    arr[6] = a*(b+c);
    arr[7] = (a+b)*c;
    cout << largest(arr, 8);

}