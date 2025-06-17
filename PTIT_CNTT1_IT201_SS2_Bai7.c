#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    printf("nhap vao so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("nhap vao phan tu thu %d cua mang: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int target;
    printf("\nNhap vao mot so nguyen: ");
    scanf("%d", &target);
    bool result = false;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target && i!=j) {
                result=true;
            }
        }
    }
    if (result) {
        printf("\nCac cap so co tong bang %d la:\n", target);
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == target && i!=j) {
                    printf("%d va %d\n", arr[i], arr[j]);
                }
            }
        }

    }else {
        printf("no Found");
    }


    return 0;
}
