#include <unistd.h>

void ft_print_alphabet(void);

int main() {
    ft_print_alphabet();
    return 0;
}

void ft_print_alphabet(void) {
    int i;

    i = 'a';
    
    while (i <= 'z') {
        write(1, &i, 1);
        i+=1;
    }
};