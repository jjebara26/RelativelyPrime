#include <iostream>
#include <array> 
using namespace std;

//function to check if 2 numbers are relatively prime using the Euclidian Algorithm
bool areTheyRelativelyPrime(int x, int y) {
    bool rp = false;
    bool pp = true;
    int smaller;
    int temp;
    int bigger;
    
    if (x > y) {
        smaller = y;
        bigger = x;
    } else if (x < y) {
        smaller = x;
        bigger = y;
    }

    while (!rp && pp) {
        if(smaller != 0) {
            temp = smaller;
            smaller =  bigger % smaller;
            bigger = temp;
        } else {
            if(bigger == 1) {
                rp = true;
            } else {
                rp = false;
                pp = false;
            }
        }
    }

    if(x == y) {
        rp = false;
    }

    return rp;
}

int main() {
    //code to test areTheyRelativelyPrime function
    int x;
    int y;

    do {
        cout << "Enter 2 positive integers to check if they are relatively prime: ";
        cin >> x;
        cin >> y;
    } while(x < 1 && y < 1);


    if(areTheyRelativelyPrime(x, y)) {
        cout << x << " and " << y << " are relatively prime.";
    } else {
        cout << x << " and " << y << " are not relatively prime.";
    }

    return 0;
}