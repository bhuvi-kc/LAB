// Problem: OOPS003
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND04/problems/OOPS003
// Solved on: 2026-11-11T17:59:05.719Z

#include <iostream>
using namespace std;
class Date {
    int month, day, year;
    static char slash;
    
    void setMonth (int m){
        month = m;
        if (month > 12){
            month = 12;
        }
    }
    
    void setYear (int y){
        year = y;
    }
    
    bool isLeapYear (){
        bool leap = false;
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
            return true; 
        }
        else {
            return false;
        }
    }
    
    int getMaxDays(){
        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        if (month == 2 && isLeapYear()){
            return 29;
        }
        
        return days[month-1];
    }
    
    void setDay (int d){
        day = d;
         
        if (day > getMaxDays()){
            day = getMaxDays();
        }
    }
    
    public:
    void setDate(int m, int d, int y){
        setMonth(m);
        setYear(y);
        setDay(d);
    }
    
    void increaseDay(){
        day++;
        
        if(day > getMaxDays()){
            day = 1;
            month++;
        }
        if (month > 12){
            month = 1;
            year++;
        }
    }
    
    void showDate() {
        cout << month << slash << day << slash << year <<endl;
    }
};

char Date :: slash = '/';

int main() {
    int m, d, y;
    cin >> m >> d >> y;

    int n;
    cin >> n;

    Date obj;

    obj.setDate(m, d, y);

    for(int i = 0; i < n; i++) {
        obj.increaseDay();
        obj.showDate();
    }

    return 0;
}