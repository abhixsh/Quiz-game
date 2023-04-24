#include <stdio.h>
#include <ctype.h>
#include <conio.h>


int main(){

    char question[][100]={">>>   1. Who is the founder of Microsoft? ",
                          ">>>   2. Who is considered the father of the World Wide Web? ", 
                          ">>>   3. What programming language was developed by James Gosling at Sun Microsystems? "};


    char Options[][100]={"          A. Steve Jobs","          B. Bill Gates" , "          C. Mark Zuckerberg", "          D. Larry Page",
                        "          A. Bill Gates", "          B. Tim Berners-Lee", "          C. Steve Jobs", "          D. Larry Page",
                        "          A. Java", "          B. Python", "          C. Ruby", "          D. C#"};

    char answer[3]={'B','B','A'};

    int numberofquestions=sizeof(question)/sizeof(question[0]);

    char guess;
    int score=0;

    printf("\n\n");
    printf("****************************************************\n");
    printf("           Welcome to the quiz game!\n");
    printf("****************************************************\n\n");

    for(int i=0;i<numberofquestions;i++){
        printf("%s\n",question[i]);
        printf("\n");

        for(int j=(i*4);j < (i*4)+4;j++){
            printf("%s\n",Options[j]);
            printf("\n");
        }

        printf("Enter your answer: ");
        scanf(" %c",&guess);
        printf("\n");

        guess = toupper(guess);

        if (guess == answer[i]){
            printf(">> Correct!\n");
            printf("\n");
            score++;
        }
        else{
            printf("\033[22;31m>> Wrong!\033[0m\n");
            
            printf("\n");
        }

    }
    printf("****************************************************\n");
    printf("Your score is %d out of %d.\n",score,numberofquestions);
    printf("****************************************************\n");
    printf("\n\n");
    return 0;
}