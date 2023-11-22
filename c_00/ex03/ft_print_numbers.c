#include <unistd.h>

void ft_print_numbers(void);
void print_number_as_char(char c);

int main(){
    ft_print_numbers();
    return 0;
};

void print_number_as_char(char c) {
    write(1, &c, 1);
}

void ft_print_numbers() {
    int i;

    i = 0;
    
    while (i <= 9){

        print_number_as_char(i + '0');
        i++;
    }
}
