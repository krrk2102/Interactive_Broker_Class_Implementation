//
//  Vehicle.cpp
//  IBG_ClassImplementation
//
//  Created by Shangqi Wu on 16/3/24.
//  Copyright © 2016 Shangqi Wu. All rights reserved.
//
//  This file contains implementations of Vehicle class.
//

#include "Vehicle.h"

using namespace std;


// The constructor of Vehicle, base class.
Vehicle::Vehicle(VehicleType _type, string _brand,
					string _license, unsigned int _seatCap) :
				type(_type),
				brand(_brand),
				licensePlate(_license),
				seatCapacity(_seatCap) {}


/*
 * This method returns the type of vehicle.
 * This is a constant method, with no input paramters.
 * @return vehicle type, belongs to one of the defined enumerated types, VehicleType.
 */
VehicleType Vehicle::getType() const {
	
	return type;
	
}


/*
 * This method returns the brand of vehicle.
 * This is a constant method, with no input parameters.
 * @return a string indicating brand of vehicle.
 */
string Vehicle::getBrand() const {
	
	return brand;
	
}


/*
 * This method returns the licence number.
 * This is a constant method, with no input parameters.
 * @return a string indicating vehicle's licence number.
 */
string Vehicle::getLicence() const {
	
	return licensePlate;
	
}


/*
 * This method returns passenger capacity of the vehicle.
 * This is a constant method, with no input parameters.
 * @return an unsigned integer indicating vehicle capacity.
 */
unsigned int Vehicle::getCapacity() const {
	
	return seatCapacity;
	
}