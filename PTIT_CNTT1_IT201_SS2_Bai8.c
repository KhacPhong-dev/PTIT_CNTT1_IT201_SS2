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

    printf("\nCac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nCac phan tu lon hon tat ca cac phan tu dang sau no la:\n");
    for (int i = 0; i < n - 1; i++) {
        int isGreater = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isGreater = 0;
                break;
            }
        }
        if (isGreater) {
            printf("%d ", arr[i]);
        }
    }
    printf("%d", arr[n - 1]);
    return 0;
}
