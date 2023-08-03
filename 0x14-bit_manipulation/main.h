#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * union endian_union - A union to check the endianness of the system.
 * @num: An integer to store endianness.
 * @bytes: An array of chars to access individual bytes of the int.
 */
union endian_union
{
    int num;
    char bytes[sizeof(int)];
};

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int count_set_bits(unsigned long int num);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
