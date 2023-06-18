#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n;
string A[N] = {"1"};

int main()
{
    cin >> n;
    for(int i = 0, j = 1; i < n && j < n; i++)
    {
        A[j++] = A[i] + "0";
        A[j++] = A[i] + "1";
    }

    for(int i = 0; i < n; i++)
        cout << A[i] << endl;
}