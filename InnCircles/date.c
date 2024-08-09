#include <stdio.h>
#include <time.h>
int calculateDayDifference(int day1, int month1, int year1, int day2, int month2, int year2) {
    struct tm date1 = {0}, date2 = {0};
    time_t time1, time2;
    double difference;

    date1.tm_mday = day1;
    date1.tm_mon = month1 - 1;  
    date1.tm_year = year1 - 1900;  

    date2.tm_mday = day2;
    date2.tm_mon = month2 - 1;
    date2.tm_year = year2 - 1900;

    time1 = mktime(&date1);
    time2 = mktime(&date2);

    difference = difftime(time2, time1) / (60 * 60 * 24);
    return (int)difference;
}

int main() {
    int day1, month1, year1;
    int day2, month2, year2;
    
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &day1, &month1, &year1);
    
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &day2, &month2, &year2);
    
    int dayDifference = calculateDayDifference(day1, month1, year1, day2, month2, year2);
    
    printf("The number of days between the two dates is: %d\n", dayDifference);

    return 0;
}
