#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
string n, a = "", b = "", kq = "";

string Tong(string a, string b);
string Tich(string A, string B);
string Chia(string A, ll b);

int main()
{
    cin >> n;
    a = Tong(n, "1");
    b = Tong(n, "2");
    kq = Tich(n, a);
    kq = Tich(kq, b);
    kq = Chia(kq, 6);
    cout << kq;
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

string Tong(string a, string b)
{
    int l1 = a.length();
    int l2 = b.length();

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int s, tmp = 0;
    string sum = "", zero = "";
    for(int i = 0; i < l2; i++)
    {
        s = (a[i] - '0') + (b[i] - '0') + tmp;
        if(s == 0) zero += '0';
        else 
        {
            sum += zero;
            sum += s % 10 + '0';
            zero = "";
        }
        tmp = s / 10;
    }

    for(int i = l2; i < l1; i++)
    {
        s = (a[i] - '0') + tmp;
        if(s == 0) zero += '0';
        else 
        {
            sum += zero;
            sum += s % 10 + '0';
            zero = "";
        }
        tmp = s / 10;
    }

    if(tmp != 0) sum += tmp + '0';
    reverse(sum.begin(), sum.end());
    if(sum.empty()) sum = '0';
    return sum;
}

string Chia(string A, ll b)
{
    string kq = "";
    int i = 0;
    ll num = 0;
    while(i < A.length())
    {
        num = num * 10 + (A[i] - '0');
        kq += num / b + '0';
        num = num % b;
        i++;
    }

    kq.erase(0, kq.find_first_not_of('0'));
    return kq;
}