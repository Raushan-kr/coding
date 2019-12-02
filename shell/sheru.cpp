#include<iostream>
#include <bits/stdc++.h>
using namespace std;

/*int esprofit(int c[],int n)
{
	
}*/

int grprofit(float arr[],int n)
{
	float tp=0.0;
	float sum=0.0;
	float temp=1;
	cout<<"array is";
	 for (int i = 0; i < n; ++i) 
        cout << arr[i] << " ";
		 
	for(int i=n-1;i>=0;i--)
	{
		sum= sum+ arr[i];
		cout <<"sum is "<<sum;
		tp=tp+arr[i]*temp;
		temp=temp*0.9;	
	}
	cout<<" total sum ="<<sum;
	cout<<"tc="<<tp;
	cout<<"tp="<<(sum-tp);
}


int main()
{
	int n;
	printf("enter number of product mrs. have");
	scanf("%d",&n);
	float c[n];
	for(int i=0;i<n;i++)
	{
		cin >> c[i];
//		cout<<c[i];
	}
	 sort(c, c+n);
	 grprofit(c,n); 
//	esprofit(c,n)
		
}
