#include<iostream>
using namespace std;
int main()
{
    int t,x;
    cin >> t;
    while(t--){
        cin >> x;
        if(x >= 1900){
            cout << "Division 1\n";
        }
        if(1899 >= x && x >= 1600){
            cout << "Division 2\n";
        }
        if(1599 >= x && x >= 1400){
            cout << "Division 3\n";
        }
        if(x <= 1399){
            cout << "Division 4\n";
        }
    }

    return 0;

}1