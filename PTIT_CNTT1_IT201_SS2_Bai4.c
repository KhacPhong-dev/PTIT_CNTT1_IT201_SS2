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
    int pos, newValue;
    printf("position: ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("vi tri khong hop le!");
        return 1;
    }

    printf("value: ");
    scanf("%d", &newValue);

    arr[pos - 1] = newValue;

    printf("mang sau khi sua: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
