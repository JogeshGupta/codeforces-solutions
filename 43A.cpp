#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,count1=0,count2=0;
    string a,b;
    cin >> n;
    cin >> a;
    count1 = 1;
    for(int i=1; i<n; i++){
        string s;
        cin >> s;
        if(s == a){
            count1++;
        }
        else{
            b = s;
            count2++;
        }
    }
    if(count1>count2){
        cout << a;
    }
    else{
        cout << b;
    }
    return 0;
}
