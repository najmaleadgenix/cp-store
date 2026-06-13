#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c, d, e, f;
    a = b = (n + 1) / 2;
    c = d = n + 1 + a;
    e = 1, f = n * 2 + 1;
    for (int i = 1; i <= (3 * (n + 1)) / 2; i++)
    {
        for (int j = 1; j <= n * 2 + 1; j++)
            if (i <= (n + 1) / 2)
            {
                if (j >= a && j <= b || j >= c && j <= d)
                    cout << "*";
                else
                    cout << " ";
            }
            else
            {
                if (j >= e && j <= f)
                    cout << "*";
                else

                    cout << " ";
            }
        cout << "\n";
        if (i <= (n + 1) / 2)
            a--, b++, c--, d++;
        else
            e++, f--;
    }
}