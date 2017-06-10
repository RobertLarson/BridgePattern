/*
 * IPhone8TextApp.cpp
 *
 *  Created on: Jun 5, 2017
 *      Author: rlarson
 */

#include "IPhone8TextApp.h"

#include <iostream>

IPhone8TextApp::IPhone8TextApp(CellPhoneTextAppImpl * impl)
: CellPhoneTextApp(impl) {

}

IPhone8TextApp::~IPhone8TextApp() {
}

void IPhone8TextApp::Open() {
	std::cout << "Opening IPhone 8 Text App.\n\n";
}

void IPhone8TextApp::Close() {
	std::cout << "Closing IPhone 8 Text App.\n\n";
}
