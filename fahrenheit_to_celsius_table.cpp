/*
Celsius to Fahrenheit Table
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Input Format :

3 integers - S, E and W respectively separated by space.

Output Format :

Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value. On Fahrenheit value and its corresponding Celsius value should be separate by tab ("\t")

Sample Input :

0 100 20

Sample Output :

0   -17
20  -6
40  4
60  15
80  26
100 37

*/
#include<iostream>
using namespace std;
int main()
{
	int s,e,w,cel;
	cout<<"enter the starting value \n";
	cin>>s;
	cout<<"enter the ending value \n";
	cin>>e;
	cout<<"enter the width(gap) between the values \n";
	cin>>w;
    int i=s;
    while(i<=e)
    {
    	cel=(i-32)* 5.0/9;
    cout<<i<<"\t"<<cel<<endl;
    i=i+w;
    }
}