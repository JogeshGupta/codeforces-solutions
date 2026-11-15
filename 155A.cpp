#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin >> n;
    int x[n+1];
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    int max=x[0],min=x[0];
    for(int i=0; i<n; i++){
        if(x[i] > max)
        {
            max = x[i];
            count++;
        }
        else if(x[i] < min){
            min = x[i];
            count++;
        }
    }
    cout << count;
    return 0;

}