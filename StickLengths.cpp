#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	std::multiset<int> mst;
	cin>>n;
	int m = 0;
	if(n%2==0)
	{
		m = ((n)/2-1);
	}
	else
	{
		m = ((n)/2);
	}
	for(int i = 0;i<n;i++)
	{
		long long int p;
		cin>>p;
		mst.insert(p);
	}
	multiset<int>::iterator it = mst.begin();
	multiset<int>::iterator it2 = mst.begin();
	advance(it2,m);
	long long int count;
	count = 0;
	for(it = mst.begin();it!=mst.end();it++)
	{
		count+=abs(*it-*it2);
	}
	cout<<count<<'\n';
	return 0;
}   