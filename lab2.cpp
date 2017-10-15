#include <iostream>
#include <string>

using namespace std;

struct timeType
{

	int hr;
	double min;
	int sec;

};

struct tourType
{
	
	string cityName;
	int distance;
	timeType travelTime;
	
};

void outputData(tourType data)
{

	std::cout << "City name: " << data.cityName << std::endl;
	std::cout << "Distance:  " << data.distance << std::endl;
	std::cout << "Travel time: " << data.travelTime.hr << ":" << data.travelTime.min << 
		":" << data.travelTime.sec << std::endl;

}

tourType inputData(tourType data)
{
	std::cout << "Enter city name: ";
	cin >> data.cityName;

	return data.cityName;

}

int main()
{

	tourType destination;

	destination.cityName = "Nottingham";
	destination.distance = 130;
	destination.travelTime.hr = 3;
	destination.travelTime.min = 15;
	destination.travelTime.sec = 0;

	outputData(destination);





}