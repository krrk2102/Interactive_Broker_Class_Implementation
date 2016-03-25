//
//  Sedan.cpp
//  IBG_ClassImplementation
//
//  Created by Shangqi Wu on 16/3/24.
//  Copyright © 2016 Shangqi Wu. All rights reserved.
//
//  This file contains implementation of Sedan class.
//

#include "Sedan.h"


// Constructor to be used.
Sedan::Sedan(VehicleType _type, string _brand, string _license,
				unsigned int _seatCap, bool _package, int _price) :
			Vehicle(_type, _brand, _license, _seatCap),
			sportPackage(_package),
			packagePrice(_price) {}


/*
 * This method indicates if this sedan is equipped with sport package.
 * This method is a constant method with no input parameters.
 * @return true if this sedan is equipped with sport package, false otherwise.
 */
bool Sedan::hasSportPackage() const {
	
	return sportPackage;
	
}


/*
 * This method indicates the price of sport package of this sedan.
 * This method is a constant method with no input parameters.
 * @return an integer indicating price of sport package.
 */
int Sedan::getSportPackagePrice() const {
	
	return packagePrice;
	
}