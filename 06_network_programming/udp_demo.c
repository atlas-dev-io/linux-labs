#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>

int main(int argc,char *argv[])
{
        //1.创建套接字
        int udp_fd = socket(AF_INET, SOCK_DGRAM, 0);
        if (-1 == udp_fd) {
                fprintf(stderr,
                        "udp socket error,errno:%d,%s\n", 
                        errno,
                        strerror(errno));
                exit(1);
        }

        //2.获取UDP套接字的广播属性
        int flag = 0;
        socklen_t len = 4;
        getsockopt(udp_fd,
                SOL_SOCKET, 
                SO_BROADCAST, 
                (void *)&flag, 
                &len);

        printf("flag = %d\n",flag);

        //3.设置UDP套接字的广播属性
        int optval = 1;
        setsockopt(udp_fd, 
                SOL_SOCKET, 
                SO_BROADCAST, 
                &optval, 
                sizeof(optval));

        //4.再次获取UDP套接字的广播属性
        flag = -1;
        getsockopt(udp_fd,
                SOL_SOCKET, 
                SO_BROADCAST, 
                (void *)&flag, 
                &len);
        printf("flag = %d\n",flag);

        return 0;
}