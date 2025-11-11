#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to simulate rolling one 6-sided die
int roll_one_die() {
    return (rand() % 6) + 1;  // Returns a number between 1 and 6
}

int main() {
    int rolls = 1000000;             // Number of dice roll simulations
    int counts[13] = {0};            // Array to store counts for sums 2-12; indexes 0-1 unused
    int i, die1, die2, sum;

    srand(time(NULL));               // Seed random number generator once

    // Simulate rolling two dice 'rolls' times
    for (i = 0; i < rolls; i++) {
        die1 = roll_one_die();
        die2 = roll_one_die();
        sum = die1 + die2;
        counts[sum]++;               // Increment count of this sum
    }

    // Print header for summary table
    printf("Sum\tCount\t\tSimulated %%\tTheoretical %%\n");
    printf("-------------------------------------------------\n");

    // Analyze each possible sum from 2 to 12
    for (sum = 2; sum <= 12; sum++) {
        int ways = 0;
        // Calculate theoretical ways to get 'sum' with two dice
        for (int d1 = 1; d1 <= 6; d1++) {
            for (int d2 = 1; d2 <= 6; d2++) {
                if (d1 + d2 == sum) ways++;
            }
        }
        double theoretical = (ways / 36.0) * 100;                 // Theoretical probability
        double simulated = (counts[sum] / (double)rolls) * 100;  // Simulated probability

        // Print result for this sum with formatting
        printf("%2d\t%7d\t%10.2f\t%13.2f\n", sum, counts[sum], simulated, theoretical);
    }

    return 0;
}

