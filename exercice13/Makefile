# === Configuration ===
EXE := $(notdir $(CURDIR))

# Dossiers
INCLUDE_DIR := ../include
UTILS_DIR := ../utils

# Fichiers sources
SRCS := main.c exercice13.c $(UTILS_DIR)/vector.c $(UTILS_DIR)/matrix.c
OBJS := $(SRCS:.c=.o) ../exercice10/exercice10.o

# Compilateur et options
CC := gcc
CFLAGS := -I$(INCLUDE_DIR)

# === Règles ===
all: $(EXE)

$(EXE): $(OBJS)
	$(CC) -o $@ $(CFLAGS) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXE)

re: fclean all

# Éviter les conflits avec des fichiers du même nom
.PHONY: all clean fclean re run

