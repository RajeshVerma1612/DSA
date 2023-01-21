#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> temp;
  stack<int> st;
  vector<int> arr;
  for(int i=0;i<n;i++){
  	int x;
  	cin>>x;
  	arr.push_back(x);
  }	
  // O(n^2) solution

  // for(int i=0;i<x;i++){
  // 	if(i==x-1){
  // 		temp.push_back(-1);
  // 		break;
  // 	}
  // 	for(int j=i+1;j<x;j++){
  // 		if(arr[j]>arr[i]){
  // 			temp.push_back(arr[j]);
  // 			break;  		
  // 		}
  // 	}
  // }

  // O(n) solution 
  
  for(int i=n-1;i>-1;i--){
  	if(st.size()==0){
  		temp.push_back(-1);
  	}
  	else if(st.size()>0 && st.top()>arr[i]){
  		temp.push_back(st.top());
  	}
  	else if(st.size()>0 && st.top()<arr[i]){
  		while(st.size()!=0 && st.top()<arr[i]){
  			st.pop();
  		}
  		if(st.top()==0){
  			temp.push_back(-1);
  		}
  		else{
  			temp.push_back(st.top());
  		}
  	}
  	st.push(arr[i]);
  }
  reverse(temp.begin(),temp.end());
  for(auto it:temp){
  	cout<<it<<" ";
  }
  return 0;
}