  /*courtesy :: https://www.linkedin.com/pulse/interview-pearls-in-shuffle-vlad-trubachov/
Contidition - The size of the array should be power of two (size = 2^n where n>0)
Given array:
[a1, a2, ..., an, b1, b2, ..., bn]
interleave it in place to:
[a1, b1, a2, b2, …, an, bn]
*/
//Divide and Conquer :

#include <iostream>
#include <vector>
using namespace std;
template <class Iterator> void inShuffle_DC(Iterator first, Iterator last) {
    auto size = last - first;  
    if (size < 4 || ((size & (size - 1)) != 0))
        return; 
    swap_ranges(first + size / 4, first + size / 2, first + size / 2);
    inShuffle_DC(first, first + size / 2);
    inShuffle_DC(first + size / 2, last);
}
int main()
{
    //int arr[]={1,3,5,7,2,4,6,8};                         //size = 2^3 = 8
    int arr[]={1,3,5,7,9,11,13,15,2,4,6,8,10,12,14,16};    //size = 2^4 = 16
    int n = sizeof(arr) / sizeof(arr[0]);                   
    vector<int> vect(arr, arr + n);
    inShuffle_DC(vect.begin(), vect.end());
    for (int x : vect)
        cout << x << " ";
    return 0;
}