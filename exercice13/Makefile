# === Configuration ===
# Nom de l'exécutable (automatiquement basé sur le nom du dossier)
EXE := $(notdir $(CURDIR))

# Dossiers
INCLUDE_DIR := ../include
UTILS_DIR := ../utils

# Fichiers sources
SRCS := $(wildcard *.c) $(wildcard $(UTILS_DIR)/*.c)
OBJS := $(SRCS:.c=.o) ../exercice10/exercice10.o

# Compilateur et options
CC := gcc
CFLAGS := -I$(INCLUDE_DIR)

# === Règles ===
all: $(EXE)

$(EXE): $(OBJS)
	$(CC) -o $@ $(CFLAGS) $(OBJS)

# Règle générique pour les .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyer les fichiers objets
clean:
	rm -f $(OBJS)

# Nettoyer + exécutable
fclean: clean
	rm -f $(EXE)

# Tout reconstruire
re: fclean all

# Lancer le programme
run: $(EXE)
	./$(EXE)

# Éviter les conflits avec des fichiers du même nom
.PHONY: all clean fclean re run

