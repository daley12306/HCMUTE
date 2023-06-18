#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N];
vector<vector<int>> res;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> A[i];

    int i = 1;
    while(i <= n)
    {
        int j = i + 1;
        while(j <= n && A[j] > A[j - 1])
            j++;
        
        if(j - i > 1)
        {
            vector<int> tmp;
            for(int k = i; k < j; k++)
                tmp.push_back(A[k]);
            res.push_back(tmp);
        }
        i = j;
    }

    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++)
    {
        for(int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
}