#include <stdio.h>

int main() {
    int score = 0, choice;

    printf("=== Welcome to the Quiz Game ===\n\n");

    // Question 1
    printf("Q1. Who developed the C programming language?\n");
    printf("1. James Gosling\n2. Dennis Ritchie\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Dennis Ritchie.\n\n");
    }

    // Question 2
    printf("Q2. Which of these is a valid C data type?\n");
    printf("1. string\n2. float\n3. boolean\n4. var\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is float.\n\n");
    }

    // Question 3
    printf("Q3. Which symbol is used to end a statement in C?\n");
    printf("1. . (dot)\n2. : (colon)\n3. ; (semicolon)\n4. , (comma)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is ; (semicolon).\n\n");
    }

    // Result
    printf("=== Quiz Over! ===\n");
    printf("Your total score is: %d/3\n", score);

    if (score == 3) {
        printf("Excellent! You got all correct.\n");
    } else if (score == 2) {
        printf("Good! Keep practicing.\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}   