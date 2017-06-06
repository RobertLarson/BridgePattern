/*
 * CellPhoneTextApp.cpp
 *
 *  Created on: Jun 5, 2017
 *      Author: rlarson
 */

#include "CellPhoneTextApp.h"
#include "CellPhoneTextAppImpl.h"

CellPhoneTextApp::CellPhoneTextApp(CellPhoneTextAppImpl * impl)
: m_pImpl(impl) {
}

CellPhoneTextApp::~CellPhoneTextApp() {
}

void CellPhoneTextApp::AddText(std::string textField) {
	m_textField = textField;
}

void CellPhoneTextApp::SendText() {
	m_pImpl->SendTextImpl(m_recipients, m_textField);
}

void CellPhoneTextApp::AddRecipient(std::string recipient) {
	m_recipients.push_back(recipient);
}

void CellPhoneTextApp::RemoveRecipient(std::string recipient) {
	auto iter = find(m_recipients.begin(), m_recipients.end(), recipient);

	if(iter != m_recipients.end())
	{
		m_recipients.erase(iter);
	}
}
