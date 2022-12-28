//Hassaan Abdullah 
//2022-uam-1951
//BsCs(D)
#include<iostream>
using namespace std;
int main()
{
cout<<"program that display sum of 10 input expect the value in index 3,5\n"<<endl;
 int arr[10],sum=0;
cout<<"Enter_Your_Number"<<endl;
for(int i=0;i<=9;i++)
{
cin>>arr[i];
if(i==3||i==5)
continue;
sum=sum + arr[i];
}
cout<<"Sum of Array that = "<<sum<<endl;
cout<<"________________________________________";
cout<<"program that display output In reverse Order\n"<<endl;
int arrr[10];
for(int j=0;j<=9;j++)
cin>>arrr[j];
cout<<"\n in reverse order\n"<<endl;
for(int j=9;j>=0;j--)
cout<<arrr[j]<<endl;
return 0;
}