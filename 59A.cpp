#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int u = 0, l = 0;
    for(char c : s){
        if(isupper(c)){
            u++;
        }else {
            l++;
        }
    }    
    for(char &c : s){
        if(u>l){
            c = toupper(c);
        }
        else{
            c = tolower(c);
        }
    }

    cout << s;
}