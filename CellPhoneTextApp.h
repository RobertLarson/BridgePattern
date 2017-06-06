/*
 * CellPhoneTextApp.h
 *
 *  Created on: Jun 5, 2017
 *      Author: rlarson
 */

#ifndef CELLPHONETEXTAPP_H_
#define CELLPHONETEXTAPP_H_

#include <vector>
#include <string>

class CellPhoneTextAppImpl;

class CellPhoneTextApp {
public:
	CellPhoneTextApp(CellPhoneTextAppImpl * impl);
	virtual ~CellPhoneTextApp();

	virtual void Open() = 0;
	virtual void Close() = 0;

	virtual void AddText(std::string textField);
	virtual void SendText();
	virtual void AddRecipient(std::string recipient);
	virtual void RemoveRecipient(std::string recipient);

private:
	CellPhoneTextAppImpl * m_pImpl;
	std::string m_textField;
	std::vector<std::string> m_recipients;
};

#endif /* CELLPHONETEXTAPP_H_ */
