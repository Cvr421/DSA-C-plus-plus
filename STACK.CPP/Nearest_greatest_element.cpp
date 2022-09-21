#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(int argc, char const *argv[])
{

    // cout<<"hello world";
    // vector<int> v;
    
    int n;
     
    cin >> n;
    int arr[n];
    // int v[n];
    stack<int> s;
     vector<int> v(n);
    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }
   

    for (int i = n - 1; i > 0; i--)
    {
        if (s.size() == 0)
        {
            v.push_back(-1);
        }
        else if (s.size() > 0 && s.top() > arr[i])
        {
            v.push_back(s.top());

            /* code */
        }
        else if (s.size() > 0 && s.top() <= arr[i])
        {
            /* code */
            while (s.size() > 0 && s.top() <= arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
            
        }
        
        reverse(v.begin(), v.end());
            s.push(arr[i]);
        
    }
    
        for (auto i = v.begin(); i != v.end(); ++i)
        {
            cout << *i << " ";
            // cout<<v(i);
        }
    return 0;
}
