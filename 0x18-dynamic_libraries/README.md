0x18. C - Dynamic libraries

What is a Dynamic Library?
A dynamic library (also known as a shared library) is a collection of compiled functions and routines that applications can use at runtime. Unlike static libraries, dynamic libraries are not embedded directly into the executable. Instead, they are loaded into memory when the program runs.

How Does It Work?
When a program using a dynamic library runs, the operating system locates the library and loads it into memory. This makes the program's executable smaller and allows multiple programs to share the same library, saving memory.

Creating a Dynamic Library
Here's a step-by-step example of creating and using a dynamic library in C.

Step 1: Write the code for the library
Step 2: Compile the dynamic library
Step 3: Using the dynamic library
Compile and link the program with the dynamic library:

To run it, you need to tell the system where to find the dynamic library.
Copy code
export LD_LIBRARY_PATH=.
./main

Environment Variable $LD_LIBRARY_PATH and How to Use It.

$LD_LIBRARY_PATH is an environment variable that specifies a list of directories where the system should search for dynamic libraries before searching the default library paths.Using $LD_LIBRARY_PATH
If your dynamic library libexample.so is not in a standard location like /usr/lib or /lib, you can set $LD_LIBRARY_PATH to include the directory containing the library.

 Differences Between Static and Shared Libraries
Feature	Static Library	Shared Library
File Extension	.a (Linux), .lib (Windows)	.so (Linux), .dll (Windows)
Memory Usage	Larger executables; code is copied into each program	Smaller executables; library is shared across programs
Linking	Happens at compile time	Happens at runtime
Performance	Faster execution (all code included in the binary)	Slightly slower due to runtime linking
Updates	Requires recompilation of all programs	Update the library without recompiling the programs

Basic Usage of nm, ldd, ldconfig
Using nm
nm lists symbols (functions and variables) from object files or libraries.

Using ldd
ldd shows the shared libraries required by a program.

Using ldconfig
ldconfig is used to update the shared library cache, ensuring that the system can find shared libraries.

Adding a new library path:

Add the directory to /etc/ld.so.conf:
bash
Copy code
/path/to/your/library
Run:
bash
Copy code
sudo ldconfig
This ensures that libraries in the specified path are found by the system when executing programs.
