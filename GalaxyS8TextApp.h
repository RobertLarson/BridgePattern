/*
 * GalaxyS8TextApp.h
 *
 *  Created on: Jun 5, 2017
 *      Author: rlarson
 */

#ifndef GALAXYS8TEXTAPP_H_
#define GALAXYS8TEXTAPP_H_

#include "CellPhoneTextApp.h"

class CellPhoneTextAppImpl;

class GalaxyS8TextApp : public CellPhoneTextApp {
public:
	GalaxyS8TextApp(CellPhoneTextAppImpl * impl);
	virtual ~GalaxyS8TextApp();

	virtual void Open();
	virtual void Close();
};

#endif /* GALAXYS8TEXTAPP_H_ */
