/*courtesy :: https://www.linkedin.com/pulse/interview-pearls-in-shuffle-vlad-trubachov/

Given array:
[a1, a2, ..., an, b1, b2, ..., bn]
interleave it in place to:
[a1, b1, a2, b2, …, an, bn]
*/
//Brute Force :
#include <iostream>
#include <vector>
using namespace std;
void interleaveArray_InPlace(vector<int>& v) {
    for (int ptr1 = 1, ptr2 = v.size() / 2; ptr1 < ptr2 && ptr2 < v.size() - 1; ptr1 += 2, ++ptr2)
        for (int p = ptr2; p > ptr1; --p) 
            swap(v[p], v[p - 1]);
}
int main()
{
    int arr[]={1,3,5,7,9,2,4,6,8,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + n);
    interleaveArray_InPlace(vect);
    for (int x : vect)
        cout << x << " ";
    return 0;
}