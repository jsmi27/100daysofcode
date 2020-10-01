/*Problem statement : Given an unsorted array of integers, find an integer-pair that equals to the given sum.
Input :
arr = [8,7,2,5,3,1]
sum = 10
Output :
pair found at index 0 and 2 i.e. (8 + 2) 
pair found at index 1 and 4 i.e. (7 + 3)*/

// Time complexity = O(n^2) & Space Complexity = O(1)
#include <iostream>
using namespace std;
int main(void)
{
	int arr[]={8,7,2,5,3,1};
	int i,j,num1,num2,len,sum=10;
	len=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<len;i++){
		num1=arr[i];
		for(j=i+1;j<len;j++){
			num2=arr[j];
			if((num1+num2)==sum)
			cout<<"pair found at index "<< i <<" and "<< j <<" i.e. ("<< num1 <<" + "<< num2 <<") \n";
		}
	}
	return 0;
}


// Time complexity = O(nlogn) & Space Complexity = O(1)
//Prerequisite - Sorted Array
#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int arr[]={8,7,2,5,3,1};
	int i,j,num1,num2,len,sum=10;
	len=sizeof(arr)/sizeof(arr[0]);
	std::sort(arr,arr+len);
	i=0;      //lower index
	j=len-1;  //upper index
	while(i<j){
		num1=arr[i];
		num2=arr[j];
	    if((num1+num2)==sum)
	    cout<<"pair found at index "<< i <<" and "<< j <<" i.e. ("<< num1 <<" + "<< num2 <<") \n";
	    //increment lower index if total is lower than sum 
	    //decrement upper index if total is greater than sum
        ((num1+num2)<sum)?i++:j--;
	}
	return 0;
}


