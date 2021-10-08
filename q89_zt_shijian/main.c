#include <stdio.h>


void fun(int year,int month,int day,int hour,int minute,int second);

int main() {

    fun(2020,2,28,23,59,59);
    return 0;
}

void fun(int year,int month,int day,int hour,int minute,int second){

    int months[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    second = second + 1;
    if(second == 60){
        second = 0;
        minute = minute + 1;
    }

    if(minute == 60){
        minute = 0;
        hour = hour + 1;
    }

    if(hour == 24){
        day = day + 1;
        hour = 0;
    }

    int flag = 0;
    if(year % 400 == 0){
        flag = 1;
    } else{
        if(year % 4==0 && year % 100!= 0){
            flag = 1;
        }
    }

    if(flag && month == 2 && day == 30){
        month = month + 1;
        day = 1;
    } else if(!flag && month == 2 && day == 29){
        month = month + 1;
        day = 1;
    } else if(month == 12 && day == 32){
        year = year +1;
        day = 1;
        month = 1;

    } else{
        if(day == months[month-1] + 1){
            month = month +1;
            day = 1;
        }
    }

    printf("%d 年%d 月%d 日%d 时 %d分 %d秒",year,month,day,hour,minute,second);


}