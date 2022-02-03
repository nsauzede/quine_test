PY:=python
PL:=perl
SH:=sh
RS:=rustc
V:=v
NELUA:=nelua

all:
	@echo -n "C: " ; $(CC) quine.c -o quine_c > /dev/null 2>&1 && ./quine_c > quine_c.c && diff quine.c quine_c.c > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "Cmini: " ; $(CC) qmini.c -o qmini_c > /dev/null 2>&1 && ./qmini_c > qmini_c.c && diff qmini.c qmini_c.c > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "Calt: " ; $(CC) qalt.c -o qalt_c > /dev/null 2>&1 && ./qalt_c > qalt_c.c && diff qalt.c qalt_c.c > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
#	@echo -n "C++: " ; $(CXX) quine.cpp -o quine_cpp > /dev/null 2>&1 && ./quine_cpp > quine_cpp.cpp && diff quine.cpp quine_cpp.cpp > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "PY: " ; $(PY) quine.py > quine_py.py && diff quine.py quine_py.py > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "PYmini: " ; $(PY) qmini.py > qmini_py.py && diff qmini.py qmini_py.py > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "PYalt: " ; $(PY) qalt.py > qalt_py.py && diff qalt.py qalt_py.py > /dev/null 2>&1 && echo "QUINE!!" || (echo "You lose";diff qalt.py qalt_py.py)
	@echo -n "PL: " ; $(PL) quine.pl > quine_pl.pl && diff quine.pl quine_pl.pl > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "SH: " ; $(SH) quine.sh > quine_sh.sh && diff quine.sh quine_sh.sh > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "RS: " ; $(RS) quine.rs -o quine_rs && ./quine_rs > quine_rs.rs && diff quine.rs quine_rs.rs > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "V: " ; $(V) run quine.v > quine_v.v && diff quine.v quine_v.v > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "NELUA: " ; $(NELUA) quine.nelua > quine_nelua.nelua && diff quine.nelua quine_nelua.nelua > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"

clean:
	@$(RM) quine_c quine_c.c
	@$(RM) qmini_c qmini_c.c
	@$(RM) qalt_c qalt_c.c
#	@$(RM) quine_cpp quine_cpp.cpp
	@$(RM) quine_py.py
	@$(RM) qmini_py.py
	@$(RM) qalt_py.py
	@$(RM) quine_pl.pl
	@$(RM) quine_sh.sh
	@$(RM) quine_rs quine_rs.rs
	@$(RM) quine quine_v.v
	@$(RM) quine quine_nelua.nelua
