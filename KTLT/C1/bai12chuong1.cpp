#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n;

struct VIDEO
{
    string ten, theloai, daodien, namchinh, nuchinh, hangsx;
    int namsx;
};

void nhapVIDEO(VIDEO &x);
void xuatVIDEO(VIDEO x);
void theloaiSearch(VIDEO x[]);
void dienvienSearch(VIDEO x[]);
void daodienSearch(VIDEO x[]);

int main()
{
    VIDEO A[1000];
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++) nhapVIDEO(A[i]);
    theloaiSearch(A);
    dienvienSearch(A);
    daodienSearch(A);
}

void nhapVIDEO(VIDEO &x)
{
    getline(cin, x.ten);
    getline(cin, x.theloai);
    getline(cin, x.daodien);
    getline(cin, x.namchinh);
    getline(cin, x.nuchinh);
    cin >> x.namsx;
    cin.ignore();
    getline(cin, x.hangsx);
}

void xuatVIDEO(VIDEO x)
{
    cout << x.ten << endl;
    cout << x.theloai << endl;
    cout << x.daodien << endl;
    cout << x.namchinh << endl;
    cout << x.nuchinh << endl;
    cout << x.namsx << endl;
    cout << x.hangsx << endl;
}

void theloaiSearch(VIDEO x[])
{
    string keyword;
    getline(cin, keyword);
    for(int i = 1; i <= n; i++)
    {
        if(keyword == x[i].theloai)
            xuatVIDEO(x[i]);
    }
}

void dienvienSearch(VIDEO x[])
{
    string keyword;
    getline(cin, keyword);
    for(int i = 1; i <= n; i++)
    {
        if(keyword == x[i].namchinh || keyword == x[i].nuchinh)
            xuatVIDEO(x[i]);
    }
}

void daodienSearch(VIDEO x[])
{
    string keyword;
    getline(cin, keyword);
    for(int i = 1; i <= n; i++)
    {
        if(keyword == x[i].daodien)
            xuatVIDEO(x[i]);
    }
}