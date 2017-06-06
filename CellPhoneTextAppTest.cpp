/*
 * CellPhoneTextAppText.cpp
 *
 *  Created on: Jun 5, 2017
 *      Author: rlarson
 */

#include "GalaxyS8TextApp.h"
#include "SprintPhoneTextAppImpl.h"
#include "VerizonPhoneTextAppImpl.h"

int main()
{
	SprintPhoneTextAppImpl sprintTextAppImpl;
	GalaxyS8TextApp        galaxyS8TextApp(&sprintTextAppImpl);

	galaxyS8TextApp.Open();

	galaxyS8TextApp.AddRecipient(std::string("555-123-4567"));
	galaxyS8TextApp.AddRecipient(std::string("555-765-4321"));

	galaxyS8TextApp.AddText(std::string("Can you hear me now?"));

	galaxyS8TextApp.SendText();

	galaxyS8TextApp.Close();

	return 0;
}


