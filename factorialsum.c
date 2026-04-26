 /*beecrowd | 1161
Factorial Sum
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1*/
#include <stdio.h>

int main() {
    long long int m, n;

    while(scanf("%lld %lld", &m, &n) != EOF) {
        long long int fact1 = 1, fact2 = 1;

        for(int i = 1; i <= m; i++) {
            fact1 *= i;
        }

        for(int i = 1; i <= n; i++) {
            fact2 *= i;
        }

        printf("%lld\n", fact1 + fact2);
    }

    return 0;
}