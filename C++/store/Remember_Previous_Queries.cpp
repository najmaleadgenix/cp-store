#include <bits/stdc++.h>
using namespace std;
// void print_reverse(Node* tail)
// {

// }
int main()
{
    list<int> l;
    int q;
    cin >> q;
    int x, v;
    while (q--)
    {
        cin >> x >> v;

        if (x == 0)
        {
            l.push_front(v);
            // cout<<"L -> ";
            // for (int val : l)
            // {
            //     cout << val << " ";
            // }
            // cout << endl;

            // l.reverse();
            // cout<<"R -> ";
            // for (int val : l)
            // {
            //     cout << val << " ";
            // }
            // cout << endl;
            // l.reverse();

        }
        else if (x == 1)
        {
            l.push_back(v);
            // cout<<"L -> ";
            // for (int val : l)
            // {
            //     cout << val << " ";
            // }
            // cout << endl;

            // l.reverse();
            // cout<<"R -> ";
            // for (int val : l)
            // {
            //     cout << val << " ";
            // }
            // cout << endl;
            // l.reverse();
        }
        else if(x==2)
        {
            if(v>=0 && v<l.size())
           {
            l.erase(next(l.begin(), v), next(l.begin(), v + 1));
            // cout<<"L -> ";
            // for (int val : l)
            // {
            //     cout << val << " ";
            // }
            // cout << endl;

            // l.reverse();
            // cout<<"R -> ";
            // for (int val : l)
            // {
            //     cout << val << " ";
            // }
            // cout << endl;
            // l.reverse();
           }
        }

        cout<<"L -> ";
            for (int val : l)
            {
                cout << val << " ";
            }
            cout << endl;

        l.reverse();
            cout<<"R -> ";
            for (int val : l)
            {
                cout << val << " ";
            }
            cout << endl;
            l.reverse();

        // for (int val : l)
        // {
        //     cout << val << " ";
        // }
        // cout << endl;

        // cout << endl;
    }
    return 0;
}