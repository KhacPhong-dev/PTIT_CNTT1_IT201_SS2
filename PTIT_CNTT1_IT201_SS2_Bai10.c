#include <stdio.h>
int main() {
    int n;
    printf("nhap vao so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("nhap vao phan tu thu %d cua mang: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int used[n];
    int usedCount = 0;

    for (int i = 0; i < n; i++) {
        int current = arr[i];
        int isUsed = 0;

        for (int k = 0; k < usedCount; k++) {
            if (used[k] == current) {
                isUsed = 1;
                break;
            }
        }

        if (!isUsed) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] == current) {
                    count++;
                }
            }
            printf("Phan tu %d xuat hien %d lan\n", current, count);
            used[usedCount++] = current;
        }
    }

    return 0;
}
