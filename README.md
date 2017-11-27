# make-make
A repo initializer, mainly for Epitech, but customizable.

It comes with handy Makefiles for projects and libraries.

## By using the "make-make" command:
1) It copies the Makefile in ~/bin/make-make_files/ to the current directory
2) It launches "make arbo" to create a standard repository arborescence
3) It copies the content of ~/bin/make-make_files/make-makelib in ./lib/my
4) It compiles a library with all the .c files in ./lib/my then clears the .o files created in the process
5) Now you just have to create your project .c files in ./src and use make to compile

## Installation :
1) Download the repo and run install.sh (works for bash and zsh users)
2) Copy the .c files you want in your initial lib in ~/bin/make-make_files/make-makelib/
3) Copy your library header (.h) in ~/bin/make-make_files/make-makelib/ and call it my.h
4) Your make-make installation is complete. Do not forget to restart your terminal once before using make-make.

## Upgrade :
Just run upgrade.sh !

## Uninstallation :
Just run uninstall.sh :(