#include <stdio.h>
#include <string.h>

// Function to determine the outcome of Rock, Paper, Scissors game
char* determineOutcome(const char player1[], const char player2[]) {
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) {
        return "Player1";
    }
    else if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) {
        return "Player1";
    }
    else if (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) {
        return "Player1";
    }
    else if (strcmp(player1, player2) == 0) {
        return "Draw";
    }
    else if (strcmp(player2, "Rock") == 0 && strcmp(player1, "Scissors") == 0) {
        return "Player2";
    }
    else if (strcmp(player2, "Scissors") == 0 && strcmp(player1, "Paper") == 0) {
        return "Player2";
    }
    else if (strcmp(player2, "Paper") == 0 && strcmp(player1, "Rock") == 0) {
        return "Player2";
    }
    else {
        return "Invalid";
    }
}

// Testing the determineOutcome function
int main() {
    // Test case 1: Player1 wins with Rock vs. Scissors
    char result1[] = "Rock";
    char result2[] = "Scissors";
    char* outcome = determineOutcome(result1, result2);
    printf("Outcome: %s\n", outcome); // Expected output: Player1

    // Test case 2: Player2 wins with Paper vs. Rock
    char result3[] = "Rock";
    char result4[] = "Paper";
    outcome = determineOutcome(result3, result4);
    printf("Outcome: %s\n", outcome); // Expected output: Player2

    // Test case 3: It's a draw with both players choosing Rock
    char result5[] = "Rock";
    char result6[] = "Rock";
    outcome = determineOutcome(result5, result6);
    printf("Outcome: %s\n", outcome); // Expected output: Draw

    // Test case 4: Invalid input with Player1 choosing "Rock" and Player2 choosing "InvalidChoice"
    char result7[] = "Rock";
    char result8[] = "InvalidChoice";
    outcome = determineOutcome(result7, result8);
    printf("Outcome: %s\n", outcome); // Expected output: Invalid

    return 0;
}