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

(define relprime? (m n)
        (if (> m n)
               (relprimehelper m n n)
               (relprimehelper n m m)))

(define relprimehelper (m n y)
        (if (= 0 (mod n y))
                (if (= y 1)
                        1
                        (if (= (mod m y) 0)
                                0
                                (relprimehelper m n (- y 1))
                        )) (relprimehelper m n (- y 1))))