#include<bits/stdc++.h>
using namespace std;
int main(){
  int A[10],size,sum=0;
  cout<<"Enter SIze";
  cin>>size;
  for(int i=0;i<size;i++){
    cin>>A[i];
  }
  for(int i=0;i<size;i++){
    cout<<A[i]<<endl;
  }
  for(int i=0;i<size;i++){
    sum=sum+A[i];
  }
  cout<<"Sum of Array is"<<" "<<sum<<endl;
  return 0;
}
