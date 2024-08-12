0x15. C - File I/O

create,open,close, read and write
3 standard file descriptors-POSIX names and purpose
system calls- open,close, read and write.
Flags-O_RDONLY,O_WRONLY,O_RDWR.
File permissions:How to set them with open system call.
system call defined.
Difference between system calls and functions.

0.ssize_t read_textfile(const char *filename, size_t letters);Function that reads a text file and prints it to the POSIX standard output.
1.int create_file(const char *filename, char *text_content);Function that creates a file.
2.int append_text_to_file(const char *filename, char *text_content);Function that appends text at the end of a file.
3.A program that copies the content of a file to another file.Usage: cp file_from file_to
