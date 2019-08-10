#include<iostream>
using namespace std;
int main()
{
int n;
int x,s=0;
float p;
cin>>n;
cin>>p;
while(n!=0)
{
s=s+n;
n=n-n*(p/100);
}
cout<<s;
return 0;
}

