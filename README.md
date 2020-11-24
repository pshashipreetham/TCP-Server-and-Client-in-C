# TCP Server and Client in C

**OS:** Ubuntu 20.04 LTS</br>
**IDE:** Visual Studio Code</br>

## Commands to be followed
### Server:
Compile Server and execute: 
```shell
gcc -o server server.c
./server
```
### Client:
Compile Client and execute: 
```shell
gcc -o client client.c
./client
```

Output on **Client side** console/terminal:
```shell
[+] Client Socket Created Successfully 
[+] Connected to the Server 
Data Recieved: Hello
[+] Closing the Connection
```

Output on **Server side** console/terminal:
```shell
[+] Server Socket Created Successfully 
[+] Bind to the port Number 4455 
[+] Listening... 
[+] Data has been sent to the client
[+] Closing the Connection
```

**Note:** </br>
**1.** You can see the changes in the **file.txt** and **file2.txt** which are present in the repo, since that data get transferred from one file to another !!</br>
**2.** The Libraries **#include<apra/inet.h>** are available only for the Linux Distros not for the windows, for windows we need to use **#include<winsock2.h>**</br>
**3.** Kindly Raise Issues if there is any problem or you can mail me at **psp316r@gmail.com** !!
