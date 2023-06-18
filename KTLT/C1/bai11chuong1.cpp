#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n;

struct SINHVIEN
{
    string masv, ten;
    int namsinh;
    double toan, ly, hoa, dtb;
};

void nhapds(int &n, SINHVIEN x[]);
void nhapSV(SINHVIEN &x);
void xuatds(SINHVIEN x[]);
void xuatSV(SINHVIEN x);
SINHVIEN dtbCao(SINHVIEN x[]);
void sapxepDTBtang(SINHVIEN x[]);
void sapxepToangiam(SINHVIEN x[]);
void DTBsearch(SINHVIEN x[]);
SINHVIEN lontuoi(SINHVIEN x[]);
void searchSV(SINHVIEN x[]);
bool DTBtang(SINHVIEN a, SINHVIEN b);
bool Toangiam(SINHVIEN a, SINHVIEN b);

int main()
{
    SINHVIEN A[1000];
    nhapds(n, A);
    xuatds(A);
    xuatSV(dtbCao(A));
    //sapxepDTBtang(A);
    //sapxepToangiam(A);
    DTBsearch(A);
    xuatSV(lontuoi(A));
    searchSV(A);
}

void nhapds(int &n, SINHVIEN x[])
{
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++) nhapSV(x[i]);
}

void nhapSV(SINHVIEN &x)
{
    getline(cin, x.masv);
    getline(cin, x.ten);
    cin.ignore();
    cin >> x.namsinh >> x.toan >> x.ly >> x.hoa >> x.dtb;
    cin.ignore();
}

void xuatds(SINHVIEN x[])
{
    for(int i = 1; i <= n; i++)
        xuatSV(x[i]);
}

void xuatSV(SINHVIEN x)
{
    cout << x.masv << endl;
    cout << x.ten << endl;
    cout << x.namsinh << endl;
    cout << x.toan << " " << x.ly << " " << x.hoa << " " << x.dtb << endl; 
}

SINHVIEN dtbCao(SINHVIEN x[])
{
    double mx = 0;
    int id = 0;
    for(int i = 1; i <= n; i++)
    {
        if(x[i].dtb > mx)
        {
            mx = x[i].dtb;
            id = i;
        }
    }
    return x[id];
}

void sapxepDTBtang(SINHVIEN x[])
{
    sort(x + 1, x + n + 1, DTBtang);
}

void sapxepToangiam(SINHVIEN x[])
{
    sort(x + 1, x + n + 1, Toangiam);
}

void DTBsearch(SINHVIEN x[])
{
    for(int i = 1; i <= n; i++)
    {
        if(x[i].dtb > 5 && x[i].toan >= 3 && x[i].ly >= 3 && x[i].hoa >= 3)
            xuatSV(x[i]);
    }
}

SINHVIEN lontuoi(SINHVIEN x[])
{
    int mx = INT_MAX, id = 0;
    for(int i = 1; i <= n; i++)
    {
        if(mx > x[i].namsinh)
        {
            mx = x[i].namsinh;
            id = i;
        }
    }
    return x[id];
}

void searchSV(SINHVIEN x[])
{
    string keyword;
    getline(cin, keyword);
    for(int i = 1; i <= n; i++)
    {
        if(keyword == x[i].ten)
        {
            xuatSV(x[i]);
            return;
        }
    }
}

bool DTBtang(SINHVIEN a, SINHVIEN b)
{
    return a.dtb < b.dtb;
}

bool Toangiam(SINHVIEN a, SINHVIEN b)
{
    return a.toan > b.toan;
}
