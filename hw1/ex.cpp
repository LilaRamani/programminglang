#include <cstdlib>
#include <iostream>
using namespace std;

int sigma(int m, int n);

int fib(int m);

int exp(int m, int n);

int log(int m, int n);

int prime(int m);

int binary(int m);

int main()
{
        //int answer = sigma(1, 3);
        //cout << answer << endl;
        //cout << fib(6) << endl;
        cout << binary(256) << endl;
}

int sigma(int m, int n)
{
    	if (m > n) {
                return 0;
        } else {
                return m + sigma(m+1, n);
        }
}

int exp(int m, int n)
{
        if (n == 0) {
                return 1;
        } else {
                return m * exp(m, n-1); 
        }
}

int log(int m, int n)
{
        (void)m;
        (void)n;
        return 0; 
}

int fib(int m)
{
        if (m == 1 || m == 2) {
                return 1;
        }
        else {
                return fib(m - 1) + fib(m -2); 
        }
}

/*int prime(int m)
{
        if (m == 2) {
                return 

        if (m % var == ) {
                

}*/

int binary(int m)
{
        //if m is negative, run function on complement and then make negative at the end   
        if (m < 0) {
                return -1 * binary(-1 * m);
        //if function is positive
        } else {
                // if m is 0 or 1 just return m 
                if (m < 2) {
                        return m; 
                } else {
                        //
                        if ((m % 2) == 1) {
                                cout << "mod by 2 is 1" << endl;
                                return (10 * binary(m/2)) + 1;
                        } else {
                                cout << "mod by 2 is 0" << endl;
                                return 10 * binary(m/2);
                        }
                }
        }
}

