#include<iostream>
using namespace std;
int main(){

    int n,k,count=0;
    cin >> n >> k;
    int a[100];
    for(int i = 0; i <= n-1; i++){
        cin >> a[i];
    }
    for(int i=0; i <= n-1; i++){
        if(a[i] >= a[k-1] && a[i]>0){
            count++;
        }
    }

    cout << count;
    return 0;

}