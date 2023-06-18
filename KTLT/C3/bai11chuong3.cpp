#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 100;
string A, B;

string Tich(string A, string B);

int main()
{
    cin >> A >> B;
    cout << Tich(A, B);
}

string Tich(string A, string B)
{
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    int lenA = A.length();
    int lenB = B.length();

    string C = "";
    for(int i = 0; i < lenA + lenB; i++)
        C += '0';

    for(int iB = 0; iB < lenB; iB++)
    {
        int nho = 0;
        int iA;
        for(iA = 0; iA < lenA; iA++)
        {
            int x = (B[iB] - '0') * (A[iA] - '0') + nho + (C[iA + iB] - '0');
            C[iA + iB] = x % 10 + '0';
            nho = x / 10;
        }
        if(nho > 0)
            C[iA + iB] = nho + '0';
    }

    reverse(C.begin(), C.end());
    C.erase(0, C.find_first_not_of('0'));
    return C;
}