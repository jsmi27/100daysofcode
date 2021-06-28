//https://www.interviewbit.com/problems/spiral-order-matrix-i
/*
A = [  [ 1, 2, 3 ],
       [ 8, 9, 4 ],
       [ 7, 6, 5 ]  ]
A(mxn), m=3, n=3
dir=0 (-→)
dir=1 (↓)
dir=2 (←-)
dir=3 (↑)
*/
#include <iostream>
using namespace std;
int main()
{
	int m=3,n=3,i,dir=0;
	int  A[3][3] = {{1,2,3},{8,9,4},{7,6,5}};
	int top=0,bottom=m-1,left=0,right=n-1;
	while((top<=bottom) && (left<=right)){
		if(dir==0){
			for(i=left;i<=right;i++)
			cout<<A[top][i];
			top++;
			dir++;
		}else if(dir==1){
			for(i=top;i<=bottom;i++)
			cout<<A[i][right];
			right--;
			dir++;
		}else if(dir==2){
			for(i=right;i>=left;i--)
			cout<<A[bottom][i];
			bottom--;
			dir++;
		}else if(dir==3){
			for(i=bottom;i>=top;i--)
			cout<<A[i][left];
			left++;
		}
	}
	return 0;
}