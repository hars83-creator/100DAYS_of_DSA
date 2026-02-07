#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int k = 0;  // index for next non-zero position

    // Move non-zero elements forward
    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            nums[k++] = nums[i];
        }
    }

    // Fill remaining positions with zero
    while(k < n) {
        nums[k++] = 0;
    }

    // Print result
    for(int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}