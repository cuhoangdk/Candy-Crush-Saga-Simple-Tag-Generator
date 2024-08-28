#include <stdio.h>

void generateLevels(int m, int n) {
    for (int i = m; i <= n; i++) {
        if (i != m) {
            printf(", ");
        }
        printf("level %d", i);
    }
    printf("\n");
}

int main() {
    int m, n;
    char choice;
	printf("Tag generator for Candy Crush Saga video\n");
	printf("Type level m < level n\n");
    do {
        
        printf("m: ");
        scanf("%d", &m);
        printf("n: ");
        scanf("%d", &n);

        
        generateLevels(m, n);

        
        printf("Continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

