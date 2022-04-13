
/*
    A bitset is an array whose each value is either 0 or 1.
    The benefit of using bitsets is that they require less memory than ordinary
    arrays, because each element in a bitset only uses one bit of memory. For
    example, if n bits are stored in an int array, 32n bits of memory will be
    used, but a corresponding bitset only requires n bits of memory. In
    addition, the values of a bitset can be efficiently manipulated using bit
    operators, which makes it possible to optimize algorithms using bit sets.
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

    bitset<10> s;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s[4] << "\n";  // 1
    cout << s[5] << "\n";  // 0
    return 0;
}