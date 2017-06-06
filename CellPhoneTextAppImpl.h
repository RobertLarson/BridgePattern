/*
 * CellPhoneTextAppImpl.h
 *
 *  Created on: Jun 5, 2017
 *      Author: rlarson
 */

#ifndef CELLPHONETEXTAPPIMPL_H_
#define CELLPHONETEXTAPPIMPL_H_

#include <string>
#include <vector>

class CellPhoneTextAppImpl
{
public:
	virtual void SendTextImpl(std::vector<std::string> recipients,
			std::string textField) = 0;

};


#endif /* CELLPHONETEXTAPPIMPL_H_ */
