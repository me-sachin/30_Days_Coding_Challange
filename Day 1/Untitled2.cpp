// Program For Reverse of a String .
#include <bits/stdc++.h>
using namespace std;
void reverseArray(int a[],int start,int last)
{
	if(start>=last)
	return;
	int temp=a[start];
	a[start]=a[last];
	a[last]=temp;
	//Calling Recursive Function
	reverseArray(a,start+1,last-1);
	
}
void printArray(int a[],int y)
{
	for(int i=0;i<y+1;i++)
	{
		cout<<a[i]<<" ";
	}
	
	return;
}

int main()
{
	int x,i;
	cin>>x;
	int a[x];
	for(i=0;i<x;i++)
	{
		cin>>a[i];
	}
	cout<<"\nyour Array is :";
		for(i=0;i<x;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<" \n";
	cout<<"reverse array :";
	int start=0,last=x-1;
	reverseArray(a,start,last);
	printArray(a,last);
	return 0;
	
}
