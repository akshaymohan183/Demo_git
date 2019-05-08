#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int arr[10], n, i, max;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    int* i1;
    i1 = std::max_element(arr,arr + n);
    cout << int (*i1) << "\n";
    return 0;
}

