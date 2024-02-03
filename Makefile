
main:
#compile everything
	@gcc -o install-wiz code/install-wizard.cpp
	@gcc -o light-todo code/light-todo.cpp
	@gcc -o gui code/GUI.cpp
	@gcc -o tui code/TUI.cpp