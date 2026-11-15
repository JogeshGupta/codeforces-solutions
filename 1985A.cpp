#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        char x = a[0],y = b[0];
        for(int i=0; i<1; i++){
            a[i] = y;
            b[i] = x;
        }
        cout << a << " " << b << endl;
    }
}