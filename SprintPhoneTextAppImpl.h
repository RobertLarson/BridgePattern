/*
 * SprintPhoneTextAppImpl.h
 *
 *  Created on: Jun 5, 2017
 *      Author: rlarson
 */

#ifndef SPRINTPHONETEXTAPPIMPL_H_
#define SPRINTPHONETEXTAPPIMPL_H_

#include "CellPhoneTextAppImpl.h"

class SprintPhoneTextAppImpl : public CellPhoneTextAppImpl{
public:
	SprintPhoneTextAppImpl();
	virtual ~SprintPhoneTextAppImpl();

	virtual void SendTextImpl(std::vector<std::string> recipients,
			std::string textField);
};

#endif /* SPRINTPHONETEXTAPPIMPL_H_ */
