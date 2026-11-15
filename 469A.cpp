#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n+1] = {0};
    int a,p,q;
    cin >> p ;
    while(p--){
        cin >> a;
        x[a] = 1;
    }
    cin >> q;
    while(q--){
        cin >> a;
        x[a] = 1;

    }
    for(int i=1; i<n+1; i++){
        if(x[i] == 0){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}