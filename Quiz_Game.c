#include<stdio.h>
#include<conio.h>
int point;
int greetings(){
        printf("Welcome to the game\n\n");
        printf("> Press 7 to start the game\n");
        printf("> Press 0 to quit the game\n");
        return 0;

        
}
int makeDecsn(int i){
        if(i == 7){
                printf("The game has been started\n\n");
        }else if(i == 0){
                printf("The game has been ended\n\n");
        }else{
                printf("Invalid\n\n");
        }
        return 0;
}

int firstQuestion(int i,int ans){
        if(i == 7){
                printf("1) Which one is the first search engine ever?\n\n\
1) Google\n\
2) Archie\n\
3) Wais\n\
4) Altavista\n\
Enter your Answer:");
                scanf("%d", &ans);
                if(ans == 2){
                        printf("Correct Answer\n");
                        point = 5;
                        printf("You have scored 5 point\n");
                        printf("Your Total Score till now %d point\n", point);
                }else{
                        printf("Wrong Answer\n");
                        printf("You have scored 0 point\n");
                        printf("Your Total Score till now %d point\n", point);
                }
        }
        return 0;
}
int secondQuestion(int i,int ans){
        if(i == 7){
                printf("2) Which one is the first browser invented in 1990?\n\n\
1) Internet explorer\n\
2) Chrome\n\
3) Mozilla\n\
4) Nexus\n\
Enter your Answer:");
                scanf("%d", &ans);
                if(ans == 4){
                        printf("Correct Answer\n");
                        point += 5;
                        printf("You have scored 5 point\n");
                        printf("Your Total Score till now %d point\n", point);
                }else{
                        printf("Wrong Answer\n");
                        printf("You have scored 0 point\n");
                        printf("Your Total Score till now %d point\n", point);
                }
        }
}
int thirdQuestion(int i,int ans){
        if(i == 7){
                printf("3) First computer virus is known as___\n\n\
1) Rabbit\n\
2) Creeper Virus\n\
3) Elk Cloner\n\
4) SCA Virus\n\
Enter your Answer:");
                scanf("%d", &ans);
                if(ans == 2){
                        printf("Correct Answer\n");
                        point += 5;
                        printf("You have scored 5 point\n");
                        printf("Your Total Score till now %d point\n", point);
                }else{
                        printf("Wrong Answer\n");
                        printf("You have scored 0 point\n");
                        printf("Your Total Score till now %d point\n", point);
                }
        }
}
int fourthQuestion(int i,int ans){
        if(i == 7){
                printf("4) Firewall in computer is used for___\n\n\
1) Security\n\
2) Data Transmission\n\
3) Monitoring\n\
4) Authentication\n\
Enter your Answer:");
                scanf("%d", &ans);
                if(ans == 1){
                        printf("Correct Answer\n");
                        point += 5;
                        printf("You have scored 5 point\n");
                        printf("Your Total Score till now %d point\n", point);
                }else{
                        printf("Wrong Answer\n");
                        printf("You have scored 0 point\n");
                        printf("Your Total Score till now %d point\n", point);
                }
        }
}
int fifthQuestion(int i,int ans){
        if(i == 7){
                printf("5) Which of the following is not database Management Software?\n\n\
1) MySQL\n\
2) Oracle\n\
3) Cobol\n\
4) Sybase\n\
Enter your Answer:");
                scanf("%d", &ans);
                if(ans == 3){
                        printf("Correct Answer\n");
                        point += 5;
                        printf("You have scored 5 point\n");
                        printf("Your Total Score till now %d point\n", point);
                }else{
                        printf("Wrong Answer\n");
                        printf("You have scored 0 point\n");
                        printf("Your Total Score till now %d point\n", point);
                }
        }
}

int main() {
    int playAgain = 1;
    while (playAgain) {
        int i, ans;
        char a;

        greetings();
        scanf("%d", &i);
        
        makeDecsn(i);
        firstQuestion(i, ans);
        secondQuestion(i, ans);
        thirdQuestion(i, ans);
        fourthQuestion(i, ans);
        fifthQuestion(i, ans);
        
        printf("Play again or quit?\n");
        printf("Y/N : ");
        scanf(" %c", &a);

        if (a == 'y' || a == 'Y') {
            playAgain = 1;
        } else {
            playAgain = 0;
        }
    }

    printf("Thanks for playing!\n");
    getch();
    return 0;
}

