### 2.1) What is the purpose of system calls?

Programs request services such as creating new processes or accessing the hard disk from the kernel through system calls.

### 2.2) What are the five major activities of an operating system with regard to process management?

1. Creating and deleting processes
2. Suspending and resuming processes
3. Communicating with processes
4. Synchronizing processes
5. Handling deadlocks

### 2.3) What are the three major activities of an operating system with regard to memory management?

1. Keeping track of what program is using what part of memory
2. Scheduling processes to be loaded into memory
3. Allocating and deallocating memory space

### 2.4) What are the three major activities of an operating system with regard to secondary-storage management?

1. Managing free space
2. Allocating storage
3. Disk scheduling

### 2.5) What is the purpose of the command interpreter? Why is it usually separate from the kernel?

It reads and executes commands by turning them into system calls. The command interpreter is usually separate from the kernel because it is subject to changes.

### 2.11) How could a system be designed to allow a choice of operating systems from which to boot? What would the bootstrap program need to do?
The bootstrap program would be stored on disk, and when the computer boots up, the user can select which operating system they would like to use. There should also be a default operating system to handle the cases where a user does not decide.

### 2.13) Describe three general methods for passing parameters to the operating system.

1. Pass parameters in registers
2. Pass the starting addresses of blocks of parameters
3. Programs push parameters onto the stack, and the operating system pops them off

### 2.17) Would it be possible for the user to develop a new command interpreter using the system-call interface provided by the operating system?

Yes. A user should be able to create a command interpreter using a file management system provided by the operating system.

### 2.21) What is the main advantage of the microkernel approach to system design? How do user programs and system services interact in a microkernel architecture? What are the disadvantages of using the microkernel approach?

The main advantage of the microkernel approach is that it is more secure (more operations are done in user mode). Additionally, adding functionality does not require modifying the kernel itself. 

User programs and system services communicate indirectly with the microkernel by passing messages. The main disadvantage here is that indirect communication is slower than direct communication.

### 2.22) What are the advantages of using loadable kernel modules?

Functionality can be added and removed while the kernel is running, and the kernel doesn’t have to be rebooted or recompiled.

### 2.23) How are iOS and Android similar? How are they different?

iOS and Android are both mobile development platforms that are based on existing kernels and provide frameworks for developers to use.

The two operating systems are different in the fact that iOS executes code natively and Android uses a virtual machine. iOS is proprietary (created by Apple) while Android is open source (created by Google); iOS developers use Swift and Objective-C to write their apps and Android developers use Java and Kotlin. 

iOS is also a lot more fun to develop for. That’s why I’m making a career out of it. :)

### 2.24) Explain why Java programs running on Android systems do not use the standard Java API and virtual machine.

The standard Java API and virtual machine were developed for server systems and desktop machines, not mobile devices. The API and virtual machine specifically developed by Google for mobile is much more suited to running Android apps.

### 2.25) The experimental Synthesis operating system has an assembler incorporated in the kernel. To optimize system-call performance, the kernel assembles routines within kernel space to minimize the path that the system call must take through the kernel. This approach is the antithesis of the layered approach, in which the path through the kernel is extended to make building the operating system easier. Discuss the pros and cons of the Synthesis approach to kernel design and system-performance optimization.

Synthesis can achieve very fast and efficient performance due to the absence of layers. However, without layers, it can be difficult to debug kernel code (one would have to search the entire system instead of looking through the layers), and the kernel must be recompiled every time a new service is added. Each system also needs its own Synthesis compiler, because it is system-specific.


