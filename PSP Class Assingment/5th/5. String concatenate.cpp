/*
Program to demonstrate the concatenation of two string using 1-D array
*/
#include<iostream>
using namespace std;
int main()
{
	char str1[100],str2[100],str3[100];
	int i,j;
	cout<<"Enter first string"<<endl;
	gets(str1);							//Reading first string form the user
	cout<<"Enter second string"<<endl;
	gets(str2);							//Reading second string from the user
	for(i=0;str1[i]!='\0';i++)
		str3[i]=str1[i];				//Copying the elements of the first string to the new string
	for(j=0;str2[j]!='\0';j++)
		str3[i+j]=str2[j];				//Copying the elements of the second string to the new string after the elements of first string
	str3[i+j]='\0';						//Intializing the last element of the new string to NULL
	cout<<"New string is "<<endl<<str3;	//Display the concatenated string
	return 0;
}
