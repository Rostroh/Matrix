# === Configuration ===
EXE := $(notdir $(CURDIR))

# Dossiers
INCLUDE_DIR := ../include
UTILS_DIR := ../utils

# Chemin
PATH03 :=../exercice03/
PATH04 :=../exercice04/

# Fichiers sources
SRCS := main.c exercice05.c $(UTILS_DIR)/vector.c $(UTILS_DIR)/matrix.c
OBJS := $(SRCS:.c=.o)

# Compilateur et options
CC := gcc
CFLAGS := -I$(INCLUDE_DIR) -lm

# === Règles ===
all: $(EXE)

$(EXE): $(OBJS)
	$(MAKE) -C $(PATH03)
	$(MAKE) -C $(PATH04)
	$(CC) -o $@ $(CFLAGS) $(OBJS) $(PATH03)/exercice03.o $(PATH04)/exercice04.o

# Règle générique pour les .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyer les fichiers objets
clean:
	$(MAKE) -C $(PATH03) clean
	$(MAKE) -C $(PATH04) clean
	rm -f $(OBJS)

# Nettoyer + exécutable
fclean: clean
	$(MAKE) -C $(PATH03) fclean
	$(MAKE) -C $(PATH04) fclean
	rm -f $(EXE)

re: fclean all

# Éviter les conflits avec des fichiers du même nom
.PHONY: all clean fclean re run

