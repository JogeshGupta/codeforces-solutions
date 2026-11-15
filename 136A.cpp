#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p[n],q[n];
    for(int i=1; i <= n; i++){
        
        cin >> p[i];
        q[p[i]] = i;
        
    }
    for(int i=1; i<=n; i++){
        cout << q[i] << " ";
    }
}