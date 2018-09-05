

# Introduction to OS (1)

Computer system can be broken to 4
1) Hardware (CPU), I/O devices
2)OS - control system
3)Apps 
4) Users- people, other machines

When computer starts "bootstrap program" is loaded which is stored in ROM or EPROM (firmware). It initilases all aspects of the system, loads kerner and begins execution.

- interrupt
Tells CPU that something stopped or requies attention to figure out the next move. The "interrupt" is is sent to interrupt service routes that contains all the serivces running. A Trap or exception is caused by error or if if a user requested which shuts the programm. AN OS is interrupt driven.  Basically a computer can do 1 task at the time, but it computes so fast and interupts processes that are not neeed, which might give an impression that everythng works conccurently on your computer.

- i/o structure
