#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    // The following code creates an empty vector and adds elements to it:
    vector<int> arr;
    int vector_size;
    int val;
    cin >> vector_size;
    for (int i = 0; i < vector_size; i++) {
        cin >> val;
        arr.push_back(val);
    }

    // The elements can be accessed like in an ordinary array
    cout << arr[0] << "\n";
    cout << arr[1] << "\n";
    cout << arr[2] << "\n";

    // The following code iterates through the vector and prints elements in it
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "\n";
    }

    // A shorter way to iterate through a vector is as follows
    for (auto x : arr) {
        cout << x << "\n";
    }

    /*The function back returns the last element in the vector, and the function
     * pop_back removes the last element*/

    arr.push_back(5);
    arr.push_back(2);
    cout << arr.back() << "\n";  // 2
    arr.pop_back();
    cout << arr.back() << "\n";  // 5

    // The following code creates a vector with five elements

    vector<int> arr2 = {2, 4, 2, 5, 1};

    // size 10, initial value 0
    vector<int> arr3(10);

    // size 10, initial value 5
    vector<int> arr4(10, 5);

    /*
        Iterators are used in C++ standard library functions that are given a
        range of elements in a data structure. Usually, we want to process all
        elements in a data structure, so the iterators begin and end are given
        for the function. For example, the following code sorts a vector using
        the function sort, then reverses the order of the elements using the
        function reverse, and finally shuffles the order of the elements using
        the function random_shuffle.
    */

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    random_shuffle(arr.begin(), arr.end());

    return 0;
}