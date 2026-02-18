#include <stdio.h>

void reverse(int a[], int start, int end) {
    while(start < end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int a[1000];

    // Read array
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int k;
    scanf("%d", &k);

    k = k % n;   // handle large k

    // Step 1: reverse whole array
    reverse(a, 0, n - 1);

    // Step 2: reverse first k elements
    reverse(a, 0, k - 1);

    // Step 3: reverse remaining elements
    reverse(a, k, n - 1);

    // Print rotated array
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
