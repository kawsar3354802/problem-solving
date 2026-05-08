#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        long long arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }

        long long sum = 0;
        int count = 0;

        for (int i = n - 1; i >= 0; i--) {
            sum += arr[i];

            if (sum > 0) {
                count++;
            } else {
                sum = 0;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}