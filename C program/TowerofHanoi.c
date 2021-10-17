// This is a famous tower of hanoi program implemented in c language
// Approach taken is recursive algorithm
// Whenever the disk number is 1 it is moved from source rod to destination rod
// Pattern followed is - 
// 1. Shift n-1 disks from source rod to temp rod
// 2. Shift last disk from source to dest rod
// 3. Shift n-1 disks from temp rod to dest rod.

#include <stdio.h>

void TowerofHanoi(int n, char source, char dest, char temp)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, dest);
        return;
    }
    TowerofHanoi(n - 1, source, temp, dest);
    printf("Move disk %d from %c to %c\n", n, source, dest);
    TowerofHanoi(n - 1, temp, dest, source);
}


int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("\nThe path taken to solve the Tower of Hanoi puzzle is as below: \n");
    TowerofHanoi(n, 'A', 'C', 'B');
    return 0;
}