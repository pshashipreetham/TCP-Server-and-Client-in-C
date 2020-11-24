#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <pthread.h>
#include <sys/types.h>
#include <signal.h>

#define PORT 4455

int main()
{
    int clientSocket;
    struct sockaddr_in serverAddr;
    char buffer[1824];

    clientSocket = socket(PF_INET, SOCK_STREAM, 0);
    printf("[+] Client Socket Created Successfully \n");
    memset(&serverAddr, '\0', sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(PORT);
    serverAddr.sin_addr.s_addr =  inet_addr("127.0.0.1");

    connect(clientSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr));
    printf("[+] Connected to the Server \n");

    recv(clientSocket, buffer, 1024, 0);
    printf("Data Recieved: %s", buffer);
    printf("[+] Closing the Connection \n");

}