#include <stdio.h>

// Function to solve Towers of Hanoi
void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }

    // Move n-1 disks from source to auxiliary rod
    hanoi(n - 1, from_rod, aux_rod, to_rod);

    // Move the nth disk to destination rod
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);

    // Move the n-1 disks from auxiliary to destination rod
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    hanoi(n, 'A', 'C', 'B');

    return 0;
}
