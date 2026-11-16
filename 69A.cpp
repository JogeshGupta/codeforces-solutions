#include<iostream>
using namespace std;
int main()
{
    int n;
    int a=0,b=0,c=0;
    cin >> n;
    while(n--){
        int x,y,z;
        cin >> x >> y >> z;
        
        a = a + x;
        b = b + y;
        c = c + z;
    }
    if(a==0 && b==0 && c==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}