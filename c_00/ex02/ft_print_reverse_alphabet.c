#include <unistd.h>

void ft_print_reverse_alphabet(void);

int main() {
    ft_print_reverse_alphabet();
    return 0;
}

void ft_print_reverse_alphabet(void) {
    int i;

    i = 'z';
    
    while (i >= 'a') {
        write(1, &i, 1);
        // Go BACKWARD by 1 alphabet char
        i-=1;
    }
};