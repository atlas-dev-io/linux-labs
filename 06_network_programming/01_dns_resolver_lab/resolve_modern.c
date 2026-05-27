#include <stdlib.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
	struct addrinfo hints;
	struct addrinfo *res;
	struct addrinfo *curr;
	char ip_str[INET6_ADDRSTRLEN];
	int ret;

	/* 1. Parameter Count Validation */
	if (argc != 2) {
		fprintf(stderr,
			"Error: Invalid argument count.\nUsage: %s <domain_name>\n",
			argv[0]);
		exit(EXIT_FAILURE);
	}

	/* * 2. Configure Filtering Hints
	 * We target both IPv4 and IPv6 streams via standard TCP sockets.
	 */
	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;

	/* 3. Modern Network Resolution and Validation */
	ret = getaddrinfo(argv[1], NULL, &hints, &res);
	if (ret != 0) {
		fprintf(stderr, "Domain resolution failed: %s\n",
			gai_strerror(ret));
		exit(EXIT_FAILURE);
	}

	/* 4. Traverse the Linked List via Cursor Pointer */
	curr = res;
	while (curr) {
		void *raw_addr;

		if (curr->ai_family == AF_INET) {
			struct sockaddr_in *ipv4;

			ipv4 = (struct sockaddr_in *)curr->ai_addr;
			raw_addr = &(ipv4->sin_addr);
		} else {
			struct sockaddr_in6 *ipv6;

			ipv6 = (struct sockaddr_in6 *)curr->ai_addr;
			raw_addr = &(ipv6->sin6_addr);
		}

		inet_ntop(curr->ai_family, raw_addr, ip_str, sizeof(ip_str));
		printf("%s\n", ip_str);

		curr = curr->ai_next;
	}

	/* 5. Crucial Clean Up: Free Dynamically Allocated Memory */
	freeaddrinfo(res);

	return 0;
}