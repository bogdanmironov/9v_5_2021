#include<stdio.h>
#include<stdlib.h>

int main () {
    unsigned char key;
    int n_code=1,arrow;
    printf("> 1\n  2\n  3\n  4\n  5\n");
    while(1){
        key=getch();
        if(key==224 || key==0){
            key=getch();
                switch(key){
                    case 80: if(n_code<5)n_code+=1;else n_code=1;break;
                    case 72: if(n_code>1)n_code-=1;else n_code=5;break;
                    }

            system("cls");
        }
        if(key==13) break;
        switch(n_code){
            case 1: printf("> 1\n  2\n  3\n  4\n  5\n");break;
            case 2: printf("  1\n> 2\n  3\n  4\n  5\n");break;
            case 3: printf("  1\n  2\n> 3\n  4\n  5\n");break;
            case 4: printf("  1\n  2\n  3\n> 4\n  5\n");break;
            case 5: printf("  1\n  2\n  3\n  4\n> 5\n");break;
        }
    }
return 0;
}
