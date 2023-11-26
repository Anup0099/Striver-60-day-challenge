#include <stdio.h>
#include <string.h>

int combination(char arr[], int n) {
    int count = 0;
    char s[3] = {0};

    for (int i = 0; i < n; i++) {
        s[0] = arr[i];
        for (int j = i + 1; j < n; j++) {
            s[1] = arr[j];
            if (s[0] != arr[j]) {
                for (int k = j + 1; k < n; k++) {
                    if (s[1] != arr[k]) {
                        count++;
                    }
                }
            }
            s[0] = arr[i];
        }
    }

    return count;
}

int main() {
    char ashok[100], anand[100];
    scanf("%s %s", ashok, anand);

    int count_as = combination(ashok, strlen(ashok));
    int count_an = combination(anand, strlen(anand));

    if (count_as == 0 || count_an == 0) {
        printf("Invalid input\n");
    } else if (count_as > count_an) {
        printf("Ashok\n");
    } else if (count_an > count_as) {
        printf("Anand\n");
    } else {
        printf("Draw\n");
    }

    return 0;
}