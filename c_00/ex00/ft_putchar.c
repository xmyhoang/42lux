// Needed to run write()
#include <unistd.h>

// Declare function
void ft_putchar(char c);

// Call function
int main() {
    ft_putchar('a');
    return 0;
}

// Define function
void ft_putchar(char c) {
    write(1, &c, 1);
};