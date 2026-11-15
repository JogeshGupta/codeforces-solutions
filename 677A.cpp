#include<iostream>
using namespace std;
int main()
{
    int n,h,count=0;
    cin >> n >> h;
    int total = n;

    while(n--){
     int a;
     cin >> a;   
     if(a>h){
        count ++;
     }
    }
    cout << total + count;
    
}