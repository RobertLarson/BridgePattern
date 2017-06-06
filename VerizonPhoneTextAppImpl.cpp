/*
 * VerizonPhoneTextAppImpl.cpp
 *
 *  Created on: Jun 5, 2017
 *      Author: rlarson
 */

#include "VerizonPhoneTextAppImpl.h"

#include <iostream>

VerizonPhoneTextAppImpl::VerizonPhoneTextAppImpl() {
}

VerizonPhoneTextAppImpl::~VerizonPhoneTextAppImpl() {
}

void VerizonPhoneTextAppImpl::SendTextImpl(std::vector<std::string> recipients,
		std::string textField) {
	std::cout << "Sending message...\n\n";
	std::cout << std::string("\"") << textField << std::string("\"") << "\n\n";
	std::cout << "To recipients : \n";
	for(auto iter = recipients.begin();
		iter != recipients.end(); ++iter)
	{
		std::cout << "   " << *iter << "\n";
	}
	std::cout << "\nover Verizon network\n\n";
}
