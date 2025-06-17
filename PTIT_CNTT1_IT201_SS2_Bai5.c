#include <stdio.h>
int main() {
    //nhap 1 mang
    int n;
    printf("nhap vao so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("nhap vao phan tu thu %d cua mang: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("\nNhap vi tri phan tu muon xoa: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Vi tri khong hop le!");
        return 1;
    }

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
