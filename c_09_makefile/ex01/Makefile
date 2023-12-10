LIBNAME = libft.a

# Commands
RM = rm -f 
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCDIR = srcs
INCDIR = includes

# Source files
SRCFILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJFILES = $(SRCFILES:%.c=%.o)

# Path
SRC = $(addprefix $(SRCDIR)/, $(SRCFILES))
OBJ = $(addprefix $(SRCDIR)/, $(OBJFILES))
INC = -I$(INCDIR)

# Rules
all: $(LIBNAME)

$(SRCDIR)/%.o : $(SRCDIR)/%.c
	@gcc $(CFLAGS) $(INC) -c $< -o $@
	@echo "Compiled: $<"

$(LIBNAME) : $(OBJ)
	@ar rc $(LIBNAME) $(OBJ)
	@ranlib $(LIBNAME)
	@echo "Successfully created library $(LIBNAME)"

clean:
	@$(RM) $(OBJ)
	@echo "Cleaned object files"

fclean:
	@$(RM) $(LIBNAME)
	@echo "Cleaned library file"

# To create a clean build of library: make fclean
re: fclean all

