#include <stdio.h>
#include <time.h>

#define DAYS_IN_MONTH 30 // Assuming an average month length for simplicity
#define LAST_FULL_MOON_DAY 14

int main() {
    time_t t = time(NULL);
    struct tm *now = localtime(&t);
    int current_month = now->tm_mon + 1;
    int current_day = now->tm_mday;
    int current_year = now->tm_year + 1900;

    // Calculate days until next full moon
    int days_since_last_full_moon = current_day - LAST_FULL_MOON_DAY;
    if (days_since_last_full_moon < 0) {
        days_since_last_full_moon += DAYS_IN_MONTH;
        current_month--;
        if (current_month == 0) {
            current_month = 12;
            current_year--;
        }
    }
    int days_until_next_full_moon = DAYS_IN_MONTH - days_since_last_full_moon;

    printf("Current date: %02d/%02d/%04d\n", current_month, current_day, current_year);

    if (days_until_next_full_moon == 0) {
        printf("It's a full moon today!\n");
    } else {
        int next_month = current_month;
        int next_day = LAST_FULL_MOON_DAY + days_until_next_full_moon;
        int next_year = current_year;

        if (next_day > DAYS_IN_MONTH) {
            next_day -= DAYS_IN_MONTH;
            next_month++;
            if (next_month > 12) {
                next_month = 1;
                next_year++;
            }
        }

        printf("Next full moon is on: %02d/%02d/%04d\n", next_month, next_day, next_year);
    }

    return 0;
}
