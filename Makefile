NAME = s21_decimal.a
CC = gcc 
CFLAGS = -Wall -Werror -Wextra -std =c11
G_OUT = gcovreport

all: $(NAME)

#test:

#gcov_report:

clean:
	rm -rf .clang-formate

rebuild: clean all

.PHONY: all clean rebuild