#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[1000];

    // Read array
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Assume first element as max and min
    int max = a[0];
    int min = a[0];

    // Traverse array
    for(int i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    // Output
    printf("Max: %d\n", max);
    printf("Min: %d", min);

    return 0;
}
