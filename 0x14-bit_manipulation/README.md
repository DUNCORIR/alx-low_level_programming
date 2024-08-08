0x14. C - Bit manipulation

The process of manipulating data by the use of bits. Standard binary of 0s and 1s.
the bitwise operators are:
0. AND a & b:Result is true when both operands are true
1. OR	a | b :	Result is true when at least one of the operands is true
2. XOR	a ^ b	Result is true when exactly one of the operands is true
3.NOT	! a	Result is true when the operand is false; result is false when the operand is true.
4.<< : shift left
5.>> : shift right.


unsigned int binary_to_uint(const char *b);Function that converts a binary number to an unsigned int.
void print_binary(unsigned long int n);Function that prints the binary representation of a number.
int get_bit(unsigned long int n, unsigned int index);Function that returns the value of a bit at a given index.
int set_bit(unsigned long int *n, unsigned int index);Function that sets the value of a bit to 1 at a given index.
int clear_bit(unsigned long int *n, unsigned int index);Function that sets the value of a bit to 0 at a given index.
unsigned int flip_bits(unsigned long int n, unsigned long int m);Function that returns the number of bits you would need to flip to get from one number to another.
