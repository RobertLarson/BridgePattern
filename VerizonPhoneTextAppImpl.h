/*
 * VerizonPhoneTextAppImpl.h
 *
 *  Created on: Jun 5, 2017
 *      Author: rlarson
 */

#ifndef VERIZONPHONETEXTAPPIMPL_H_
#define VERIZONPHONETEXTAPPIMPL_H_

#include "CellPhoneTextAppImpl.h"

class VerizonPhoneTextAppImpl : public CellPhoneTextAppImpl {
public:
	VerizonPhoneTextAppImpl();
	virtual ~VerizonPhoneTextAppImpl();

	virtual void SendTextImpl(std::vector<std::string> recipients,
			std::string textField);
};

#endif /* VERIZONPHONETEXTAPPIMPL_H_ */
