/*
Some interesting fact about Prime numbers 

Two is the only even Prime number.
Every prime number can be represented in form of 6n+1 or 6n-1 except the prime number 2 and 3, where n is a natural number.
Two and Three are only two consecutive natural numbers that are prime.

Naive solution. 
A naive solution is to iterate through all numbers from 2 to sqrt(n) and for every number check if it divides n. 
If we find any number that divides, we return false.

Time Complexity: O(sqrt{n}) 

apan ne root n tak hi kyu iterate kiya? 
agar koi number prime nhi hai then uske atleast do factors hoge one at a distance<= √n and other at a distance
>=√n .ye chiz confirm hai. agar <=√n me hi nhi mila kuch iska matlab vo prime hi hai ye confirm.
*/

#include <bits/stdc++.h>
using namespace std;
 
// function check whether a number
// is prime or not
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
// Driver Code
int main()
{
    isPrime(11) ? cout << " true\n" : cout << " false\n";
    return 0;
}


