// Given a boolean 2D array where each row is sorted. Find the row with the maximum number of 1s.

#include <iostream>
#include <bits/stdc++.h>#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	  int N,M;
	  cin>>N>>M;
	  int a[N][M];
	  int max=INT_MIN;
	  int t;
	  for(int i=0;i<N;i++)
	  { int count=0;
	  	for(int j=0;j<M;j++)
	  	{
		  cin>>a[i][j];
		  if(a[i][j]==1)
		  count++;
		}
		if(count>max)
		{
		  max=count;
		  t=i;
	    }
	}
	cout<<t<<endl;
	}
	return 0;
}
