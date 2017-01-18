#compilateur utilisé
CC = g++-5
# flags de compilation
CC_FLAGS = -Wall -std=c++11 -lfl #-ggdb 
EXT_SRC = 
CC_MOD_FLAGS = -MM #-MP 

# extension des fichiers lex (.XXX)
LEX_EXT = lex
# interpréteur du fichier Lex : analyse lexicale
LEX = flex
LEX_FlAGS =


# extension des fichiers yacc (.XXX)
YACC_EXT = ypp
# interpréteur des fichiers Yacc : analyse syntaxique et sémantique
YACC = bison
YACC_FLAGS =

#sources cpp
# --- RAJOUTER CHAQUE FICHIER CPP DE MODULES ICI ! ---
# --- FAIRE UN FICHIER CPP POUR CHAQUE FICHIER H S'IL Y A UNE CLASSE DEDANS ---
MOD_CPP =  src/modules/ArrayDeclaration.cpp src/modules/ArrayAccess.cpp src/modules/Condition.cpp src/modules/Conditionnal_instruction.cpp src/modules/If.cpp src/modules/Declaration.cpp src/modules/Foreach.cpp src/modules/Forall.cpp src/modules/Function.cpp src/modules/HashElement.cpp src/modules/HashTable.cpp src/modules/Instruction.cpp src/modules/Iterative_instruction.cpp src/modules/Node.cpp src/modules/Operator.cpp src/modules/Range.cpp src/modules/Repeat.cpp src/modules/ScopeHashTable.cpp src/modules/Variable.cpp src/modules/While.cpp

#fichiers objets
MOD_OBJ = $(MOD_CPP:src/modules/%.cpp=obj/%.o)
#fichiers de dependances
MOD_DPDCY = $(MOD_CPP:src/modules/%.cpp=obj/%.d)


#executables
# nom de l'exe, doit avoir le meme nom que le fichier lex
EXEC = EZ_language_compiler


#compilateur
all: $(EXEC) 

EZ_language_compiler : obj/lex.yy.c obj/EZ_language_compiler.tab.cpp obj/EZ_language_compiler.tab.hpp $(MOD_OBJ) 
	@echo -e "\033[1;33mCréation du compilateur en compilant les sources\033[0m"
	$(CC) -o bin/$@ obj/EZ_language_compiler.tab.cpp obj/lex.yy.c $(MOD_OBJ) $(CC_FLAGS)

obj/lex.yy.c: src/EZ_language_compiler.$(LEX_EXT) obj/EZ_language_compiler.tab.hpp
	@echo -e "\033[1;33mInterprétation du fichier Lex\033[0m"
	$(LEX) -o $@ $^ $(LEX_FLAGS)
	@echo ""
 	
obj/EZ_language_compiler.tab.cpp obj/EZ_language_compiler.tab.hpp:  src/EZ_language_compiler.$(YACC_EXT)
	@echo -e "\033[1;33mInterprétation et compilation intermédiaire des fichiers Yacc\033[0m"
	$(YACC) $^ --defines=obj/EZ_language_compiler.tab.hpp --output=obj/EZ_language_compiler.tab.cpp $(YACC_FLAGS) 
	@echo ""	

#dependances
obj/%.d: src/modules/%.cpp
	@echo -e "\033[1;33mDépendance pour le fichier $< créée : \033[0m" 
	$(CC) $< -MT $@ -MT obj/$*.o -o $@ $(CC_MOD_FLAGS)	
	@echo ""

#include ici  --- A NE PAS DEPLACER
-include $(MOD_DPDCY) 

#objets
obj/%.o: src/modules/%.cpp 
	@echo -e "\033[1;33mFichier objet pour le fichier $< créé : \033[0m" 
	$(CC) -c $< -o $@ $(CC_FLAGS)
	@echo "" 

 	
#clean  
clean :
	@echo -e "\033[1;33mSuppression des fichiers générés et des fichiers objets\033[0m"
	rm -rf obj/lex.yy.c 
	rm -rf obj/*.tab.*
	rm -rf obj/*.d
	rm -rf obj/*.o
	
mrproper: clean	
	@echo ""
	@echo -e "\033[1;33mSuppression de l'exécutable\033[0m"
	rm -rf bin/$(EXEC)

launch: all
	@echo -e "\033[1;33mLancement du compilateur"
	@echo -e "\033[1;33m=============================="
	@echo ""
	@exec bin/$(EXEC) ""
	@echo -e "FIN\033[0m"

#documentation
doc:
	doxygen Doxyfile
	@echo -e "\033[1;33mOuverture de la documentation ...\033[0m"
	@xdg-open  docs/html/index.html

#aide
aide: help
help:
	@echo -e "\033[3mCompiler le projet : make\033[0m"	
	@echo -e "\033[3mNettoyer les fichier objets : clean\033[0m"	
	@echo -e "\033[3mNettoyer les fichier objets + executable : mrproper\033[0m"
	@echo -e "\033[3mGénérer la doc puis l'ouvrir : doc\033[0m"	
	@echo ""
	@echo -e "\033[3mVersions requises : g++ (5.4.0), lex (2.6.0), yacc (3.0.4)\033[0m"
	@echo "" 
