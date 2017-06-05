/**    
***    Copyright (c) 2017 The Gupta Empire - All Rights Reserved
***    Unauthorized copying of this file, via any medium is strictly prohibited
***    Proprietary and confidential
***    
***    Written by Aryan Gupta <me@theguptaempire.net>
***    
***=============================================================================
***    @author          Aryan Gupta
***    @project         
***    @title           Program Info
***    @date            (YYYY-MM-DD)        
***    @brief           Contains the basic program information.
***=============================================================================
**/

#pragma once

// =================  PROGRAM  INFO  =================
#define R_PVERSION	       /* Version Number */ "1.0.0"
 
#define R_PROJNAME		     /* Project Name */ "Template"
#define R_PRGMNAME		     /* Program Name */ "Template"
#define R_DESCRIPTION	      /* Description */ "This is a Template"

#define R_AUTHOR		     	   /* Author */ "Aryan Gupta"
#define R_COMPANY		          /* Company */ "The Gupta Empire"
#define R_COPYRIGHT				/* Copyright */ "Copyright (c) The Gupta Empire - All Rights Reserved"
#define R_ORGFILENAME  /* Original File Name */ "main.exe" 
#define R_FVERSION		     /* File Version */ "1.0.0"
#define R_COMMENTS		         /* Comments */ "The Gupta Empire - http://theguptaempire.net"
#define R_LEGALTRDMKS	  /* Legal Tademarks */ "..."
#define R_PRIVATEBUILD	    /* Private Build */ "\0" 
#define R_SPECIALBUILD	    /* Special Build */ "\0"

#define R_MAINICON				/* Main Icon */ "./res/icon.ico" 

#define PRINT_LEGAL_TERR std::cout << '\n' << R_PROJNAME << " v" << R_PVERSION << " by " << R_AUTHOR << '\n' << R_COPYRIGHT << '\n' << R_COMMENTS << "\n\n\n" // Legal and Informational

// =================  MACROS  =================
// DEBUGGING
#define LOGL(msg) if(DEBUG) {std::cout << msg << std::endl;}
#define LOG(msg) if(DEBUG) {std::cout << msg;}

// CLEAR TERMINAL 
#if defined(__linux__) || defined(linux) || defined(__linux)
	#define CLEAR_TERMINAL if(DEBUG){system("clear");}
#elif defined(_WIN32)
	#define CLEAR_TERMINAL if(DEBUG){system("cls");}
#endif