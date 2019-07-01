include ./include

# binary name
APP = c_test

CFLAGS += -O3 -g $(WERROR_FLAGS) -w -std=c99 -U__STRICT_ANSI__

#include ./include

# all source are stored in SRCS-y
SRCS-y := length.c \
          parse.c \
          filter.c


