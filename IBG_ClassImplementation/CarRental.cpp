//
//  CarRental.cpp
//  IBG_ClassImplementation
//
//  Created by Shangqi Wu on 16/3/24.
//  Copyright © 2016 Shangqi Wu. All rights reserved.
//
//  This file contains implementation of CarRental class.
//

#include "CarRental.h"


// Default constructor to be used.
CarRental::CarRental() : vehicleList() {}


// The copyt contructor.
CarRental::CarRental(const CarRental& copy) {
	
	for (Vehicle* v : copy.vehicleList) {
		
		// Perform deep copy of the vehicle list. 
		if (v->getType() == SUVType) {
			this->vehicleList.push_back(new SUV(*dynamic_cast<SUV*>(v)));
		} else {
			this->vehicleList.push_back(new Sedan(*dynamic_cast<Sedan*>(v)));
		}
		
	}
	
}


// The desctructor to safely delete all vehicle pointers.
CarRental::~CarRental() {
	
	for (Vehicle* v : vehicleList) {
		delete v;
	}
	
	vehicleList.clear();
}


/*
 * This method takes a pointer to Vehicle object, and appends
 * the pointer into container.
 * This method modifies vehicleList and doesn't return anything.
 * @param vehicle: a pointer to Vehicle, either SUV or Sedan.
 */
void CarRental::addVehicle(Vehicle* vehicle) {
	
	vehicleList.push_back(vehicle);
	
}


/*
 * This method returns the pointer to Vehicle in specified position.
 * @param num: an index to specify pointer position in the container.
 * @return a pointer of Vehicle at the specified position in container.
 */
Vehicle* CarRental::getVehicle(unsigned int num) {
	
	return vehicleList[num];
	
}


/*
 * This method returns vehicle's passenger capacity at specified position.
 * @param num: an index to specify the vehicle position in the container.
 * @return total passenger capacity of the vehicle at specified position.
 */
unsigned int CarRental::getVehicleCapacity(unsigned int num) const {
	
	return vehicleList[num]->getCapacity();
	
}


/*
 * This method returns the size of container.
 * This method is constant and doesn't accept input parameters.
 * @return the size of container, i.e., vehicleList.
 */
unsigned long CarRental::vehicleSize() const {
	
	return vehicleList.size();
	
}


/*
 * This method overloads braket operator for CarRental class,
 * for convenience of random access to the container directly.
 * @param num: an index specifying location in the container.
 * @return pointer to vehicle object at that location.
 */
Vehicle* CarRental::operator[](unsigned int num) {
	
	return vehicleList[num];
	
}