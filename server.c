//This is the server of chat room
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>

#ifndef DEBUG_SERVER
#define DEBUG_SERVER 1
#endif

int main(int argc, const char *argv[])
{
	int sockfd;
   //    int socket(int domain, int type, int protocol);
     if (( sockfd =socket(AF_INET,SOCK_STREAM , 0)) == -1 )
	 {
	 	printf ("socket is failed\n");
		exit(0);
	 }	 
//int bind(int sockfd, const struct sockaddr *addr   socklen_t addrlen);

	if ( bind( sockfd, 
	return 0;
}
