rm -f libft.a
gcc -Wall -c *.c
ar rc libft.a *.o
rm *.o