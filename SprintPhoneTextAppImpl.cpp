/*
 * SprintPhoneTextAppImpl.cpp
 *
 *  Created on: Jun 5, 2017
 *      Author: rlarson
 */

#include "SprintPhoneTextAppImpl.h"

#include <iostream>

SprintPhoneTextAppImpl::SprintPhoneTextAppImpl() {
}

SprintPhoneTextAppImpl::~SprintPhoneTextAppImpl() {
}

void SprintPhoneTextAppImpl::SendTextImpl(std::vector<std::string> recipients,
		std::string textField) {
	std::cout << "Sending message...\n\n";
	std::cout << std::string("\"") << textField << std::string("\"") << "\n\n";
	std::cout << "To recipients : \n";
	for(auto iter = recipients.begin();
		iter != recipients.end(); ++iter)
	{
		std::cout << "   " << *iter << "\n";
	}
	std::cout << "\nover Sprint network\n\n";
}
