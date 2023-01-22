#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  }
  stack<int> s;
  vector<int> v;
  for(int i=0;i<n;i++){
  	if(s.size()==0)
  		v.push_back(-1);
  	else if(s.size()>0 && s.top()>arr[i])
  		v.push_back(s.top());
  	else if(s.size()>0 && s.top()<arr[i]){
  		while(s.size()>0 && s.top()<arr[i]){
  			s.pop();
  		}
  		if(s.size()==0)
  			v.push_back(-1);
  		else
  			v.push_back(s.top());
  	}
  	s.push(arr[i]);
  }
  for(auto it:v){
  	cout<<it<<" ";
  }
  return 0;
}