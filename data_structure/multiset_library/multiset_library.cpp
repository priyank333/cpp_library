
/*
    C++ also contains the structures multiset and unordered_multiset that
    otherwise work like set and unordered_set but they can contain multiple
    instances of an element.
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
        In the following code all three instances of the number
        5 are added to a multiset
    */

    multiset<int> mset;

    mset.insert(5);
    mset.insert(5);
    mset.insert(6);
    mset.insert(6);
    cout << "count (5) : " << mset.count(5) << endl;

    // The function erase removes all instances of an element from a multiset
    mset.erase(5);
    cout << "count (5) After erase for all similar elements : " << mset.count(5)
         << endl;

    // Only one instance should be removed, which can be done as follows

    mset.erase(mset.find(6));
    cout << "count (6) After erase for single element : " << mset.count(6)
         << endl;

    return 0;
}