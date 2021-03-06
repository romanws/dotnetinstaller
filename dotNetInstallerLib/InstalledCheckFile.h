#pragma once

#include "XmlAttribute.h"
#include "InstalledCheck.h"

class InstalledCheckFile : public InstalledCheck
{
public:
	// percorso del file da cercare
	XmlAttribute filename;
	// versione del file (se "" non viene verificata la versione ma solo la presenza del file)
	XmlAttribute fileversion; 
	// tipo di comparazione : match (verifica se le due stringhe sono uguali) version (che tratta le due stringhe come versioni e quindi se quella richiesta � minore bisogna installare altrimenti no)
	XmlAttribute comparison; 
	// default value when the file doesn't exist and the comparison is other than 'exists'
	XmlAttribute defaultvalue; 
public:
    InstalledCheckFile();
    void Load(TiXmlElement * node);
	virtual bool IsInstalled() const;
};

typedef shared_any<InstalledCheckFile *, close_delete> InstalledCheckFilePtr;
