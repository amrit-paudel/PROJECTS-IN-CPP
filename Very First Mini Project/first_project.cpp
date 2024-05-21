/* 
  Can you make a C++ progran in which it ask for the date like 2020-05-23 
  and the program will print the week day of that month 
  and also print the whole calednar of that month
*/

/* 
  class Date
  METHODS:
   findWeekDay, findMonth , FindNoOfDaysInMonth, isLeapYear, printMonth
  VARIABLES:
string date in - -   format
than we will extract year, month, day by some string methods


*/
#include<iostream>
#include<string>
using namespace std;

class Date{
    private:
    string inputed_date;  // here we will store the inputed date in string format
    int year,month,day;   // here we will store respective values extracted from above string

    public:

    // create a constructor
    Date(string& inputed_date){
        this->inputed_date=inputed_date;

        setYearMonthDay();
    }

    void setYearMonthDay(){
        this->year=stoi(this->inputed_date.substr(0,inputed_date.find("-")));
        this->month=stoi(this->inputed_date.erase(0,5).substr(0,this->inputed_date.find("-")));
        this->day=stoi(this->inputed_date.erase(0,3));

    }
    

    // it will return number corresponding to day of week
  int day_of_week(int& y, int& m, int& d){
           static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
           y -= m < 3;
           return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
        };
     
     
     // it will return corresponding day of week in string
    string findWeekDay(){
            switch(this->day_of_week(this->year,this->month,this->day)){
        case 0: return "Sunday";
        break;
        case 1: return "Monday";
        break;
        case 2: return "Tuesday";
        break;
        case 3: return "Wednsday";
        break;
        case 4: return " Thursday ";
        break;
        case 5: return "Friday";
        break;
        case 6: return "Saturday";
        break;
    }
        
    }    

    // Method check leap year
    bool isLeapYear(){      
    if(this->year%400==0 || (this->year%4==0 && this->year%100!=0 ) ){ return true; }
    else{ return false; }

    }       
    
    
    int findNoOfDaysInMonth(){
        if(this->isLeapYear() && this->month==2 ){ return 29; }

        if( this->month%2==0 && this->month==2 ) {return 28;}
        else if( this->month==0 ){return 30;}
        else{return 31;}
    }
   
    
    // it will provide numerical id to each day of week
    int getDateId(){
        string day=this->findWeekDay();
        if(day=="Sunday"){return 0;}
        else if(day=="Monday") {return 1;}
        else if(day=="Tuesday") {return 2;}
        else if(day=="Wednsday") {return 3;}
        else if(day=="Thursday") {return 4;}
        else if(day=="Friday") {return 5;}
        else if(day=="Saturday") {return 6;}

    }


    void printMonth(){
            string days_of_weeks[]={"S","M","T","W","T","F","s"};
    int day_num=getDateId();

    for( int i=0;i<=6;i++ ){
        cout<<days_of_weeks[i]<<" ";
    } cout<<endl;
  int j;
  j=1;
  while(true){
       for( int i=0;i<=6;i++ ){
        if(j==1) {cout<<" "<<" ";}
        if(j==32){break;}
        if(i>=day_num || j>1 ){ cout<<j<<" ";j++;}
        } cout<<endl;

        if(j==32){break;}
      }
    }; 
 
};



int main(){

    string input_date;
    cout<<" Enter any date in YYYY-MM-DD format \n ";
    cin>>input_date;
    
    Date inputedDate(input_date); // we will work on this object

    // print leap year or not
    if(inputedDate.isLeapYear()){
        cout<<"\n\nThe given year is leap year"<<endl;
    }
    else{
        cout<<"\n\nThe given year is not a leap year "<<endl;
    }

    // print number of days in month
    cout<<"The Number of days in the given month is "<<inputedDate.findNoOfDaysInMonth()<<endl;

    // print week day of given date
    cout<<"The weak day of the given date is "<<inputedDate.findWeekDay()<<endl;


    // At last print the whole month
    cout<<" \n\n ***** The Whole Month is printed below ***** \n\n";
    inputedDate.printMonth();


}