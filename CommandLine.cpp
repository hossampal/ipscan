// CommandLine.cpp: implementation of the CCommandLine class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "ipscan.h"
#include "CommandLine.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CCommandLine::CCommandLine()
{
	
}

CCommandLine::~CCommandLine()
{

}

void CCommandLine::process()
{
	if (__argc!=1) 
	{
	
		if (__argc<3 || __argc>4 || strlen(__targv[1])<7 || strlen(__targv[2])<7) 
		{
	
			MessageBox(0, "Command-line usage:\n"
			   "ipscan.exe <start_ip> <end_ip> [filename]\n"
			   "\tstart_ip\t- starting IP address\n"
			   "\tend_ip\t- ending IP address\n"
			   "\tfilename\t- filename to save listing to (optional)\n"
			   "Note: if 3rd parameter is given, then the program will\n"
			   "close after saving data to a file",
			   "Angry IP Scanner Help",MB_OK | MB_ICONINFORMATION);
			exit(1);
		}
		

		MessageBox(0, "Scanning "+(CString)__targv[1]+" to "+(CString)__targv[2],"",0);
	}

}