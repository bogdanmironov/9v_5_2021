#include<stdio.h>
#include<stdlib.h>

void FirstTask(){
    printf("Hello World!");
    printf("printf(Hello World!);");
}

/*Here you write the tasks you wish to add in the form of functions and
then add them in the switch, shown in the description below.*/
int main () {
    char codes_names[][256]={"Hello world","Sum","Max","Max of three numbers","a^n","Swap 2 numbers"};
    //The list with the tasks we have
    int position=1,number_tasks=6,print;
    /*To change the number of tasks change them in the array and
    then change the value of "number_tasks" according to the number of tasks you have in the array
    Then go to the "switch(position){ --- }" and add the task you wish to add. */
    char input;
    do{
        for(print=1;print<=number_tasks;print++){
            if(print==position) printf(">");
            else printf(" ");
            printf("%d.%s\n",print,codes_names[print-1]);
        }
        printf("Press arrow keys to move,Enter to choose and Esc to exit;");
        input=getch();
        system("cls");
        if(input==224 || input==0){
            input=getch();
        }
        switch(input){
            case 72: if(position>1) position-=1;break;
            case 80: if(position<number_tasks) position+=1;break;
        }

        if(input==13){
            switch(position){
                case 1:  FirstTask(); break;
                case 2:  printf("2"); break;
                case 3:  printf("3"); break;
                case 4:  printf("4"); break;
                case 5:  printf("5"); break;
                case 6:  printf("6"); break;
            }
            printf("\nPress Esc to exit; Anything else to go back;");
            input=getch();
            system("cls");
        }
    }while(input!=27);

return 0;
}
