///bin/true : or false ? # \
_="It\'s a bird... It's a plane... It's..._ \
<!--"
#if 0
_=''''
///bin/false : none

	# Shell

	if [ "x$1" = "xCHECK=1" ] ; then
		echo "Shell !!"
	else
		printf '#include <stdio.h>\nint main(){printf("Shell: Hello, C!\\n");}\n'
	fi
	exit 0

# Makefile
.PHONY: ///bin/true or false
or: all
false: all
.PHONY: none all all2 check check2 check_sh check_py mk check_mk check_c check_cxx clean
none:
	false

SH:=sh
PYTHON:=python
PERL:=perl
#CC:=gcc
#CC:=clang
#CXX:=clang
BCC:=$(shell basename $(CC))
BCXX:=$(shell basename $(CXX))
SOURCE:=README.md
TARGETC:=hybrid_$(BCC)_c
TARGETCXX:=hybrid_$(BCXX)_cxx

all: mk

check: CHECK:=CHECK=1
check: check_mk

all2: all check_sh check_py check_pl check_c check_cxx

mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
P=printf "[ $@ ] : "
P2=true
M=$(MAKE) -s -f "$(mkfile_path)" CHECK=$(CHECK)

check2: CHECK:=CHECK=1
check2:
	-@$(P2);$(M) check_mk
	-@$(P2);$(M) check_sh
	-@$(P2);$(M) check_py
	-@$(P2);$(M) check_pl
	-@$(P2);$(M) check_c
	-@$(P2);$(M) check_cxx

check_sh:
	@$(P);$(SH) $(SOURCE) $(CHECK)

check_py:
	@$(P);$(PYTHON) -x $(SOURCE) $(CHECK)

check_pl:
	@$(P);$(PERL) -x $(SOURCE) $(CHECK)

mk:
	@printf "all:\n\t@printf 'Makefile: Hello, Makefile!\\\\n'\n"

check_mk:
	@$(P);echo "make !!"

check_c: $(TARGETC)
	@$(P);./$(TARGETC) $(CHECK)

check_cxx: $(TARGETCXX)
	@$(P);./$(TARGETCXX) $(CHECK)

$(TARGETC): $(SOURCE)
	@$(CC) -x c -o $@ $^ $(CFLAGS)

$(TARGETCXX): $(SOURCE)
	@$(CC) -x c++ -o $@ $^ $(CXXFLAGS)

clean:
	@$(RM) hybrid_*_c hybrid_*_cxx

ifdef 0

#!perl
if (@ARGV > 0) {
print "Perl !!\n";
} else {
$a="%ca=%c%s%c;printf(%ca,36,34,%ca,34,36,36,10);%c";printf($a,36,34,$a,34,36,36,10);
}
#printf("n=%d\n", $n);
#print("argv=" . @ARGV . "\n");
<<q=~q>>;

//'''

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

#ifdef __cplusplus

//C++: Hello, C++
#include <stdio.h>
int main(){const char*a="//C++: Hello, C++%c#include <stdio.h>%cint main(){const char*a=%c%s%c;printf(a,10,10,34,a,34,10);return 0;}%c";printf(a,10,10,34,a,34,10);return 0;}

#else

/*C: Hello, C!*/
main(){char*s="/*C: Hello, C!*/%cmain(){char*s=%c%s%c;printf(s,10,34,s,34,10);}%c";printf(s,10,34,s,34,10);}

#endif
#if 0
-->

# Super Quine
Welcome to Quinception

Welcome to the FrankenQuine

This is a _multiple, parallel, -- more on that later --_ [Quine](https://en.wikipedia.org/wiki/Quine_(computing)) test.

Like the marvelous [Quine Relay](https://github.com/mame/quine-relay), it consists in one file that can reproduce
itself, through mutating multiple languages/forms, by the way of processing sequentially one form into another, into another.. etc.., circle-style.

However, this particular implementation embeds all its various forms in the same file, __at the same time!__

So it is a kind of [multiquine](https://en.wikipedia.org/wiki/Quine_(computing)#Multiquines) _except_
that it provides a set of `r` languages embedded in one file (hence the parallel notion).
Also, the only needed "argument" to produce the quine in any desired language,
is the actual "compiler"/language chosen to process the input file.

## How to test it ?

### Markdown
Obviously, this very file you are currently reading is a valid `Markdown` document.

```shell
$ grep -e '\\`Markdown\\`' README.md
Obviously, this very file you are currently reading is a valid \`Markdown\` document.
$ 
```
But wait, there is more..

### Shell (sh, bash)
```shell
$ sh README.md
#include <stdio.h>
int main(){printf("Shell: Hello, C!\n");}
$ 
```
This proves that it is also a `shell script`.

### Python (2, 3)
```shell
$ python -x README.md
#include <iostream>
int main(){std::cout << "Python: Hello, C++" << std::endl;}
$ 
```
Ok, so it is also a `Python` source.

### Perl (5)
```shell
$ perl -x README.md
$ 
```
Fine, a `Perl` source too..

### C
```shell
$ cc -o a -x c README.md && ./a
print('C: Hello, Python!')
$ 
```
Cool, a `C` source too;

### C++
```shell
$ cc -o a -x c++ README.md && ./a
echo 'C++: Hello, Shell!'
$ 
```
Nice, a `C++` source too;

Are we done yet ? Not quite..

### Makefile
```shell
$ make -f README.md clean check2
[ check2 ] : make !!
[ check2 ] : Shell !!
[ check2 ] : python !!
[ check2 ] : C !!
[ check2 ] : C++ !!
$ 
```
Great! It is also a `Makefile`.

<!---
//'''
q
endif
#endif
