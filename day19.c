#include <stdio.h>
#include <stdlib.h>

// compare function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[1000];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Step 1: sort array
    qsort(a, n, sizeof(int), compare);

    int left = 0;
    int right = n - 1;

    int minSum = a[left] + a[right];
    int x = a[left], y = a[right];

    // Step 2: two-pointer search
    while(left < right) {
        int sum = a[left] + a[right];

        if(abs(sum) < abs(minSum)) {
            minSum = sum;
            x = a[left];
            y = a[right];
        }

        if(sum < 0)
            left++;
        else
            right--;
    }

    printf("%d %d", x, y);
    return 0;
}
