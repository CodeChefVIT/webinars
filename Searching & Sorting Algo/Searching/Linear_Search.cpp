#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
  cout<<"\n\n-- LINEAR SEARCH --\n"<<endl;
  int n,i,inp;
  cout<<"Enter the Capacity of the array: ";
  cin>>n;
  int a[n];
  cout<<"Enter numbers -"<<endl;
  for(i=0;i<n;i++){
    cin>>a[i];
  }

  cout<<"Enter the number to be searched: "<<endl;
  cin>>inp;

  for(i=0;i<n;i++){
    if(a[i] == inp){
      cout<<"Number found at pos: "<<i+1<<endl;
    }
    else{
      cout<<"Number not found"<<endl;
    }
  }

  return 0;
}
