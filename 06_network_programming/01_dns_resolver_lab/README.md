# Domain Name to IP Resolver

A lightweight, robust command-line utility written in C for resolving domain names into their corresponding IP addresses. 

Although the primary objective of this project is specifically to resolve `www.baidu.com` and output all associated IP addresses to the terminal, we gave careful consideration to the tool's **generality** and reusability during its design. Consequently, the target domain is not hardcoded within the program; instead, the tool is capable of dynamically resolving any domain name passed to it via command-line arguments.

## Implementations

This repository provides two distinct implementations to demonstrate both classic and modern POSIX network programming practices:

1. **Modern Resolver (`resolve_modern.c`):** Utilizes the `getaddrinfo` API. This is the recommended, modern approach for network resolution. It handles both IPv4 (`AF_INET`) and IPv6 (`AF_INET6`) seamlessly, avoiding the deprecation issues of older functions. Includes proper memory management (`freeaddrinfo`).
   
2. **Legacy Resolver (`resolve_legacy.c`):** Utilizes the traditional `gethostbyname` API. While largely considered obsolete for modern dual-stack networking, it is included here for educational purposes and compatibility with strictly IPv4/legacy systems.

## Features

* **Universal Resolution:** Accepts any valid domain name as an argument.
* **Protocol Support:** Full support for IPv4 and IPv6 .
* **Strict Validation:** Built-in checks for parameter counts and network resolution failures.
* **Terminal Integration:** Clean, Unix-philosophy compliant standard output .

## Compilation

You can compile the source files using any standard C compiler (such as `gcc` or `clang`).

```bash
# Compile the modern version (Recommended)
gcc -Wall -Wextra resolve_modern.c -o resolver

# Compile the legacy version
gcc -Wall -Wextra resolve_legacy.c -o resolver_legacy
```

## Usage

Run the executable and pass the target domain name as the single argument.


### General Usage
You can use the exact same binary to diagnose any other domain:
```bash
./resolver www.baidu.com
./resolver www.bing.com
```

## Example Output

```text
$ ./resolver www.baidu.com
111.45.11.5
183.240.99.224
2409:8c54:870:310:0:ff:b0ed:40ac
2409:8c54:870:187:0:ff:b0d9:bb1c

$ ./resolver localhost
127.0.0.1
```

## License

MIT License. Feel free to use, modify, and distribute this code as needed.