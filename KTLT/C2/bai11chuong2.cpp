#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
string a, b, sum = "", diff = "";
bool check = false;

int main()
{
    /// INPUT
    cin >> a >> b;

    if(a.length() < b.length())
    {
        swap(a, b);
        check = true;
    }
    else if(a.length() == b.length())
    {
        for(int i = 0; i < a.length(); i++)
        {
            if(a[i] - '0' < b[i] - '0')
            {
                swap(a, b);
                check = true;
                break;
            }
        }
    }


    int l1 = a.length();
    int l2 = b.length();

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    /// SUM
    int s, tmp = 0;
    string zero = "";
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

    /// SUBTRACTION
    int d;
    zero = "";
    tmp = 0;
    for(int i = 0; i < l2; i++)
    {
        d = (a[i] - '0') - (b[i] - '0') - tmp;
        if(d < 0)
        {
            d += 10;
            tmp = 1;
        }
        else tmp = 0;

        if(d == 0) zero += '0';
        else
        {
            diff += zero;
            diff += d + '0';
            zero = "";
        }
    }

    for(int i = l2; i < l1; i++)
    {
        d = (a[i] - '0') - tmp;
        if(d < 0)
        {
            d += 10;
            tmp = 1;
        }
        else tmp = 0;

        if(d == 0) zero += '0';
        else
        {
            diff += zero;
            diff += d + '0';
            zero = "";
        }
    }

    reverse(diff.begin(), diff.end());
    if(diff.empty()) diff = '0';

    /// OUTPUT
    cout << sum << endl << diff;
}