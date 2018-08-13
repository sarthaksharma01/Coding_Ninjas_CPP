/*Write a program to input name (as a single character) and marks of three tests of a student (all integers). Then calculate and print the name and average (integer) of all test marks.
All the test marks are integers and calculate average also as integer. That is, you need to print the integer part of average only, neglect the decimal part.
Input format :

Line 1 : Name (Single character)
Line 2 : 3 Test marks (separated by space)

Output format :

Name Average (in different lines)

Sample Input 1 :

A
3 4 6

Sample Output 1 :

A
4
*/
#include<iostream>
using namespace std;
int main()
{
char name;
int a,b,c,avg;
cin>>name;
cin>>a>>b>>c;
avg=(a+b+c)/3;
cout<<avg;
}