#include "src/FNS.h"
#include <sys/socket.h>
#include <arpa/inet.h>

#include <iostream>

int main() {
    // functional networking system
    FNS fns;
    
	 // create server
	 auto server = socket(AF_INET, SOCK_STREAM, 0);
	 if (!server) {
		  std::cout << "Error: Server cannot be established" << std::endl;
	 }

	 // bind socket to port
	 struct sockaddr_in address;
	 address.sin_family = AF_INET;
	 address.sin_addr.s_addr = INADDR_ANY;
	 address.sin_port = htons(5500);
}
