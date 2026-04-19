# =========================
# Variables
# =========================
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -I./include

SRC_DIRS = . ../utils
OBJ_DIR = ./obj

EXERCISES = exercice00 #exercice01 exercice02  # liste de tes exercices

# =========================
# Liste des objets
# =========================
# Fonction pour convertir un fichier .c en .o dans obj/
OBJS = $(patsubst %.c,$(OBJ_DIR)/%.o,$(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c)))

# =========================
# Règle par défaut : tout compiler
# =========================
all: $(EXERCISES)

# =========================
# Compilation des exercices
# =========================
$(EXERCISES):
	@echo "Compiling $@ ..."
	$(CC) $(CFLAGS) -o $@ $(OBJ_DIR)/$@.o $(filter-out $(OBJ_DIR)/$@.o,$(OBJS))

# =========================
# Compilation des .c en .o dans obj/
# =========================
$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Crée le dossier obj/ s'il n'existe pas
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# =========================
# Nettoyage
# =========================
clean:
	rm -rf $(OBJ_DIR) $(EXERCISES)

.PHONY: all clean
