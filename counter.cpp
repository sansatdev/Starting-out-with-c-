#include <iostream>
#include <unistd.h>  // For sleep()

void counter(int n) {
    int hour = n / 3600;
    int min = (n % 3600) / 60;
    int sec = n % 60;

    while (hour > 0 || min > 0 || sec > 0) {
        std::cout << hour << ":" << min << ":" << sec << std::endl;

        // Decrement seconds
        sec--;

        // Adjust minutes and hours
        if (sec < 0) {
            sec = 59;  // Reset seconds
            min--;      // Decrement minutes
        }

        if (min < 0) {
            min = 59;  // Reset minutes
            hour--;    // Decrement hours
        }

        // Pause for 1 second
        sleep(1);
    }

    // Final output when the countdown reaches zero
    std::cout << "0:0:0" << std::endl;
}

int main() {
    int n;
    std::cout << "Enter time in seconds: ";
    std::cin >> n;
    counter(n);
    return 0;
}

