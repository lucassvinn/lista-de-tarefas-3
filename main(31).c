#include <stdio.h>

int main() {
    int tempo_sec;
    int sec_min, sec_hor;
    scanf("%d", &tempo_sec);

    sec_min = tempo_sec / 60;
    printf("Tempo(s) em min: %d\n", sec_min);

    sec_hor = tempo_sec / 3600;
    printf("Tempo(s) em hora: %d\n", sec_hor);


    return 0;
}
