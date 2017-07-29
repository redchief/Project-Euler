/**
 *    @file    Problem10.cpp
 *    @author  Jaysheel Utekar (redchief)
 *    @date    11 July 2017
 *
 *    @brief   Project Euler - Problem 10 (Summation of primes)
 *
 *    @section Description
 *    The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 *    Find the sum of all the primes below two million.
 *
 *
 *
 *
 **/

#include <iostream>
using namespace std;

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    long long sum = 0;
    for (int p=2; p<=n; p++){
       if (prime[p]){
         cout << p << " ";
         sum +=p;
       }
    }
    cout<<"\n The sum of all prime numbers is "<<sum<<endl;
}

// Driver Program to test above function
int main()
{
    int n = 2000000;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n);
    return 0;
}
