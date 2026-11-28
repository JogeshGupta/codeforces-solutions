
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, count = 0;
        cin >> n;

        for(int i = 0; i < 2*n; i++)
        {
            int x;
            cin >> x;

            if(x % 2 == 0)
            {
                count++;
            }
        }

        if(count == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
