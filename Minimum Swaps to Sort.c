#include<bits/stdc++.h>
using namespace std;
int min Swaps (int New, int N);
//Driver program to test the above function
// Given an array of N distinct elementsA[ ]. The task is to find the minimum number of swaps required to sort the array. Your are required to complete the function which returns an integer denoting the minimum number of swaps, required to sort the array.

int main()
{
int t;
cin>>t;
while(t--)
{
int n
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<minSwaps (a,n)<<endl;
}
}
int minSwaps(int A[], int N){
    /*Selection Sort*/
    int min,t,c=0;
    for(int i=0;i<N-1;i++)
    {
        min=i;
        for(int j=i+1;j<N;j++)
        {
            if(A[j]<A[min])
            min=j;
        }
        if(i!=min)
        {
            t=A[i];
        A[i]=A[min];
        A[min]=t;
        c++;
            
        }
    }
    return c;
}
