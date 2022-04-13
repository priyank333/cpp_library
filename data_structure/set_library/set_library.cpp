
/*
    A set is a data structure that maintains a collection of elements. The basic
    operations of sets are element insertion, search and removal.
    The C++ standard library contains two set implementations: The structure
    set is based on a balanced binary tree and its operations work in O(logn)
    time. The structure unordered_set uses hashing, and its operations work in
    O(1) time on average. The choice of which set implementation to use is often
    a matter of taste. The benefit of the set structure is that it maintains the
    order of the elements and provides functions that are not available in
    unordered_set. On the other hand, unordered_set can be more efficient.
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

    The following code creates a set that contains integers, and shows some of
    the operations. The function insert adds an element to the set, the function
    count returns the number of occurrences of an element in the set, and the
    function erase removes an element from the set.

    */

    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);
    cout << s.count(3) << "\n";  // 1
    cout << s.count(4) << "\n";  // 0
    s.erase(3);
    s.insert(4);
    cout << s.count(3) << "\n";  // 0
    cout << s.count(4) << "\n";  // 1

    // The following code prints the number of elements in it, and then iterates
    // through all the elements
    cout << s.size() << "\n";  // 4
    for (auto x : s) {
        cout << x << "\n";
    }

    /*
        Iterators are often used to access elements of a set. The following code
        creates an iterator it that points to the smallest element in a set
    */

    set<int>::iterator it = s.begin();

    /*
        A shorter way to write the code is as follows:
        auto it = s.begin();
    */
    /*
        The element to which an iterator points can be accessed using the *
        symbol. For example, the following code prints the first element in the
        set
    */
    cout << *it << "\n";

    /*
        Iterators can be moved using the operators ++ (forward) and --
        (backward), meaning that the iterator moves to the next or previous
        element in the set.
    */

    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << "\n";
    }

    // The following code prints the largest element in the set
    it = s.end();
    it--;
    cout << *it << "\n";

    /*
        The function find(x) returns an iterator that points to an element whose
        value is x. However, if the set does not contain x, the iterator will be
        end.
    */

    it = s.find(4);
    if (it == s.end()) {
        // x is not found
    }

    /*

        The function lower_bound(x) returns an iterator to the smallest element
        in the set whose value is at least x, and the function upper_bound(x)
        returns an iterator to the smallest element in the set whose value is
        larger than x. In both functions, if such an element does not exist, the
        return value is end. These functions are not supported by the
        unordered_set structure which does not maintain the order of the
        elements.
    */

    set<int> s1;
    s1.insert(12);
    s1.insert(21);
    s1.insert(2);
    s1.insert(2523);
    s1.insert(213);
    s1.insert(1);
    int x = -20;
    auto it1 = s1.lower_bound(x);
    cout << *it1 << endl;
    if (it1 == s.begin()) {
        cout << *it1 << "\n";
    } else if (it1 == s.end()) {
        it1--;
        cout << *it1 << "\n";
    } else {
        int a = *it1;
        it1--;
        int b = *it1;
        if (x - b < a - x)
            cout << b << "\n";
        else
            cout << a << "\n";
    }

    return 0;
}