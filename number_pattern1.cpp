/*
Number Pattern 1
Send Feedback
Print the following pattern
Pattern for N = 4

1
23
345
4567

Input Format :

N (Total no. of rows)

Output Format :

Pattern in N lines

Sample Input 1 :

3

Sample Output 1 :

1
23
345
*/
#include <iostream>
using namespace std;
int main()
{
	int n,i=1,count=0,val;
	cout<<"enter the number of rows you want \n";
	cin>>n;
	while(i<=n)
	{
		cout=1;
		while(count<=i)
		{
			cout<<i;
			count++;
		}
		cout<<endl;
		i++;
	}

}	