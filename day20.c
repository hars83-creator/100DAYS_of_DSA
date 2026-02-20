#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[1000];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;
    int prefix = 0;

    // Frequency array for prefix sums
    // range adjusted for safety
    int freq[20001] = {0};   // supports sums from -10000 to +10000
    int offset = 10000;      // to avoid negative index

    // prefix sum 0 already exists once
    freq[offset] = 1;

    for(int i = 0; i < n; i++) {
        prefix += a[i];

        // If this prefix seen before, add its frequency
        count += freq[prefix + offset];

        // Increase frequency
        freq[prefix + offset]++;
    }

    printf("%d", count);
    return 0;
}
