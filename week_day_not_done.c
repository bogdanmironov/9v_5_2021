#include<stdio.h>
#include<stdlib.h>

int main () {
    int day,month,year,kind_year,date_true,max_month,nd_day,nd_month,week_day=1,year_now=2018,nd_day_now=1,kind_year_now;
    // 1.1.2018
    do{
        printf("Day: ");scanf("%d", &day);
        printf("Month: ");scanf("%d", &month);
        printf("Year: ");scanf("%d", &year);
        kind_year=0;
        if(year%4==0 && year%100!=0) kind_year=1;
        if(year%100==0 && year%400==0) kind_year=1;
        switch(month){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12: max_month=31; break;
            case 4: case 6: case 9: case 11: max_month=30; break;
            case 2: if(kind_year==1) max_month=29; else max_month=28; break;
        }
        if(day<1 || day>max_month || month<1 || month>12){
            date_true=0;
            system("cls");
            printf("How `bout no!\n\n");
        }else{
            date_true=1;
        }
    }while(date_true==0);
//The date is checked


    nd_day=day;
    nd_month=month-1;
    while(nd_month>0){
        switch(nd_month){
            case 1:case 3:case 5:case 7:case 8:case 10:case 12: nd_day+=31;
            case 4:case 6:case 9: case 11: nd_day+=30;
            case 2: if(kind_year==1) nd_day+=29;
                    else nd_day+=28;
        }
        nd_month--;
    }
//The number of the day is known (day of the year) and is printed to the user

    if(year<year_now){
        for(;year<=year_now;year_now--){
            if(year_now%4==0 && year_now%100!=0) kind_year_now=1;
            if(year_now%100==0 && year_now%400==0) kind_year_now=1;
            if(kind_year_now==0){
                week_day-=365%7;
            }else{
                week_day-=366%7;
            }
            if(week_day<1) week_day+=7;
        }
        week_day+=(nd_day%7)+1;
        if(week_day<1) week_day+=7;
    }else{

    }
//The date is known; Not printed

    switch(week_day){
        case 1: printf("Noooooooooo!!! Its Monday");break;
        case 2: printf("Tues_day");break;
        case 3: printf("It`s Wednesday my dudes!");break;
        case 4: printf("Middle of the week, we all feel dead. (Thursday)");break;
        case 5: printf("Finally, its Friday");break;
        case 6: printf("Wait, no, stop! (Saturday)");break;
        case 7: printf("I SAID STOP!!! (Sunday)");break;
        default: printf("FUCK YOU!");

    }
    return 0;
}
