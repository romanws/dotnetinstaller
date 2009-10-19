#pragma once
#include "ControlText.h"

class ControlBrowse : public ControlText
{
public:
    ControlBrowse();
public:
	std::wstring id;
	std::wstring filter;
	std::wstring button_text;
	bool folders_only;
	bool must_exist;
	bool hide_readonly;
	bool allow_edit;
	void Load(TiXmlElement * node);
	std::wstring GetString() const;
};

typedef shared_any<ControlBrowse *, close_delete> ControlBrowsePtr;
