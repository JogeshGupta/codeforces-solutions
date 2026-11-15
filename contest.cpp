#include<iostream>
using namespace std;
int main(){
int t;
cin >> t;
for(int i=0; i <t; i++){
    int x,y,r;
    cin >> x >> y >> r ;
    cout << x + r << " " << y <<endl;
}
return 0;
}