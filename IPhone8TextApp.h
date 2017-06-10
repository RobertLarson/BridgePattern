/*
 * IPhone8TextApp.h
 *
 *  Created on: Jun 5, 2017
 *      Author: rlarson
 */

#ifndef IPHONE8TEXTAPP_H_
#define IPHONE8TEXTAPP_H_

#include "CellPhoneTextApp.h"

class CellPhoneTextAppImpl;

class IPhone8TextApp : public CellPhoneTextApp {
public:
	IPhone8TextApp(CellPhoneTextAppImpl * impl);
	virtual ~IPhone8TextApp();

	virtual void Open();
	virtual void Close();
};

#endif /* IPHOME8TEXTAPP_H_ */
