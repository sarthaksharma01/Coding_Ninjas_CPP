/*Find Character Case
Send Feedback
Write a program to determine whether the entered character is in uppercase or lowercase, or is an invalid character.
Print

 1 for uppercase
 0 for lowercase 
-1 for any other character (special characters or others)

Input format :

Single Character

Output format :

1 or 0 or -1

Sample Input 1 :

v

Sample Output 1 :

0

Sample Input 2 :

V

Sample Output 2 :

1

Sample Input 3 :

#

Sample Output 3 :

-1
*/
#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter any character \n";
	cin>>ch;
	if(ch>=65&&ch<=90)
	{
		cout<<"CAPITAL \n";
	}
	else if(ch>=97&&ch<=122)
	{
		cout<<"small \n";
	}
	else
		cout<<"not an alphabet \n";
}

