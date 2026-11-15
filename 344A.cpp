#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    string p;
    cin >> p;
    for(int i=1; i < n ; i++){
        string s;
        cin >> s;
        if(s != p){
            count++;
        }
        p = s;
    }
    cout << count;
}