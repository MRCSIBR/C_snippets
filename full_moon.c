#include <stdio.h>
#include <time.h>
#include <math.h>

#define DAYS_UNTIL_NEXT_FULL_MOON 14

int main() {
    time_t t = time(NULL);
    struct tm *now = localtime(&t);
    int current_month = now->tm_mon + 1;
    int current_day = now->tm_mday;
    double days_until_next_full_moon = DAYS_UNTIL_NEXT_FULL_MOON - fmod(now->tm_mday, DAYS_UNTIL_NEXT_FULL_MOON);
    int full_moons_passed = (int)days_until_next_full_moon / DAYS_UNTIL_NEXT_FULL_MOON;
    int current_year = now->tm_year + 1900;

    printf("Current date: %02d/%02d/%04d\n", current_month, current_day, current_year);

    if (days_until_next_full_moon < 0) {
        printf("Next full moon has already passed.\n");
    } else {
        int next_month = (current_month + full_moons_passed) % 12;
        int next_day = DAYS_UNTIL_NEXT_FULL_MOON - (int)days_until_next_full_moon;
        int next_year = current_year;

        if (next_month == 0) {
            next_month = 12;
            next_year++;
        }

        printf("Next full moon is on: %02d/%02d/%04d\n", next_month, next_day, next_year);
    }

    return 0;
}
