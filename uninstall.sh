#!/bin/bash

##
## make-make installer
## By Ndr
## Forked by equals215
##

CHOICE=-1

yes_no () {
    local CHOSEN='0'
    local ANSWER
    while [ "$CHOSEN" = '0' ]
    do
	read -p "$1 [Y/N]" -n1 ANSWER
	echo ''
	case $ANSWER in
	    y | Y )
		CHOICE=1
		CHOSEN='1';;
	    n | N )
		CHOICE=0
		CHOSEN='1';;
	    *)
		echo 'Invalid answer, try again.';;
	esac
    done
}

echo -e "\033[1m\033[44m Make-Make uninstaller, by Ndr\033[0m\\n"
sleep 1s
yes_no "This will UNINSTALL make-make ! (But will keep your lib) Are you sure ?"
if [ $CHOICE = 0 ];
then
    echo "Uninstallation aborted :)"
    exit
fi
rm ~/bin/make-make &>/dev/null
rm ~/bin/maek/Makefile &>/dev/null
rm ~/bin/maek/make-makelib/Makefile &>/dev/null
rm ~/bin/make-make_files/Makefile &>/dev/null
rm ~/bin/make-make_files/main.c &>/dev/null
rm ~/bin/make-make_files/make-makelib/Makefile &>/dev/null
echo -e "\033[1m\033[101m Make-make a été désinstallé. Votre lib n'a pas été supprimée et se trouve dans ~/bin/maek ou ~/bin/make-make_files\033[0m\\n"
sleep 5s
