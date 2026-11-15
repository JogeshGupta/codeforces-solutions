#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if((b-1)==a && (c-1) == b){
            cout << "YES" << endl;
        } 
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}