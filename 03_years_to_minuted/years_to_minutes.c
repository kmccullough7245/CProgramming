#include <stdio.h>
int main() {
    int num_of_years;
    int num_of_minutes;
    num_of_years = 0;
    num_of_minutes = 0;
    printf("Enter the number of years. \n");
    scanf("%d", &num_of_years);
    num_of_minutes = num_of_years * 525600;
    printf("The number of minutes in %d years is %d\n.", num_of_years, num_of_minutes);
    return 0;
}