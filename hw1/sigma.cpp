#include <cstdlib>
#include <iostream>
using namespace std;

int sigma(int m, int n);

int main()
{
        int answer = sigma(2, 5);
        cout << answer << endl;
}

int sigma(int m, int n)
{
        if (m > n) {
                return 0;
        } else {
                return m + sigma(m+1, n);
        }
}
