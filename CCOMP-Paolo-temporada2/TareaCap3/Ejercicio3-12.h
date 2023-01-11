#include <iostream>
#include <string>

using namespace std;

class Date {

  public:
  Date(int year, int month, int day):year_(year), month_(month), day_(day){}

  void display();

  void SetYear(int year){
    year_ = year;
  }

  int GetYear(){
    return year_;
  }

  void SetMonth(int month){
    month_ = month;
  }

  int GetMonth(){
    return month_;
  }

  void SetDay(int day){
    day_ = day;
  }

  private:
    int year_;
    int month_{1};
    int day_;

};

void Date::display(){
  if (month_ > 0 && month_ < 13){
  }
  else{
      month_ = 1;
  }
  cout << "Today's date is: " << month_ << "/" << day_ << "/" << year_ << "\n" << endl;
}