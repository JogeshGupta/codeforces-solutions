#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int p=1;
        int count=0;
        int a[5];

        while(n>0){
            int x = n%10;

            if(x!=0){
                a[count] = x*p;

                count++;
            }
            n=n/10;
            p=p*10;
        }
        cout << count << endl;
        for(int i=0; i<count; i++){
            cout << a[i] << " ";
        }
        cout << endl;
}
return 0;
}