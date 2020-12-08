// C++ program to find second largest element in an array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int i,len,lar1=0,lar2=0;
	int arr[] = {115,1,13,1,15};
	len = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<len;i++){
		  if (arr[i] > lar1) {
		        lar2 = lar1;
		        lar1 = arr[i];
	      } else if (arr[i] > lar2) {
	        	lar2 = arr[i];
	      }
	}
	return 0;
}

----------------------------------------------------------------------------------------------
/* 
//Simple Solution 
#include <bits/stdc++.h>
using namespace std;
// Function to print the second largest elements
void print2largest(int arr[], int arr_size)
{
    int i, first, second;
    // sort the array
    sort(arr, arr + arr_size);
    // start from second last element as the largest element is at last
    for (i = arr_size - 2; i >= 0; i--) {
        // if the element is not equal to largest element
        if (arr[i] != arr[arr_size - 1]) {
            printf("The second largest element is %d\n", arr[i]);
            return;
        }
    }
    printf("There is no second largest element\n");
}
// Driver program to test above function 
int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    print2largest(arr, n);
    return 0;
}

Complexity Analysis:

Time Complexity: O(n log n). 
Time required to sort the array is O(n log n).
Auxiliary space: O(1). 
As no extra space is required.
------------------------------------------------------------------------------------------------
Better Solution: 
Approach: The approach is to traverse the array twice. In the first traversal find the maximum element. In the second traversal find the greatest element less than the element obtained in the first traversal.
 
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
void print2largest(int arr[], int arr_size)
{
    int i, first, second;
    int largest = second = INT_MIN;
    // find the largest element
    for (int i = 0; i < arr_size; i++) {
        largest = max(largest, arr[i]);
    }
    // find the second largest element
    for (int i = 0; i < arr_size; i++) {
        if (arr[i] != largest)
            second = max(second, arr[i]);
    }
    if (second == INT_MIN)
        printf("There is no second largest element\n");
    else
        printf("The second largest element is %d\n", second);
}
int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    print2largest(arr, n);
    return 0;
}

Complexity Analysis:

Time Complexity: O(n). 
Two traversals of the array is needed.
Auxiliary space: O(1). 
As no extra space is required.
------------------------------------------------------------------------------------------------
Efficient Solution 
Approach: Find the second largest element in a single traversal. 
Below is the complete algorithm for doing this:  

1) Initialize two variables first and second to INT_MIN as
   first = second = INT_MIN
2) Start traversing the array,
   a) If the current element in array say arr[i] is greater
      than first. Then update first and second as,
      second = first
      first = arr[i]
   b) If the current element is in between first and second,
      then update second to store the value of current variable as
      second = arr[i]
3) Return the value stored in second.

#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
void print2largest(int arr[], int arr_size)
{
    int i, first, second;
    first = second = INT_MIN;
    for(i = 0; i < arr_size; i++)
    {
         
       // If current element is greater than first then update both first and second 
       if (arr[i] > first)
       {
           second = first;
           first = arr[i];
       }
        
       // If arr[i] is in between first and second then update second 
       else if (arr[i] > second &&
                arr[i] != first)
       {
           second = arr[i];
       }
    }
    if (second == INT_MIN)
        cout << "There is no second largest element\n";
    else
        cout << "The second largest element is "<< second;
}
int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    print2largest(arr, n);
    return 0;
}

Complexity Analysis:

Time Complexity: O(n). 
Only one traversal of the array is needed.
Auxiliary space: O(1). 
As no extra space is required.
*/

