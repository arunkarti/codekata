#include<iostream>
int sort(int arr[],int n);
using namespace std;
int main()
{
  int n,k,i=0;
  cin>>n>>k;
  int aux[100];
  while(n>0)
  {
  aux[i]=n%10;
  n=n/10;
  i++;
  }
  sort(aux,i);
  for(int z=0;z<(i-k);z++)
  cout<<aux[z];
}
int sort(int arr[],int n)
{
  int key,i,j;
  for(int i=0;i<n;i++)
  {
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key)
    {
      arr[j+1]=arr[j];
      j=j-1;
      
    }
    arr[j+1]=key;
    
  }
  

}
