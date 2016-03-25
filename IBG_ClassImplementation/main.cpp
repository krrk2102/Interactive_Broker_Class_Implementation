//
//  main.cpp
//  IBG_ClassImplementation
//
//  Created by Shangqi Wu on 16/3/24.
//  Copyright © 2016 Shangqi Wu. All rights reserved.
//
//  This file contains the driver of all classes,
//  and it also includes a test case to demonstrate
//  operation of codes.
//

#include <iostream>
#include "CarRental.h"

using namespace std;


// The signature of testing function.
void runTestCase();


// The main function to execute.
int main(int argc, const char * argv[]) {
	
	// Run the pre-set test case.
	runTestCase();
	
    return 0;
}


// The implementation of test function.
// This function doesn't accept input parameters,
// nor return anything.
void runTestCase() {
	
	// Create an instance of CarRental class.
	CarRental rentingCenter;
	
	// Add vehicles, SUVs or Sedans into the container.
	//
	// Add a BMW SUV without third row seats.
	rentingCenter.addVehicle(
				new SUV(SUVType, "BMW", "U00001", 5));
	
	// Add a Mercedes sedan without sport package.
	rentingCenter.addVehicle(
				new Sedan(SedanType, "Mercedes", "S00001", 5));
	
	// Add an Audi sedan with sport package,
	// which is worth 100 dollar.
	rentingCenter.addVehicle(
				new Sedan(SedanType, "Audi", "S00002", 5, true, 100));
	
	// Add a Lexus SUV with third row seats,
	// which provide additional capacity of 2.
	rentingCenter.addVehicle(
				new SUV(SUVType, "Lexus", "U00002", 5, 2));
	
	// Add an Acura sedan with sport package,
	// which is worth 75 dollar.
	rentingCenter.addVehicle(
				new Sedan(SedanType, "Acura", "S00003", 5, true, 75));
	
	// Add a Toyota sedan without sport package.
	rentingCenter.addVehicle(
				new Sedan(SedanType, "Toyota", "S00004", 5));
	
	// Add a Land Rover SUV with third row seats,
	// which provide additional capacity of 2.
	rentingCenter.addVehicle(
				new SUV(SUVType, "Land Rover", "U00003", 5, 2));
	
	// Add a Honda SUV without third row seats.
	rentingCenter.addVehicle(
				new SUV(SUVType, "Honda", "U00004", 5));
	
	
	// Start iterating the container and try to retrieve vehicle
	// information.
	for (unsigned int i = 0; i < rentingCenter.vehicleSize(); i++) {
		
		// Pointer to current vehicle.
		Vehicle* vehicle = rentingCenter[i];
		
		// Displaying general information.
		cout << "Vehicle No." << (i + 1) << endl;
		cout << "\tBrand: " << vehicle->getBrand() << endl;
		cout << "\tLicense No.: " << vehicle->getLicence() << endl;
		
		if (vehicle->getType() == SUVType) {
			
			// Special information: type & third row.
			cout << "\tVehicle type: SUV" << endl;
			
			if (dynamic_cast<SUV*>(vehicle)->hasThirdRow()) {
				
				cout << "\tThis SUV is equipped with third row seats.";
				cout << endl << "\tAdditional capacity: ";
				cout << dynamic_cast<SUV*>(vehicle)->
									getThirdRowCapacity() << endl;
				
			} else {
				
				cout << "\tThis SUV is not equipped with third ";
				cout << "row seats." << endl;
				
			}
			
		} else {
			
			// Special information: type & sport package.
			cout << "\tVehicle type: Sedan" << endl;
			
			if (dynamic_cast<Sedan*>(vehicle)->hasSportPackage()) {
				
				cout << "\tThis sedan is equipped with sport package.";
				cout << endl << "\tAdditional price: ";
				cout << dynamic_cast<Sedan*>(vehicle)->
								getSportPackagePrice() << endl;
				
			} else {
				
				cout << "\tThis sedan is not equipped with sport ";
				cout << "package." << endl;
				
			}
			
		}
		
		// Total passenger capacity information.
		cout <<"\tTotal passenger Capacity of the vehicle is: ";
		cout << vehicle->getCapacity() << endl;
		cout << endl;
	}
	
}