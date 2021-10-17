#include <iostream>
#include <iomanip>
using namespace std;

int RevPerMin(float diameter, float speed){
	
	float rpm,r,pi,speed_min; //Declaring the variable RPM=Rev Per Min, r=Radius , speed_min=Speed in Minutes
	
	pi=3.142; // Assuming the constant PI value as 3.142
	
	r=diameter/2; //Radius is Half of Diameter
	
	//Taking Speed in meter/minute so, 1KM/HR = 16.67M/MIN
	speed_min=speed*16.67;
	
	//Revolution Per Minute = Speed(in Meters)/Circumference of circle(We are considering wheel)
	rpm = speed_min/2*pi*r;  
	
	return rpm;
}

int main(){
	/***DECLARING VARIABLES***
	 *** SPEED AND DIAMETER ***/
	 
	float diameter; // Declaring the diameter of a cycle wheel which is in Meters
	float speed;  //This is the average speed in KM/H.
    
	//Taking the values for Diameter and speed from user
	
	cout<<"Please enter the diameter of the cycle wheel in Meters: "; 
	cin>>diameter;
    cout<<"Please enter the speed of the cycle in KM/H: ";
	cin>>speed;
	
	//Displaying the result
	cout<<endl<<endl;
	cout<<"The number of revolutions made by the wheel per minute are, "<<"'"<<RevPerMin(diameter, speed)<<"'"<<endl;;
	
	return 0;
}