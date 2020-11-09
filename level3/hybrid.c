//bin/true : all
#if 0
_=''''
///bin/true : none

	# Shell

	if [ "x$1" = "xCHECK=1" ] ; then
		echo "Shell !!"
	else
		printf '#include <stdio.h>\nint main(){printf("Shell: Hello, C!\\n");}\n'
	fi
	exit 0

# Makefile
.PHONY: none all all2 check check2 check_sh check_py mk check_mk check_c check_cxx clean
none:
	false

SH:=sh
PYTHON:=python
#CC:=gcc
#CC:=clang
#CXX:=clang
BCC:=$(shell basename $(CC))
BCXX:=$(shell basename $(CXX))
SOURCE:=hybrid.c
TARGETC:=hybrid_$(BCC)_c
TARGETCXX:=hybrid_$(BCXX)_cxx

all: mk

check: check_mk

all2: mk check_sh check_py check_c check_cxx

check2: CHECK:=CHECK=1
check2: check_mk check_sh check_py check_c check_cxx

check_sh:
	@$(SH) $(SOURCE) $(CHECK)

check_py:
	@$(PYTHON) -x $(SOURCE) $(CHECK)

mk:
	@printf "all:\n\t@printf 'Makefile: Hello, Makefile!\\\\n'\n"

check_mk:
	@echo "make !!"

check_c: $(TARGETC)
	@./$(TARGETC) $(CHECK)

check_cxx: $(TARGETCXX)
	@./$(TARGETCXX) $(CHECK)

$(TARGETC): $(SOURCE)
	@$(CC) -x c -o $@ $^ $(CFLAGS)

$(TARGETCXX): $(SOURCE)
	@$(CC) -x c++ -o $@ $^ $(CXXFLAGS)

clean:
	$(RM) hybrid_*_c hybrid_*_cxx

ifdef 0
//:'''

# Python part

import sys
n=0
s=['#include <iostream>\nint main(){std::cout << "Python: Hello, C++" << std::endl;}','python !!']
if len(sys.argv) > 1:
	if sys.argv[1] == 'CHECK=1':
		n = 1
print(s[n])
sys.exit(0)

_=''''

#else

/* C/++ code here */

#include <stdio.h>
#include <string.h>

#define endif

#if 1
extern void *hybrid0;
asm(".data\n.extern _Z6hybridv\n.globl hybrid0\nhybrid0: .quad _Z6hybridv");
void _Z6hybridv(){}
#else
void hybrid0(){}
#endif
int check = 0;
const char *s[][2] = {
{"print('C: Hello, Python!')","C !!"},
{"echo 'C++: Hello, Shell!'","C++ !!"},
};

void hybrid(){
	printf("%s\n", s[hybrid0==hybrid][check]);
}

int main(int argc, char *argv[]) {
	int arg = 1;
	if (arg < argc) {
		if (!strcmp(argv[arg++], "CHECK=1")) {
			check = 1;
		}
	}
	hybrid();
}

//'''
endif
#endif
