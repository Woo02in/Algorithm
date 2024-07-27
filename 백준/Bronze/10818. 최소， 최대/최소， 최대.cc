#include <stdio.h>

int main() {

    int N;
    int min = 1000001;
    int max = -1000001;
    int T = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {

        scanf("%d", &T);

        if (T < min) {
            min = T;
        }

        if (T > max) {
            max = T;
        }
    }

    printf("%d %d", min, max);

}