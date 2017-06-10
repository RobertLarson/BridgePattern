/*
 * CellPhoneTextAppText.cpp
 *
 *  Created on: Jun 5, 2017
 *      Author: rlarson
 */

#include "GalaxyS8TextApp.h"
#include "IPhone8TextApp.h"
#include "SprintPhoneTextAppImpl.h"
#include "VerizonPhoneTextAppImpl.h"

void SendText(CellPhoneTextApp & textApp)
{
	textApp.Open();

	textApp.AddRecipient(std::string("555-123-4567"));
	textApp.AddRecipient(std::string("555-765-4321"));

	textApp.AddText(std::string("Can you hear me now?"));

	textApp.SendText();

	textApp.Close();
}

int main()
{
	SprintPhoneTextAppImpl sprintTextAppImpl;
	GalaxyS8TextApp        galaxyS8TextApp(&sprintTextAppImpl);

	SendText(galaxyS8TextApp);

	VerizonPhoneTextAppImpl verizonTextAppImpl;
	IPhone8TextApp        iPhone8TextApp(&verizonTextAppImpl);

	SendText(iPhone8TextApp);

	return 0;
}


