#include<iostream>
using namespace std;
int main()
{
    int n,s=0,d=0;
    cin >> n;
    int l=0,r=n-1;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
    if(a[l]>a[r]){
        if(i%2==0){
            s+=a[l];
        }
        else{
            d+=a[l];
        }
        
        l++;
    }
    else{
        if(i%2==0){
            s+=a[r];
        }
        else{
            d+=a[r];
        }

        r--;
    }
    }
    cout << s << " " << d;
    return 0;
}