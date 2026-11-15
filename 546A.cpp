#include<iostream>
using namespace std;
int main(){
    int k,n,w,a=1;
    cin >> k >> n >> w;
    while(w--){
        n = n - a * k;
        
        a++;

    }
if(n<0){
   cout << -n ;
}else{
cout << 0 ;
}
}