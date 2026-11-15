#include<iostream>
using namespace std;
int main()
{
    int n,k,x=0,count=0;
    cin >> n >> k;
    for(int i=1; i<=n; i++){
         x = x + 5*i;
        if((240 - x) >= k){
            count++;
        }
    }
    cout << count;
    return 0;
}   