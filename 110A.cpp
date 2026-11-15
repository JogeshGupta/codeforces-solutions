#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int x = 0;
    for(char c : n){
        if(c == '4' || c == '7'){
            x++;
        }
        }
        if(x == 7 || x == 4){
            cout << "YES";
    
        }else {
            cout << "NO";
        }
    
}