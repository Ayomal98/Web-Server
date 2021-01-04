#ifndef _COMMON_H_
#define _COMMON_H_

#include <sys/socket.h>
#include <sys/types.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <stdarg.h>
#include <stdbool.h>

#include <errno.h>
#include <fcntl.h>
#include <sys/time.h>
#include <sys/ioctl.h>
#include <netdb.h>

#define SERVER_PORT 12000
#define MAXLINE 4096
#define SA struct sockaddr

#define txt "text/plain"
#define png "image/png"
#define jpg "image/jpeg"
#define jpeg "image/jpeg"
#define html "text/html"
#define mp3 "audio/mpeg"
#define mp4 "video/mp4"

#endif
