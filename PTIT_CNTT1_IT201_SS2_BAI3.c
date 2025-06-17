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

    printf("mang truoc khi dao nguoc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("\nmang sau khi dao nguoc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
