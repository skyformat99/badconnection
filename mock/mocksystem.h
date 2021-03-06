#ifndef _MOCKSYSTEM_H_
#define _MOCKSYSTEM_H_

#include <sys/socket.h>

int socket(int domain, int type, int protocol);

void socket_will_return(int socket_id);
int socket_called_with_domain(void);
int socket_called_with_type(void);
int socket_called_with_protocol(void);

int bind(int socket, const struct sockaddr *address, socklen_t address_len);

void bind_will_return(int bind_value);
int bind_called_with_socket(void);
const struct sockaddr* bind_called_with_address(void);
socklen_t bind_called_with_len(void);

#endif