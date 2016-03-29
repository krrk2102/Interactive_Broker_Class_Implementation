//
//  SUV.h
//  IBG_ClassImplementation
//
//  Created by Shangqi Wu on 16/3/24.
//  Copyright © 2016 Shangqi Wu. All rights reserved.
//
//  This file contains definition of SUV class,
//  a derived class of Vehicle class.
//

#ifndef SUV_h
#define SUV_h

#include "Vehicle.h"

using namespace std;

// The SUV sub-class, derived from Vehicle.
class SUV : public Vehicle {
	
private:
	
	// The third row seat capacity of a SUV,
	// if it is set to 0, it indicates that the SUV
	// doesn't have the third row.
	unsigned int additionalSeatCapacity;
	
public:
	
	// Constructor to be used.
	// General passenger capacity and capacity of third row seats
	// are assigned separately.
	// Capacity of third row is assigned by the last input parameter.
	// The SUV is set to be not equipped with the third row seats
	// in default, i.e., third row capacity set to 0 in default.
	SUV(VehicleType _type, string _brand, string _license,
		unsigned int _seatCap, unsigned int _addSeatCap = 0);
	
	// The overridden function to indicate SUV's total capacity.
	virtual unsigned int getCapacity() const;
	
	// The method to indicate if the SUV has the third row.
	bool hasThirdRow() const;
	// The method to indicate the third row's capacity, if applicable.
	unsigned int getThirdRowCapacity() const;
	
};

#endif /* SUV_h */
