//Link:https://www.codechef.com/problems/CARSELL
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define modu 1000000007
int main() {
int t;
cin>>t;
while(t--)
{
ll n,i;
cin>>n;
ll arr[n],profit=0;
for(i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n,greater<int>());
for(i=0;i<n;i++)
{
if(arr[i]-i>0)
profit=(profit+arr[i]-i)%modu;
else
break;
}
cout<<profit<<'\n';

}
return 0;
}
