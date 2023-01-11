#include <iostream>
#include <string>

using namespace std;

class MotorVehicle {

public:
  MotorVehicle(string MotorVehicleModel, string fueltype, int yearofmanufacture, string color, int enginecapacity):MotorVehicleModel_(MotorVehicleModel), fueltype_(fueltype),YearOfManufacture_(yearofmanufacture), color_(color), enginecapacity_(enginecapacity){}

  void setMotorVehicleModel(string MotorVehicleModel) {
    MotorVehicleModel_ = MotorVehicleModel;
  }

  string getMotorVehicleModel() const {
    return MotorVehicleModel_;
  }

  void setfueltype(string fueltype) {
    fueltype_ = fueltype;
  }

  string getfueltype() const {
    return fueltype_; 
  }

  void setYearOfManufacture(int yearofmanufacture) {
    YearOfManufacture_ = yearofmanufacture;
  }

  int getyearofmanufacture() const {
    return YearOfManufacture_; 
  }

  void setcolor(string color) {
    color_ = color; 
  }

  string getcolor() const { 
    return color_; 
  }

  void setenginecapacity(int enginecapacity) {
    enginecapacity_ = enginecapacity;
  }

  int getenginecapacity() const {
    return enginecapacity_;
  }

  void display();

  
private:
  string MotorVehicleModel_;
  string fueltype_;
  int YearOfManufacture_;
  string color_;
  int enginecapacity_;
};

void MotorVehicle::display(){
    cout << "The vehicle model is : " << getMotorVehicleModel() << endl;
    cout << "The fuel type is : " << getfueltype() << endl;
    cout << "The year of manufacture is : " << getyearofmanufacture() << endl;
    cout << "The color is : " << getcolor() << endl;
    cout << "The engine capacity is : " << getenginecapacity() << "\n" << endl;
  }