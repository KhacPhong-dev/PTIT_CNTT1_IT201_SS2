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
    printf("mang cua ban la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    int MaxForArr=arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i]<arr[i+1]) {
            MaxForArr=arr[i+1];

        }

    }
    printf("\n");
    printf("phan tu lon nhat cua mang la: %d",MaxForArr);

}