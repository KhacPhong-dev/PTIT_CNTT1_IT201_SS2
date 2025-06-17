#include <stdio.h>
int main() {
    int n;
    printf("Nhap vao so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d cua mang: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang cua ban la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int pos, value;
    printf("\nNhap vao vi tri muon them phan tu: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Vi tri khong hop le!");
        return 0;
    }

    printf("Nhap vao gia tri muon them: ");
    scanf("%d", &value);

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++;

    printf("Mang sau khi them phan tu la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
