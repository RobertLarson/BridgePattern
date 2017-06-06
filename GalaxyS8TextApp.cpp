/*
 * GalaxyS8TextApp.cpp
 *
 *  Created on: Jun 5, 2017
 *      Author: rlarson
 */

#include "GalaxyS8TextApp.h"

#include <iostream>

GalaxyS8TextApp::GalaxyS8TextApp(CellPhoneTextAppImpl * impl)
: CellPhoneTextApp(impl) {

}

GalaxyS8TextApp::~GalaxyS8TextApp() {
}

void GalaxyS8TextApp::Open() {
	std::cout << "Opening Galaxy S8 Text App.\n\n";
}

void GalaxyS8TextApp::Close() {
	std::cout << "Closing Galaxy S8 Text App.\n";
}
