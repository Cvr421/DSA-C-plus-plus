#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++ ){
      cin>>n;
    }
    vector<int>v;
    stack<int>s;
    for(int i=s.size()-1;i>0;i++){
        if (s.size()==0){
            v.push_back(-1);

        }
         if(s.size()>0 && s.top()<arr[i]){
            v.push_back(s.top());

         }
         if (s.size()>0 && s.top()>=arr[i]){
            while(s.size()>0 && s.top()>=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }

         }
         s.push(arr[i]);
    }
    return 0;
}

