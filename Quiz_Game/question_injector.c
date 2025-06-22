#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 256

int main(){

    char question[MAX] = "";
    char option_1[MAX] = "";
    char option_2[MAX] = "";
    char option_3[MAX] = "";
    char option_4[MAX] = "";
    char answer[MAX] = "";


    FILE *filex = fopen("q.txt","r");

    char line[1000];
    int lineCount = 0;

    while (fgets(line, sizeof(line), filex)) {
        lineCount++;
    }

    int opa = (lineCount/7)+1;

    fclose(filex);


    
    fgets(question, MAX , stdin);
    
    size_t lenx = strlen(question);

    question[lenx - 1] = '\0';

    //

    fgets(option_1, MAX , stdin);
    
    size_t lenx1 = strlen(option_1);

    option_1[lenx1 - 1] = '\0';

    //

    fgets(option_2, MAX , stdin);
    
    size_t lenx2 = strlen(option_2);

    option_2[lenx2 - 1] = '\0';

    //

    fgets(option_3, MAX , stdin);
    
    size_t lenx3 = strlen(option_3);

    option_3[lenx3 - 1] = '\0';

    
    //

    fgets(option_4, MAX , stdin);
    
    size_t len4 = strlen(option_4);

    option_4[len4 - 1] = '\0';


    //


    fgets(answer, MAX , stdin);
    
    size_t len5 = strlen(answer);

    answer[len5 - 1] = '\0';


    //

    FILE *file = fopen("q.txt","a+");

    fprintf(file,"%d\n\
Question: %s \n\
1. %s\n\
2. %s\n\
3. %s\n\
4. %s\n\
%s\n\
" , opa , question , option_1 ,option_2,option_3,option_4,answer );

    fclose(file);
    
    
    return 0;
}