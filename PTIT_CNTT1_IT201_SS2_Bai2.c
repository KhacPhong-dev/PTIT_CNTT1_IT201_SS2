#include <stdio.h>
int main() {
    int n;
    printf("nhap vao so luong phan tu cua mang:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        printf("nhap vao phan tu thu %d cua mang:",i+1);
        scanf("%d", &arr[i]);
    }
    int x, count = 0;
    printf("nhap vao phan tu can tim: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    printf("so lan xuat hien cua %d trong mang la: %d\n", x, count);
    return 0;
}

