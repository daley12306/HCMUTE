#include<bits/stdc++.h>
#define ll long long

using namespace std;

struct HOCSINH
{
    char MSHS[6];
    char hoten[30];
    char ngaysinh[12];
    char diachi[50];
    char phai[4];
    string diemtb;
};

void input(int n, HOCSINH x[]);
void output(int n, HOCSINH x[]);
int lenLop(int n, HOCSINH x[]);

int main()
{
    HOCSINH DS[1000];
    int n;
    cin >> n;
    cin.ignore();
    input(n, DS);
    output(n, DS);
    cout << lenLop(n, DS);
    return 0;
}

void input(int n, HOCSINH x[])
{
    for(int i = 0; i < n; i++)
    {
        cin.getline(x[i].MSHS, 6);
        cin.getline(x[i].hoten, 30);
        cin.getline(x[i].ngaysinh, 12);
        cin.getline(x[i].diachi, 50);
        cin.getline(x[i].phai, 4);
        cin >> x[i].diemtb;
        cin.ignore();
    }
}

void output(int n, HOCSINH x[])
{
    for(int i = 0; i < n; i++)
    {
        cout << x[i].MSHS << endl;
        cout << x[i].hoten << endl;
        cout << x[i].ngaysinh << endl;
        cout << x[i].diachi << endl;
        cout << x[i].phai << endl;
        cout << x[i].diemtb << endl;
    }
}

int lenLop(int n, HOCSINH x[])
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        double tmp = stof(x[i].diemtb);
        if(tmp >= 5) cnt++;
    }
    return cnt;
}