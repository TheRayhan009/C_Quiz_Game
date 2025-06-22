#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int point = 0;

void greetings()
{
        printf("Welcome to the game\n\n");
        printf("> Press 7 to start the game\n");
        printf("> Press 0 to quit the game\n");
}

void makeDecsn(int i)
{
        if (i == 7)
        {
                printf("The game has been started\n\n");
        }
        else if (i == 0)
        {
                printf("The game has been ended\n\n");
        }
        else
        {
                printf("Invalid\n\n");
        }
}

void AskingQuestion()
{
        int ans;
        int r;
        //
        FILE *file = fopen("q.txt", "r");

        char line[1000];
        int lineCount = 0;

        while (fgets(line, sizeof(line), file))
        {
                lineCount++;
        }

        int opa = lineCount / 7;

        r = rand() % opa + 1;

        fclose(file);

        //

        //     printf("%d",r);

        //

        FILE *file1 = fopen("q.txt", "r");

        char line1[1000];
        char buf[100];
        snprintf(buf, sizeof(buf), "%d", r);
        char myLine[1000] = "";

        int kk = 0;
        bool match = false;

        while (fgets(line1, sizeof(line1), file1))
        {
                line1[strcspn(line1, "\r\n")] = '\0';

                if (!match && strcmp(line1, buf) == 0)
                {
                        // printf("Matched question number: %s\n", buf);
                        match = true;
                }
                else if (match)
                {
                        strcat(myLine, line1);
                        strcat(myLine, "\n");
                        kk++;
                        if (kk > 6)
                                break;
                }
        }
        printf("Your Total Score till now: %d point\n\n", point);

        fclose(file1);

        char *lines[6] = {NULL};
        int count = 0;
        char *tok = strtok(myLine, "\n");
        while (tok && count < 6)
        {
                lines[count++] = tok;
                tok = strtok(NULL, "\n");
        }
        if (count < 6)
        {
                fprintf(stderr, "Invalid format for question %d\n", r);
                return;
        }

        printf("%d) %s\n", r, lines[0]);
        printf(" %s\n", lines[1]);
        printf(" %s\n", lines[2]);
        printf(" %s\n", lines[3]);
        printf(" %s\n", lines[4]);

        printf("Enter your Answer: ");

        if (scanf("%d", &ans) != 1)
        {
                scanf("%*s");
                return;
        }
        int correct = atoi(lines[5]);

        if (ans == correct)
        {
                printf("Correct Answer!\n");
                point += 5;
        }
        else
        {
                printf("Wrong Answer! (Correct: %d)\n", correct);
        }
        printf("Total Score: %d\n\n", point);
}

int main()
{

        while (true)
        {
                int i;
                char a;
                int alrady_asked[5];

                point = 0; // Reset score for each new game

                greetings();
                scanf("%d", &i);
                makeDecsn(i);

                if (i == 7)
                {
                        for (int in = 0; in < 5; in++)
                        {
                                AskingQuestion();
                        }
                }

                printf("Play again or quit?\n");
                printf("Y/N : ");
                scanf(" %c", &a); // Leading space to consume any leftover newline

                if (a == 'y' || a == 'Y')
                {
                        main();
                }
                else
                {
                        break;
                }
        }

        printf("Thanks for playing!\n");
        return 0;
}
