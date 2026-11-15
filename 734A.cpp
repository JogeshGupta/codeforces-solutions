#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int x=0,y=0;
    for(char c : s){
        if(c == 'A') x++;
        if(c == 'D') y++;
    }
    if(x > y){
        cout << "Anton";
    } else if(x < y){
        cout << "Danik";
    } else{
        cout << "Friendship";
    }
    
}