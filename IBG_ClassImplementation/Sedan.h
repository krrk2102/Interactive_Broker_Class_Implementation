//
//  Sedan.h
//  IBG_ClassImplementation
//
//  Created by Shangqi Wu on 16/3/24.
//  Copyright © 2016 Shangqi Wu. All rights reserved.
//
//  This file contains defination of Sedan class,
//  derived from Vehicle class.
//

#ifndef Sedan_h
#define Sedan_h

#include "Vehicle.h"

using namespace std;

// The Sedan sub-class, derived from Vehicle.
class Sedan : public Vehicle {

private:
	
	// The identifier to indicate if the sedan is
	// equipped with sport package.
	//
	// In case of some sedan may have complimentary package,
	// or even promotion on sport package over normal sedans.
	bool sportPackage;
	
	// The price of sport package.
	int packagePrice;
	
public:
	
	// Constructor to be used.
	// The sedan is set to be not equipped with sport package in default,
	// i.e., boolean value is false, price is 0 in default.
	Sedan(VehicleType _type, string _brand, string _license,
			unsigned int _seatCap, bool _package = false,
			int _price = 0);
	
	// Method to indicate if the sedan has sport package.
	bool hasSportPackage() const;
	// Method to return the price of sport package.
	int getSportPackagePrice() const;
	
};

#endif /* Sedan_h */
