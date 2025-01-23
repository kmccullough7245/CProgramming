// The code converts the given number of seconds to HMS.
// 65 seconds -> 0 hours 1 minute 05 seconds
#include <stdio.h>
int main () {
    int seconds = 0;
    int hours =0;
    int minutes = 0;
    int remaining_seconds = 0;
    // Get number of seconds
    puts("Enter the number of seconds.");
    scanf("%d", &seconds);
    // Calculate number of hrs
    hours = seconds / 3600;
    // calculate number of min
    minutes = (seconds - (hours * 3600)) / 60;
    // calculate remaining number of s
    remaining_seconds = seconds% 60;
    printf("%d seconds is %d hours, %d minutes, and %d seconds\n", seconds, hours, minutes, remaining_seconds);
    return 0;
}