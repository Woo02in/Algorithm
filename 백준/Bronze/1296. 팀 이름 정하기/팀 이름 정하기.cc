#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<algorithm>

void countLoveCharacter(char name[], int love[4]) {
    for (int i = 0; name[i] != 0; i++) {
        if (name[i] == 'L') {
            love[0]++;
            continue;
        }
        if (name[i] == 'O') {
            love[1]++;
            continue;
        }
        if (name[i] == 'V') {
            love[2]++;
            continue;
        }
        if (name[i] == 'E') {
            love[3]++;
            continue;
        }
    }
}

int main(void) {
    char name[21], team[21], answer[21];
    int n;
    int love[4] = { 0 }; 
    scanf("%s", &name);
    scanf("%d", &n);
    countLoveCharacter(name, love); 
    int max = -1;
    while (n--) {
        scanf("%s", &team);
        int love2[4] = { 0 }; 
        countLoveCharacter(team, love2); 
        love2[0] += love[0];
        love2[1] += love[1];
        love2[2] += love[2];
        love2[3] += love[3];
        int percentage = 1; 
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 4; j++) {
                percentage *= (love2[i] + love2[j]);
            }
        }
        percentage %= 100;
        if (percentage > max) { 
            max = percentage;
            strcpy(answer, team); 
        }
        else if (percentage == max) { 
            if (strcmp(answer, team) > 0) {
                strcpy(answer, team); 
            }
        }
    }
    printf("%s", answer);
}