#include <stdio.h>

int main(void){
    int hh24, mm;
    start:
    printf("Enter the time in 24 hours forum: (ex. 22:10): ");
    scanf("%2d : %2d", &hh24, &mm);
    if(hh24 > 23 || mm > 59){
        printf("Input error! try again!\n");
        goto start;
    }

    if(hh24 == 0)
        printf("Time: %02d:%02d AM\n", 12, mm);
    else if(hh24 <= 12 && hh24 != 0)
        printf("Time: %02d:%02d AM\n", hh24, mm);
    else
        printf("Time: %02d:%02d PM\n", hh24 - 12, mm);

    return 0;
}
