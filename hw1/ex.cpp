#include <cstdlib>
#include <iostream>
using namespace std;

int sigma(int m, int n);

int fib(int m);

int exp(int m, int n);

int log(int m, int n);

int prime(int m);

int main()
{
        //int answer = sigma(1, 3);
        //cout << answer << endl;
        cout << fib(6) << endl;
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
        else {
                return m * exp(m, n-1); 
        }
}

int log(int m, int n)
{
        
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
                

}

