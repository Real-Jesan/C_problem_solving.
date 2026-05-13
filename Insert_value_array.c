#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n + 1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int index, value;

    // This loop handles the input AND the validation
    while (1) {
        printf("Enter index (0 to %d) and value: ", n);
        scanf("%d %d", &index, &value);

        if (index >= 0 && index <= n) {
            break; // Valid input, exit the loop
        } else {
            printf("Error: Index %d is out of range. Try again.\n", index);
        }
    }

    // Shifting logic
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;

    // Printing the final array
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
