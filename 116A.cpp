#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0,y = 0;
    while(n--){
        int a,b;
        cin >> a >> b;
        x = x + b - a;
        if(x > y){
            y = x;
        }
    }
    cout << y;
}
