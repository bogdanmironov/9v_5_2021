#include<stdio.h>
#include<stdlib.h>

int main () {
    int mark,sum=0,i,n;
    float avg;
    printf("Number of students:");scanf("%d",&n);
    for(i=1;i<=n;i++){
        do{
            printf("mark of student number %d:", i);scanf("%d", &mark);
            if(mark<2 || mark>6) printf("Come on, you know thats not possible...At least here\n");
        }while(mark<2 || mark>6);
        sum=sum+mark;
    }
    avg=(float)sum/n;
    printf("%.3f", avg);
return 0;
}
