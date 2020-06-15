#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    /*During a pre-increment, the designated variable (k) receives the increment upfront before incrementing variable n is incremented.
    
    
    During a post-increment, the designated variable (b) receives the increment after the incrementing variable a is incremented.
    
    Therefore, k = 1, n = 1, b = 0, a = 1 after execution.
*/
    int k, n, a, b;
    k = 0;
    n = 0;
    
    a = 0;
    b = 0;
    
   // What could we do to this code to print the final output after 5 increments?
    //What would happen if variable (i) was modified to become a pre-increment?
    /*    for (int i = 0; i<=5; i++){ What would happen if variable (i) was modified to become a pre-increment?
            k = ++n;
            b = a++;
        }
        cout << k << endl;
        cout << n << endl;
        cout << b << endl;
        cout << a << endl;
*/

    
    k = ++n;
    cout << k << endl;
    cout << n << endl;
    
    b = a++;
    cout << b << endl;
    cout << a << endl;
    return 0;
}
