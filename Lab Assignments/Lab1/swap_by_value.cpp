#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
	int a,b;
	cout<<"enter value of a & b\n";
	cin>>a>>b;
	cout<<"before swapping value of a and b is "<<a<<b<<endl;
	swap(a,b);
	cout<<"after swapping value of a and b is"<<a<<b<<endl;
	
}
void swap(int p,int q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	cout<<"after swapping value of p and q is"<<p<<q<<endl;
}
