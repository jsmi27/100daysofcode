//https://www.geeksforgeeks.org/frequent-element-array/?ref=leftbar-rightbar
/*
Input : arr[] = {1, 3, 2, 1, 4, 1}
Output : 1
1 appears three times in array which
is maximum frequency.
Input : arr[] = {10, 20, 10, 20, 30, 20, 20}
Output : 20
*/
#include <iostream>
using namespace std; 
// driver program 
int main() 
{ 
    int arr[] = {1, 3, 2, 1, 4, 1}; 
    int i,j,len,temp=0,count=0,num,max;
    len=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++){
    	num=arr[i];
	    for(j=0;j<len;j++){
	       if(arr[j]==num)
	       temp++;
	    }
	    if(temp>count)
	    max=num;
	}
    cout<<max;
    return 0; 
} 