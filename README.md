# Pointers

A pointer is a derived data type in C that can store the address of other variables or a memory. We can access and manipulate the data stored in that memory location using pointers.

Syntax of C Pointers
datatype * pointer_name;
The above syntax is the generic syntax of C pointers. The actual syntax depends on the type of data the pointer is pointing to.

Other Types of Pointers in C:
There are also the following types of pointers available to use in C apart from those specified above:

Far pointer: A far pointer is typically 32-bit that can access memory outside the current segment.
Dangling pointer: A pointer pointing to a memory location that has been deleted (or freed) is called a dangling pointer.
Huge pointer: A huge pointer is 32-bit long containing segment address and offset address.
Complex pointer: Pointers with multiple levels of indirection.
Near pointer: Near pointer is used to store 16-bit addresses means within the current segment on a 16-bit machine.
Normalized pointer: It is a 32-bit pointer, which has as much of its value in the segment register as possible.
File Pointer: The pointer to a FILE data type is called a stream pointer or a file pointer.

Size of Pointers in C
The size of the pointers in C is equal for every pointer type. The size of the pointer does not depend on the type it is pointing to. It only depends on the operating system and CPU architecture. The size of pointers in C is 

8 bytes for a 64-bit System
4 bytes for a 32-bit System
The reason for the same size is that the pointers store the memory addresses, no matter what type they are. As the space required to store the addresses of the different memory locations is the same, the memory required by one pointer type will be equal to the memory required by other pointer types.
