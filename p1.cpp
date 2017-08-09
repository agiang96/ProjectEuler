/* Members: Alex Giang
 * Problem #1, sum of multiples 3 or 5 < 1000
 * Filename: p1.cpp
 */

#include <math.h>
#include <iostream>

using namespace std;

int main() {
    int var = 0;
    int sum = 0;

// if a number is a multiple of 3 or 5, add to sum
    while(var < 1000) {
        if( var%3 == 0 || var%5 == 0  ) {
            sum = sum + var;
        }
    var++;
    }

    cout << "sum is " << sum << endl;
}

