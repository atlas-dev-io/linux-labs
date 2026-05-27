#include <stdlib.h>
#include <netdb.h>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
	struct hostent *p;
	int cnt = 0;

	/* 1. Parameter Count Validation */
	if (argc != 2) {
		fprintf(stderr,
			"Error: Invalid argument count.\nUsage: %s <domain_name>\n",
			argv[0]);
		exit(EXIT_FAILURE);
	}

	/* 2. Network Resolution and Validation */
	p = gethostbyname(argv[1]);
	if (!p || !p->h_addr_list) {
		herror("Domain resolution failed");
		exit(EXIT_FAILURE);
	}

	while (p->h_addr_list[cnt]) {
		struct in_addr *addr;

		addr = (struct in_addr *)p->h_addr_list[cnt];
		printf("%s\n", inet_ntoa(*addr));
		cnt++;
	}

	return 0;
}