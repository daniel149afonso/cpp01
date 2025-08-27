# ================== VARIABLES ==================
NAME     = zombie

SRC_DIR  = src/
OBJ_DIR  = objs/

SRCS = $(SRC_DIR)main.cpp \
		$(SRC_DIR)Zombie.cpp \
		$(SRC_DIR)newZombie.cpp \
		$(SRC_DIR)randomChump.cpp \


# Mettre les .o dans objs/
OBJS = $(patsubst $(SRC_DIR)%.cpp,$(OBJ_DIR)%.o,$(SRCS))

GCC = g++ -Wall -Werror -Wextra -std=c++98
RM  = rm -f

# ================== REGLES ==================
all: $(NAME)

$(NAME): $(OBJS)
	$(GCC) $(OBJS) -o $(NAME)

# Compile src/xxx.cpp -> objs/xxx.o (sans créer le dossier)
$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR)
	$(GCC) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
