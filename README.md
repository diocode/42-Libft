# Libft
This project is about coding a C library.
It will contain a lot of general purpose functions your programs will rely upon.

alias cc='cc -Wall -Wextra -Werror'
alias norminette='norminette -R CheckForbiddenSourceHeader'

DISABLE_AUTO_TITLE="true"
case $TERM in xterm*)
    precmd () {print -Pn "\e]0;%~\a"}
    ;;
esac
