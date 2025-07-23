#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int min = 0, max = 0, i, arr[n];
    for (i = 0; i < n; i++) {
        int ele;
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter sort order (a for ascending, d for descending): ");
    char state=getch();
    printf("\n");
    int j, temp;

    switch (state) {
        case 'a':
            for (i = 0; i < n; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            break;
        case 'd':
            for (i = 0; i < n; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (arr[j] < arr[j + 1]) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            break;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;

}

