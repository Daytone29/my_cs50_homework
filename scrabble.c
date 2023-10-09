#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
string LETTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    // Print the winner
    if (score1 == score2)
        puts("Tie!");
    else if (score1 > score2)
        puts("Player 1 wins");
    else if (score1 < score2)
        puts("Player 2 wins");
}

int compute_score(string word)
{
    int counter = 0;
    int i = 0;
    int j = 0;

    while (word[i] != '\0')
    {
        for (j = 0; j <= 26; j++)
        {
            if (word[i] == LETTERS[j] || (word[i] == (LETTERS[j] + 32)))
            {
                counter += POINTS[j];
                break;
            }
        }
        i++;
   }
    return counter;
    // Compute and return score for string
}
