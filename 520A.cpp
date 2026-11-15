#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,count=0;
    string s;
    cin >> n >> s;
    if(n < 26){
        cout << "NO";
    }
    else{
    int a[26] = {0};
    for(int i=0; i<n; i++){
        if(s[i]<='Z' && s[i]>='A'){
            s[i] = s[i] + 32;
        }
        a[s[i]-'a']=1;

    }
    for(int i=0; i<26; i++){
        if(a[i]==1){
            count++;
        }
    }
    if(count==26){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
}