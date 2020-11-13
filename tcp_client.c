#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#ifdef __WIN32__
#include <winsock2.h>
#else
#include <sys/socket.h>
#endif

int main()
{
    //create the socket
    int network_socket;
    network_socket = socket(AF_INET, SOCK_STREAM, 0);

    //specifying an address for the socket
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = INADDR_ANY;
    int connection_status = connect(network_socket, (struct sockaddr *)&server_address, sizeof(server_address));

    //check for the errors with the connection
    if (connection_status == -1)
    {
        printf("There was an error making the network connection");
    }

    //receive the data from the server
    char server_response[250];
    recv(network_socket, &server_response, sizeof(server_response), 0);

    //print out the server's response
    printf("The server sent the data", server_response);
    close(socket);
    return 0;
}
