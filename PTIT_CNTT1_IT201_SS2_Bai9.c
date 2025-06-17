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

    int maxCount = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("\nPhan tu xuat hien nhieu nhat la: %d", maxElement);
    printf("\nSo lan xuat hien: %d", maxCount);

    return 0;
}


