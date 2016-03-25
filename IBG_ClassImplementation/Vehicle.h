//
//  Vehicle.h
//  IBG_ClassImplementation
//
//  Created by Shangqi Wu on 16/3/24.
//  Copyright © 2016 Shangqi Wu. All rights reserved.
//
//  This file contains definition of Vehicle class,
//  and necessary vehicle type enumerated type.
//

#ifndef Vehicle_h
#define Vehicle_h

#include <string>

using namespace std;

// Define enumeration type of vehicles.
// It is designed to prevent invalid vehicle type input,
// and it is possible to add more types in the future,
// so that scalability and robustness is ensured.
//
// It will be used as an identifier to align proper
// derived class (SUV or Sedan), when an pointer is
// retrieved from a vector of base (Vehicle) class.
enum VehicleType { SUVType, SedanType };


// Definition of Vehicle, which is the base class
// of SUV and Sedan.
class Vehicle {

// The following attributes are protected, since it is convenient for
// some derived classes to access base class member directly.
protected:
	
	// The identifier to indicate correct vehicle type,
	// i.e., SUV or Sedan.
	// Vehicle type is supposed to remain the same once identified,
	// so that "const" is applied here.
	const VehicleType type;
	
	// Brand/manufactruer of the vehicle.
	// It is also supposed to remain the same.
	const string brand;
	// License plate number of the vehicle.
	string licensePlate;
	
	// Passenger capacity of front and rear seats.
	// At this time, this capacity only include 2 rows,
	// some SUVs with 3 rows will be assigned additional capacity.
	unsigned int seatCapacity;
	
public:
	
	// Constructor to be used.
	Vehicle(VehicleType _type, string _brand, string _license, unsigned int _seatCap);
	
	// The method to return the vehicle type.
	VehicleType getType() const;
	// The method to return the vehicle brand.
	string getBrand() const;
	// The method to return the vehicle's license number.
	string getLicence() const;
	
	// The method to retrieve passenger capacity of this vehicle,
	// if some types of vehicles has additional capacity, i.e., SUV
	// with 3 rows, this method will be overridden by derived class.
	virtual unsigned int getCapacity() const;
	
};

#endif /* Vehicle_h */
