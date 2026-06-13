#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> s;
    string num;
    string name;
    int q;
    cin>>q;
    while(q--)
    {
      cin>>num;
      
      if(num=="0")
      {
        cin>>name;
        s.push(name);
      }
      

      if(!s.empty())
      {
        if(num=="1")
        {
            cout<<s.front()<<endl;
            s.pop();
        }
      }
      else if(s.empty())
      cout<<"Invalid"<<endl;

    }
    return 0;
}