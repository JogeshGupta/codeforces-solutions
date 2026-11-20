#include<iostream>
using namespace std;
int main()
{
    long long n,m,count=0;
    cin >> n >> m;
    if(m%n==0){
        long long a = m/n;
        while(a%2==0){
            a/=2;
            count++;
        }
        while(a%3==0){
            a/=3;
            count++;
        }
        if(a==1){
            cout << count;

        }
        else{
            cout << -1;
        }
    }
    if(m%n!=0){
        cout << -1;
    }
}