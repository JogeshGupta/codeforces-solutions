#include<iostream>
using namespace std;
int main()
{
    double n,x = 0;
    cin >> n;
    double y = n;
    while(n--){
        double p;
        cin >> p;
        x += p;
    }
    cout << x/y;
}