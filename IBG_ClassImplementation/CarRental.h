//
//  CarRental.h
//  IBG_ClassImplementation
//
//  Created by Shangqi Wu on 16/3/24.
//  Copyright © 2016 Shangqi Wu. All rights reserved.
//
//  This file contains definition of CarRental class.
//

#ifndef CarRental_h
#define CarRental_h

#include <vector>
#include "Vehicle.h"
#include "SUV.h"
#include "Sedan.h"

using namespace std;

// The class of CarRental, which acts as a container of
// all vehicles, including SUVs and Sedans.
class CarRental {
	
private:
	
	// The container of pointers to vehicles, which can be either
	// a SUV or Sedan.
	vector<Vehicle*> vehicleList;
	
public:
	
	// Default constructor to be used.
	CarRental();
	// Copy constructor might be used.
	CarRental(const CarRental& copy);
	// Destructor to safely delete all vehicle objects,
	// in case of memory leak.
	~CarRental();
	
	// The method to add one more vehicle, either SUV or Sedan,
	// into the container.
	void addVehicle(Vehicle* vehicle);
	
	// The method to return pointer to the vehicle at speicific
	// position in the container.
	Vehicle* getVehicle(unsigned int num);
	
	// The method to get vehicle total capacity in a specific position.
	unsigned int getVehicleCapacity(unsigned int num) const;
	// The method to return container size.
	unsigned long vehicleSize() const;
	
	// Overloaded operator for convenience of random accessing
	// pointers in the container.
	Vehicle* operator [] (unsigned int num);
	
};

#endif /* CarRental_h */
