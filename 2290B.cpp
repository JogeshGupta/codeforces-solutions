#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,count=0;
        string s;
        cin >> n;
        cin >> s;
        if(s[0] == 'B'){
            count++;
        }
        for(int i=1; i<n; i++){
            if(s[i] == s[i-1]){
                count++;
            }
        }
        cout << count << endl;
    }

}