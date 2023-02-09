#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
#include<Windows.h>

void color(int bg,int ft);
void loading();
char finalAnswer(char ans, int n);
void askPlayer();
void askPlayer1();
void askPlayer2();
char question1();
char question2();
char question3();
char question4();
char question5();
char question6();
char question7();
char question8();
char question9();
char question10();
char question11();
char question12();
char question13();
char question14();
char question15();
void end();

int money=0;
int x=0;
char player[20];

int main(){

	char ans;

    if(x==0){
    loading();
    x=1;
	}
    if(x==1){
    system("cls");
    color(11,0);printf("\n\n\n\t WHAT IS YOUR NAME?  ");
    printf("\n\n\t TYPE HERE: ");
    color(11,1);scanf("%s", player);
    }
    x=2;
    system("cls");
	color(11,0);printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tHi ");
	color(11,1);printf("%s,",player);
	color(11,0);printf(" Welcome to\n");
	color(11,5);printf("\t\t\t\t\t**Who Wants to be a Millionaire**\n");
	color(11,0);printf("\t\t\t\t\t\tCodeChum: Edition\n\n");
	color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t     Press ");
    color(11,2);printf("[Any Key] ");
    color(11,0);printf("to Proceed");
    getch();

    system("cls");
	color(11,0);printf("\n\n\t\t\t\t\t\t    INTRODUCTION");
	printf("\n\n\n\t\t\t There are 15 questions in total, and each question is worth a specific");
	printf("\n\n\t\t\t       amount of money and no time limit is placed on contestants.");
	printf("\n\n\t\t\t        For every 4th question (4th,8th,12th,14th) The game will");
	printf("\n\n\t\t        ask you if you want to proceed or go home with the money you accumulated.");

	printf("\n\n\n\t\t\t\t     For every correct answer, you will gain $100.");
	printf("\n\n\t\t\t\t  The reward will increase as you play the game from");
	printf("\n\n\t\t\t\t\t\t $100 to $1,000,000!");
    color(11,0);printf("\n\n\n\n\n\n\n\n\t\t\t\t\t     Press ");
    color(11,2);printf("[Any Key] ");
    color(11,0);printf("to Proceed");
    getch();

    system("cls");
    color(11,0);printf("\n\t\tHOW TO PLAY **Who wants to be a Millionaire**\n");
    color(11,0);printf("\n\t\tINTRUCTIONS!!!");
    printf("\n\n\t\t  [1] Type the letter of your answer, capital or small letter.");
    printf("\n\t\t\tExample: ");
    printf("\n\t\t\t> Answer: A (CORRECT WAY)");
    printf("\n\t\t\t> Answer: AB. (WRONG WAY)");
    printf("\n\n\t\t  [2] Press Enter key to proceed.");
    printf("\n\n\t\t  [3] Confirm your answer by typing [Y/N].");
    printf("\n\t\t\tExample: ");
    printf("\n\t\t\t> Final Answer [Y/N]?: Y (CORRECT WAY)");
    printf("\n\t\t\t> Final Answer [Y/N]?: yes. (WRONG WAY)");
    printf("\n\n\t\t  [4] If you type N, choose your answer again.");
    printf("\n\n\t\t  [5] Press Enter key to finalize your answer.");
    printf("\n\n\t\t\t  GOODLUCK and HAVE FUN! We hope you become a Millionaire!!!");
    color(11,0);printf("\n\n\n\n\t\t\t\t\t      Press ");
    color(11,2);printf("[Any Key] ");
    color(11,0);printf("to Play");
    color(11,0);printf("\n\n\t\t\t\t\t      Press ");
    color(11,4);printf("[Esc Key] ");
    color(11,0);printf("to Quit");

    if(getch()==27){
        system("cls");
        color(11,1);printf("\n\n\n\n\n\n\n\n\t\t\t\t\t THANK YOU FOR USING OUR PROGRAM! \n\n\n\n\n\n\n\n\n\n\n\n\n");
        color(11,0);exit(0);
    }

    system("cls");
    // question 1
	ans = question1();

    switch (toupper(ans)){
        case'A':
            money = 100;
            printf("\n\tA IS THE RIGHT ANSWER!");
            printf("\tYOU EARNED $100!");
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();
        break;

		case'B':
            printf("\n\tB is wrong answer sorry ");
            askPlayer2();
        break;

		case'C':
            printf("\n\tC is wrong answer sorry ");
            askPlayer2();
        break;

		case'D':
            printf("\n\tD is wrong answer sorry ");
            askPlayer2();
        break;
	}

	// question 2
	ans = question2();

    switch (toupper(ans)){
        case'A':
            printf("\n\tA is wrong answer sorry ");
            askPlayer2();
        break;

		case'B':
		    money = 200;
            printf("\n\tB IS THE RIGHT ANSWER!");
            printf("\tYOU EARNED $200!");
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();
        break;

		case'C':
            printf("\n\tC is wrong answer sorry ");
            askPlayer2();
        break;

		case'D':
            printf("\n\tD is wrong answer sorry ");
            askPlayer2();
        break;
	}

    // question 3
    ans = question3();

    switch (toupper(ans)){
        case'A':
            printf("\n\tA is wrong answer sorry ");
            askPlayer2();
        break;

		case'B':
            printf("\n\tB is wrong answer sorry ");
            askPlayer2();
        break;

		case'C':
            printf("\n\tC is wrong answer sorry ");
            askPlayer2();
        break;

		case'D':
		    money = 300;
            printf("\n\tD IS THE RIGHT ANSWER!");
            printf("\tYOU EARNED $300!");
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();
        break;
    }

    // question 4
    ans = question4();

    switch (toupper(ans)){
        case'A':
            printf("\n\tA is wrong answer sorry ");
            askPlayer2();
        break;

		case'B':
            printf("\n\tB is wrong answer sorry ");
            askPlayer2();
        break;

		case'C':
            printf("\n\tC is wrong answer sorry ");
            askPlayer2();
        break;

		case'D':
		    money = 500;
            printf("\n\tD IS THE RIGHT ANSWER!");
            printf("\tYOU EARNED $500!");
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();
        break;
    }

    askPlayer();

    // question 5
    ans = question5();

    switch (toupper(ans)){
        case'A':
            printf("\n\tA is wrong answer sorry ");
            askPlayer2();
        break;

		case'B':
            printf("\n\tB is wrong answer sorry ");
            askPlayer2();
        break;

		case'C':
            printf("\n\tC is wrong answer sorry ");
            askPlayer2();
        break;

		case'D':
		    money = 1000;
            printf("\n\tD IS THE RIGHT ANSWER!");
            printf("\tYOU EARNED $1,000!");
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();
        break;

    }

    // question 6
    ans = question6();

    switch (toupper(ans)){
        case'A':
            money = 2000;
            printf("\n\tA IS THE RIGHT ANSWER!");
            printf("\tYOU EARNED $2,000!");
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();
        break;

		case'B':
            printf("\n\tB is wrong answer sorry ");
            askPlayer2();
        break;

		case'C':
            printf("\n\tC is wrong answer sorry ");
            askPlayer2();
        break;

		case'D':
            printf("\n\tD is wrong answer sorry ");
            askPlayer2();
        break;
    }

    // question 7
    ans = question7();

    switch (toupper(ans)){
        case'A':
            money = 4000;
            printf("\n\tA IS THE RIGHT ANSWER!");
            printf("\tYOU EARNED $4,000!");
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();
        break;

		case'B':
            printf("\n\tB is wrong answer sorry ");
            askPlayer2();
        break;

		case'C':
            printf("\n\tC is wrong answer sorry ");
            askPlayer2();
        break;

		case'D':
            printf("\n\tD is wrong answer sorry ");
            askPlayer2();
        break;
    }

     // question 8
    ans = question8();

    switch (toupper(ans)){
        case'A':
            printf("\n\tA is wrong answer sorry ");
            askPlayer2();
        break;

		case'B':
            printf("\n\tB is wrong answer sorry ");
            askPlayer2();
        break;

		case'C':
            printf("\n\tC is wrong answer sorry ");
            askPlayer2();
        break;

		case'D':
            money = 8000;
            printf("\n\tD IS THE RIGHT ANSWER!");
            printf("\tYOU EARNED $8,000!");
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();
        break;
    }

    askPlayer();

    // question 9
    ans = question9();

    switch (toupper(ans)){
        case'A':
            money = 16000;
            printf("\n\tA IS THE RIGHT ANSWER!");
            printf("\tYOU EARNED $16,000!");
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();
        break;

		case'B':
            printf("\n\tB is wrong answer sorry ");
            askPlayer2();
        break;

		case'C':
            printf("\n\tC is wrong answer sorry ");
            askPlayer2();
        break;

		case'D':
            printf("\n\tD is wrong answer sorry ");
            askPlayer2();
        break;
    }

    // question 10
    ans = question10();

    switch (toupper(ans)){
        case'A':
            money = 32000;
            printf("\n\tA IS THE RIGHT ANSWER!");
            printf("\tYOU EARNED $32,000!");
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();
        break;

		case'B':
            printf("\n\tB is wrong answer sorry ");
            askPlayer2();
        break;

		case'C':
            printf("\n\tC is wrong answer sorry ");
            askPlayer2();
        break;

		case'D':
            printf("\n\tD is wrong answer sorry ");
            askPlayer2();
        break;
    }

    // question 11
    ans = question11();

    switch (toupper(ans)){
        case'A':
            money = 64000;
            printf("\n\tA IS THE RIGHT ANSWER!");
            printf("\tYOU EARNED $64,000!");
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();
        break;

		case'B':
            printf("\n\tB is wrong answer sorry ");
            askPlayer2();
        break;

		case'C':
            printf("\n\tC is wrong answer sorry ");
            askPlayer2();
        break;

		case'D':
            printf("\n\tD is wrong answer sorry ");
            askPlayer2();
        break;
    }
    // question 12
    ans = question12();

    switch (toupper(ans)){
        case'A':
            printf("\n\tA is wrong answer sorry ");
            askPlayer2();
        break;

		case'B':
            money = 125000;
            printf("\n\tB IS THE RIGHT ANSWER!");
            printf("\tYOU EARNED $125,000!");
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();
        break;

		case'C':
            printf("\n\tC is wrong answer sorry ");
            askPlayer2();
        break;

		case'D':
            printf("\n\tD is wrong answer sorry ");
            askPlayer2();
        break;
    }

    askPlayer();

    // question 13
    ans = question13();

    switch (toupper(ans)){
        case'A':
            printf("\n\tA is wrong answer sorry ");
            askPlayer2();
        break;

		case'B':
            printf("\n\tB is wrong answer sorry ");
            askPlayer2();
        break;

		case'C':
            money = 250000;
            printf("\n\tC IS THE RIGHT ANSWER!");
            printf("\tYOU EARNED $250,000!");
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();
        break;

		case'D':
            printf("\n\tD is wrong answer sorry ");
            askPlayer2();
        break;
    }

    // question 14
    ans = question14();

    switch (toupper(ans)){
        case'A':
            printf("\n\tA is wrong answer sorry ");
            askPlayer2();
        break;

		case'B':
            money = 500000;
            printf("\n\tB IS THE RIGHT ANSWER!");
            printf("\tYOU EARNED $500,000!");
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();
        break;

		case'C':
            printf("\n\tC is wrong answer sorry ");
            askPlayer2();
        break;

		case'D':
            printf("\n\tD is wrong answer sorry ");
            askPlayer2();
        break;
    }

    askPlayer1();

    // question 15
    ans = question15();

    switch (toupper(ans)){
        case'A':
            printf("\n\tA is wrong answer sorry ");
            askPlayer2();
        break;

		case'B':
            printf("\n\tB is wrong answer sorry ");
            askPlayer2();
        break;

		case'C':
            money = 1000000;
            color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tPress ");
            color(11,2);printf("[any key]");
            color(11,0);printf(" to continue");
            getch();

        system("cls");
            color(11,0);printf("\n\n\n\n\n\tCongratulations,");
            color(11,1);printf(" %s",player);
            color(11,0);printf("! You're finally a ");
            color(11,6);printf("MILLIONAIRE");
            color(11,0);printf("\n\n\tYour Total Prize is ");
            color(11,6);printf(" $%d",money);
            color(11,0);printf("\n\n\n\n");
            askPlayer2();
        break;

		case'D':
            printf("\n\tD is wrong answer sorry ");
            askPlayer2();
        break;
    }

}

void color(int bg,int ft){
//[0] - black [1] - Dark Blue [2] - Dark Green [3] - Light Blue [4] - Red [5] - Violet
//[6] - Gold [7] - Murky white [8] - Gray [9] - Indigo [10] - Light Green
//[11] - Ice Blue //[12] - Pink //[13] - Purple //[14] - Yellow //[15] - WHITE WHITE

   int colors=16*bg+ft;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),colors);
}

void loading(){
int i;
system("COLOR B0");

	for(i=0; i<=100; i++){
      printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  LOADING %d %c",i,'%');
      Sleep(5);
      system("cls");
    }
    color(11,2);printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t LOADING COMPLETE");
    color(11,0);printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t      Press ");
    color(11,2);printf("[Any Key] ");
    color(11,0);printf("to Start");
    color(11,0);printf("\n\n\t\t\t\t\t      Press ");
    color(11,4);printf("[Esc Key] ");
    color(11,0);printf("to Exit");

    if(getch()==27){
        system("cls");
        color(11,1);printf("\n\n\n\n\n\n\n\n\t\t\t\t\t THANK YOU FOR USING OUR PROGRAM! \n\n\n\n\n\n\n\n\n\n\n\n\n");
        color(11,0);exit(0);
    }

}

char finalAnswer(char ans,int n){
    char finAns;
    printf("\nFinal Answer [Y/N]?: ");
	scanf("%s",&finAns);

	if(finAns == 'n' ||  finAns == 'N'){
		printf("Rethink Your Answer...");
		getch();
		if(n==1){
		ans = question1();
		}else if(n==2){
		ans = question2();
		}else if(n==3){
		ans = question3();
		}else if(n==4){
		ans = question4();
		}else if(n==5){
		ans = question5();
		}else if(n==6){
		ans = question6();
		}else if(n==7){
		ans = question7();
		}else if(n==8){
		ans = question8();
		}else if(n==9){
		ans = question9();
		}else if(n==10){
		ans = question10();
		}else if(n==11){
		ans = question11();
		}else if(n==12){
		ans = question12();
		}else if(n==13){
		ans = question13();
		}else if(n==14){
		ans = question14();
		}else if(n==15){
        ans = question15();
		}
		return ans;
	}
	return ans;
}

void askPlayer(){
    char answer;
    system("cls");

    printf("\nYou already earned $%d",money);
    printf("\n\nDo you still want to play? [Y/N]\n\n(You can either continue the game or leave with $%d)",money);
    printf("\n\n[Y] Continue to play");
    printf("\n[N] Get the $%d",money);
    printf("\n\nAnswer: ");


    scanf("%s",&answer);
    if(answer == 'N'|| answer == 'n'){
        system("cls");
        color(11,0);printf("\n\tCongratulations,");
        color(11,1);printf(" %s!",player);
        color(11,0);printf(" You earned");
        color(11,6);printf(" $%d",money);
        /*end();*/
        askPlayer2();
    }
}

void askPlayer1(){
    char answer;
    system("cls");

    printf("\nYou already earned ");
    color(11,6);printf("$%d",money);
    color(11,0);printf("\n\nDo you still want to play [Y/N]? For a ");
    color(11,6);printf("MILLION DOLLAR");
    color(11,0);printf(" Question");
    color(11,0);printf("\n\n(You can either continue the game or leave with $%d)",money);
    printf("\n\n[Y] Continue to play");
    printf("\n[N] Get the $%d",money);
    printf("\n\nAnswer: ");

    scanf("%s",&answer);
    if(answer == 'N'|| answer == 'n'){
        system("cls");
        color(11,0);printf("\n\tCongratulations on reaching question 14,");
        color(11,1);printf(" %s!",player);
        color(11,0);printf(" Your total prize is");
        color(11,6);printf(" $%d",money);
        /*end();*/
        askPlayer2();
    }
}

void askPlayer2(){
    char answer;
    char player;

    color(11,0);printf("\n\nDo you want to play again [Y/N]?");
    printf("\nAnswer: ");
    scanf("%s",&answer);
    if(answer == 'Y'|| answer == 'y'){
        color(11,0);printf("\n\nWho will play? ");
        printf("\n [1] Same Player \n [2] New Player \n Answer: ");
        scanf("%s",&player);
        if(player == '2'){
            x=1;
        }
        main();
    } else if(answer == 'N'|| answer == 'n'){
        system("cls");
        end();
    }
}

char question1(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    printf("\n\nYour First Question for $100 Is\n\n");

	printf("It is a symbol that represents arithmetic operations and data manipulations in a flowchart?\n");
	printf("\tA. Rectangle\tB. Trapezoid\n \tC. Arrow \tD. Diamond\n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,1);
	return answer;
}

char question2(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    printf("\n\nThis question is worth $200!");

	printf("\n\nThis is the process of diagnosing and fixing errors in our code\n");
	printf("\tA. Troubleshooting\tB. Debugging \n \tC. Debugger \t\tD. Webfix \n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,2);
	return answer;
}

char question3(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    printf("\n\nThis question is worth $300!");

    printf("\n\nOn what operating system does C run on?\n");
	printf("\tA. MacOS\tB. Windows OS \n \tC. Linux OS \tD. Any \n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,3);
	return answer;

}

char question4(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    printf("\n\nThis question is worth $500!");

    printf("\n\nWho developed C?\n");
	printf("\tA. Dennis Ruth\t B. Dennis Leary \n \tC. Dennis Rodman D. Dennis Ritchie \n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,4);
	return answer;
}

char question5(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    printf("\n\nThis question is worth $1,000!");

    printf("\n\nWhat punctuation is used to house program execution in C?\n");
	printf("\tA. []\t B. <> \n \tC. () \t D. {} \n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,5);
	return answer;

}

char question6(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    printf("\n\nThis question is worth $2,000!");

    printf("\n\nWhat punctuation is very important in ending any statement in C?\n");
	printf("\tA. ;\t B. : \n \tC. . \t D. , \n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,6);
	return answer;
}

char question7(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    printf("\n\nThis question is worth $4,000!");

	printf("\n\nThis kind of error occurs when the programmer has a mistake in the order of their calculation.\n");
	printf("\tA. Run-Time error\tB. Logical error \n \tC. Syntax error \tD. Human error \n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,7);
	return answer;
}

char question8(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    printf("\n\nThis question is worth $8,000!");

	printf("\n\nWhat is the description of the 'char' data type?\n");
	printf("\tA. a sequence of characters terminated with a null character\n\tB. whole numbers with no decimal values\n\tC. hold real numbers\n\tD. used for declaring character type variables\n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,8);
	return answer;
}

char question9(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    printf("\n\nThis question is worth $16,000!");

	printf("\n\nWhich of the following lines is an example of proper declaration of a constant?\n");
	printf("\tA. #define num 25\tB. #define num 25; \n \tC. #define 25; \t\tD. #define num = 25; \n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,9);
	return answer;
}

char question10(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    printf("\n\nThis question is worth $32,000!");

	printf("\n\nThe following are not reserved words in C. Which one does not belong to the list?\n");
	printf("\tA. continue \tB. stop \n \tC. constant \tD. flow \n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,10);
	return answer;
}

char question11(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    printf("\n\nThis question is worth $64,000!");

	printf("\n\nWhat will happen to placeholders when the program is run and compiled?\n");
	printf("\tA. The placeholder is not printed; instead, the data types outcome will be printed.\n\tB. The placeholder is printed.\n\tC. The data types outcome will be printed alongside the placeholder itself.\n\tD. Nothing will happen.\n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,11);
	return answer;
}

char question12(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    printf("\n\nThis question is worth $125,000!");

	printf("\n\nLet x and y be float variables. x = 5, y = 3. x %c y What is the result of the operation?\n", '%');
	printf("\tA. 3\tB. 2 \n \tC. 1 \tD. Error \n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,12);
	return answer;
}

char question13(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    printf("\n\nThis question is worth $250,000!");

	printf("\n\nLet x = 5 and y = 15. y %c= x What is the result?\n", '%');
	printf("\tA. 20\tB. 10 \n \tC. 0 \tD. 3 \n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,13);
	return answer;
}

char question14(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    printf("\n\nThis question is worth $500,000!");

	printf("\n\nLet x = 5 and y = 15. x += y What is the result?\n");
	printf("\tA. 20\tB. 10 \n \tC. 0 \tD. 3 \n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,14);
	return answer;
}

char question15(){
    char answer;

    system("cls");

    color(11,0);printf("\n Player: ");
	color(11,1);printf("%s",player);
	color(11,0);printf("\n Money: ");
	color(11,6);printf(" $%d",money);
    color(11,0);

    color(11,0);printf("\n\nHere's your ");
    color(11,6);printf("MILLION DOLLAR ");
    color(11,0);printf("Question");

	printf("\n\nLet x and y be int variables. x = 5, y = 3. x %c y What is the result of the operation?\n", '%');
	printf("\tA. 3\tB. 2 \n \tC. 1 \tD. Error \n");

	printf("Answer: ");
	scanf("%s",&answer);

	answer = finalAnswer(answer,15);
	return answer;
}

void end(){
    color(11,0);printf("\n\n\tThank you for participating\n");
    printf("\n\n\n\n\n\n\n\n\n");
    exit(0);
}

