#include<iostream>
using namespace std;


int main()
{
  int i,j;
  for(i=5;i>=1;i--)
  {
    for(j=1;j<5;j++)
    {
      if(j<=i)
        cout<<j;
      else
        cout<<" ";
    }
    for(j=5;j>=1;j--)
    {
      if(j<=i)
        cout<<j;
      else
        cout<<" ";
    } 
    cout<<"\n";
  }
  return 0;
}
