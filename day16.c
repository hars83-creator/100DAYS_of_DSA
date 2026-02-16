#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[1000];
    int visited[1000] = {0};   // to track counted elements

    // Read array
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Count frequency
    for(int i = 0; i < n; i++) {
        if(visited[i] == 1)
            continue;

        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d:%d ", a[i], count);
    }

    return 0;
}
