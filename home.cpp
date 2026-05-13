#include <stdio.h>

void printDan(int dan) {
    for (int i = 1; i <= 9; i++) {
        printf("%dx%d=%2d  ", dan, i, dan * i);
    }
    printf("\n");
}

int main() {
for (int dan = 2; dan <= 9; dan++) {
        printf("%d단\t\t", dan);
    }
    printf("\n");

for (int i = 1; i <= 9; i++) {
        for (int dan = 2; dan <= 9; dan++) {
            printf("%dx%d=%2d\t\t", dan, i, dan * i);
        }
        printf("\n");
    }
    return 0;
}
