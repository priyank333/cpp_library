
/*
    A map is a generalized array that consists of key-value-pairs. While the
   keys in an ordinary array are always the consecutive integers 0,1,...,n-1,
   where n is the size of the array, the keys in a map can be of any data type
   and they do not have to be consecutive values. The C++ standard library
   contains two map implementations that correspond to the set implementations:
   the structure map is based on a balanced binary tree and accessing elements
   takes O(logn) time, while the structure unordered_map uses hashing and
   accessing elements takes O(1) time on average.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    /*
        The following code creates a map where the keys are strings and the
        values are integers
    */

    map<string, int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;

    cout << m["banana"] << "\n";

    /*
        If the value of a key is requested but the map does not contain it, the
        key is automatically added to the map with a default value. For example,
        in the following code, the key ”aybabtu” with value 0 is added to the
        map.
    */
    cout << m["aybabtu"] << "\n";  // 0

    // The function count checks if a key exists in a map

    if (m.count("aybabtu")) {
        // key exists
    }

    // The following code prints all the keys and values in a map

    for (auto x : m) {
        cout << x.first << " " << x.second << "\n";
    }
    return 0;
}