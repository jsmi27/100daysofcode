/*courtesy :: https://www.linkedin.com/pulse/interview-pearls-in-shuffle-vlad-trubachov/
Contidition - The array should be balanced or contains even elements
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
    for (int pos1 = 1, pos2 = v.size() / 2; pos1 < pos2 && pos2 < v.size() - 1; pos1 += 2, pos2++)
        for (int index = pos2; index > pos1; index--) 
            swap(v[index], v[index - 1]);
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