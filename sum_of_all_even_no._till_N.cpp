/*
Sum of Even Numbers till N
Given a number N, print sum of all even numbers from 1 to N.
Input Format :

Integer N

Output Format :

Required Sum 

Sample Input 1 :

 6

Sample Output 1 :

12

*/
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter the number till you want to print the sum of all even numbers \n";
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
		else
			continue;
	}
	cout<<"the sum is \n"<<sum;

}
