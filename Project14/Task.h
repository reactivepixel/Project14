#pragma once
#include <wx/wx.h>

class Task
{
public:
	const wxString GetTitle() { return _title; }
	const wxString GetDescription() { return _description; }

	void SetTitle(wxString title);
	void SetDescription(wxString description);


private:
	wxString _title; 
	wxString _description;
	bool isComplete; 
};