#include <iostream>
#include <cmath>

// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Buoyancy.cpp
// Last Modification Date: 2/3/2017
// Author1 and ID and Group: Reem   20140127 G21
// Author2 and ID and Group: Ezzat  20140173 G21
// Author3 and ID and Group: Mohand 20140280 G22
// Teaching Assistant: Hala Abdelkader

using namespace std;

int main() {
   cout << "Welcome to the Buoyancy Program" <<endl;
   float weight;
   cout << "Please enter the weight in pounds :) " << endl;
   cin >> weight;
   float radius;
   cout << "Please enter the radius in feet :) " <<endl;
   cin >> radius;
   float volume = (4/3)*(22/7)* pow (radius,3);  // calculation of volume of sphere
   float force = volume * 62.4;                 // specific weight of water
   cout << "Weight of the object equals: " << weight <<endl <<endl;
   cout << "Force equals: " << force <<endl <<endl;

   if (force >= weight){                       // condition to determine if the sphere floats or sinks
   	cout << "Since the force is greater than or equals weight. " <<endl <<endl;
   	cout << "Therefore The Sphere will float in the water. " << endl <<endl;
   }
   else{
   	cout << "Since the force is smaller than weight. " <<endl <<endl;
   	cout << "The Sphere will sink in the water. " <<endl <<endl;
   }

	return 0;
}
