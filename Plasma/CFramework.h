// BFBC2 Emulator - Plasma
// Made by Freaky123
// With help from Domo
// � Freaky (Freaky123) 2010-2011

#include "stdafx.h"
#include "CDebug.h"
#include "CConfig.h"
#include "CDatabase.h"
#include "Handler.h"

class CFramework {
public:
	CDebug*		debug;
	CConfig*	config;
	CDatabase*	database;
	Handler*    handler;

	CFramework( );
	~CFramework( );

	void loadConfig( );
	char* getTime( );
	char* randomString(int len);
};