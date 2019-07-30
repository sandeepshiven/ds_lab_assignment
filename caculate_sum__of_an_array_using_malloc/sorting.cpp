#include<iostream.h>
#include<conio.h>
int main()
{
int arr[5];
cout<<"Enter the array";
for(int i=0;i<5;i++)
cin>>arr[i];

for(i=0;i<5;i++)
{
for(int n=i+1;n<5-1;i++)
{
if(arr[i]>arr[n]){
intj;
j=arr[i];
arr[i]=arr[n];
arr[n]=j;
}} }
for(i=0;i<5;i++)
cout<<arr[i];
return(0);
}
