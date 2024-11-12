#pragma once

// define the library used
#ifdef _WIN32 
    // include the winsock library
    #include "WinSock2.h"
#elif __linux__ && __APPLE__
    // include the system socket library
    #include "sys/socket.h"
#endif

// include the networking constants
#include "constants.h"

/*
FNS: Functional Networking System,
A library made for simplifying the process to connect clients
allows for the ease of sending data
*/
class FNS {
public:
    FNS() {
	 
    }
};
