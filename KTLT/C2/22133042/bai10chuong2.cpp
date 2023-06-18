#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int d, m, y;
int dob[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    /// INPUT
    cin >> d >> m >> y;

    /// PROCESS
    if(d < 1 || m < 1 || m > 12|| y < 1)
    {
        cout << -1;
        return 0;
    }
    
    if(y % 4 == 0 && y % 100 != 0) 
        dob[2]++;

    if(dob[m] < d)
    {
        cout << -1;
        return 0;
    }

    d++;
    if(d > dob[m])
    {
        d = 1;
        m++;
    }
    if(m > 12)
    {
        m = 1;
        y++;
    }

    /// OUTPUT
    cout << d << " " << m << " " << y;
}
