rm -f libft.a
cc *.c -Wall -Werror -Wextra -c
ar rc libft.a *.o
rm *.o
