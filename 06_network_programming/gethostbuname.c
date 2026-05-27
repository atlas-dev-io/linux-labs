#include <netdb.h>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <threads.h>


int main(int argc,char *argv[])
{
        int cnt = 0;
        struct hostent *p =  gethostbyname(argv[1]);

        while (p -> h_addr_list != NULL) 
        {
                printf("%s\n",inet_ntoa(p -> h_addr_list[cnt++]));
        }

       return 0;
}