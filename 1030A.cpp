#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool y = false;
    while(n--){
        int a;
        cin >> a;
    if(a == 1) y = true;        

    }

    if(y) cout << "HARD";
    else cout << "EASY";
}