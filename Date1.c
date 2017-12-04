#include<stdio.h>
#include<stdlib.h>

int main () {
    int day,month,year,kind_year,date_true,max_month,day2,month2,year2,day0,month0,year0,nd_day,nd_month;
    do{
        printf("Day: ");scanf("%d", &day);
        printf("Month: ");scanf("%d", &month);
        printf("Year: ");scanf("%d", &year);
        kind_year=0;
        if(year%4==0 && year%100!=0) kind_year=1;
        if(year%100==0 && year%400==0) kind_year=1;;
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

    day2=day+1;
    month2=month;
    year2=year;
    if(day2>max_month){
        month2++;
        day2=1;
    }
    if(month2>12){
        year2++;
        month2=1;
    }
    printf("\nNext day:%d/%d/%d", day2, month2, year2);
//The date after is known & printed to the user

    day0=day-1;
    month0=month;
    year0=year;
    if(day0==0){
        month2--;
        if(month2==0){
            year0--;
            month0=12;
            day0=31;
        }
        else
            switch(month2){
                case 1: case 3: case 5: case 7: case 8: case 10: case 12: day0=31; break;
                case 4: case 6: case 9: case 11: day0=30; break;
                case 2: if(kind_year==1) day0=29; else day0=28; break;
            }

    }

    printf("\nPrevious day: %d/%d/%d", day0, month0, year0);
//The previous date is known and printed to the user

    nd_day=day;
    nd_month=month-1;
    while(nd_month>0){
        if(nd_month==1 || nd_month==3 || nd_month==5 || nd_month==7 || nd_month==8 || nd_month==10 || nd_month==12) nd_day+=31;
        if(nd_month==4 || nd_month==6 || nd_month==9 || nd_month==11) nd_day+=30;
        if(nd_month==2 && kind_year==1) nd_day+=29;
        if(nd_month==2 && kind_year==0) nd_day+=28;
        nd_month--;
    }
    printf("\nNumber of day of the year: %d", nd_day);
//The number of the day is known (day of the year) and is printed to the user
    return 0;
}
