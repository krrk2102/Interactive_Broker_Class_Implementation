//
//  SUV.cpp
//  IBG_ClassImplementation
//
//  Created by Shangqi Wu on 16/3/24.
//  Copyright © 2016 Shangqi Wu. All rights reserved.
//
//  This file contains implementation of SUV class.
//

#include "SUV.h"


// Constructor to be used.
SUV::SUV(VehicleType _type, string _brand, string _license,
			unsigned int _seatCap, unsigned int _addSeatCap) :
		Vehicle(_type, _brand, _license, _seatCap),
		additionalSeatCapacity(_addSeatCap) {}


/*
 * This method is overriding of corresponding method in 
 * Vehicle class, which returns total passenger capacity 
 * of this SUV, compatible with SUV with 3 rows' seats.
 * This method is a constant method with no input parameters.
 * @return an unsigned integer indicating SUV capacity.
 */
unsigned int SUV::getCapacity() const {
	
	return seatCapacity + additionalSeatCapacity;
	
}


/*
 * This method indicates if this SUV is equipped with the 
 * third row seats.
 * This method is a constant method with no input parameters.
 * @return true if the SUV has third row, false otherwise.
 */
bool SUV::hasThirdRow() const {
	
	return additionalSeatCapacity > 0;
	
}


/*
 * This method returns passenger capacity of third row only.
 * This method is a constant method with no input parameters.
 * @return an unsigned integer indicating third row capacity.
 */
unsigned int SUV::getThirdRowCapacity() const {
	
	return additionalSeatCapacity;
	
}