#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n,k,count=0;
        cin >> n >> k;
        while(n>0){
            if(n%k==0){
                n = n/k;
            }
            else{
                n--;
            }
            count++;
        }
        cout << count << endl;
    }

    return 0;
}