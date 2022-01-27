PY:=python
PL:=perl
SH:=sh
RS:=rustc
V:=v
NELUA:=nelua

all:
	@echo -n "C: " ; $(CC) quine.c -o quine_c > /dev/null 2>&1 && ./quine_c > quine_c.c && diff quine.c quine_c.c > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
#	@echo -n "C++: " ; $(CXX) quine.cpp -o quine_cpp > /dev/null 2>&1 && ./quine_cpp > quine_cpp.cpp && diff quine.cpp quine_cpp.cpp > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "PY: " ; $(PY) quine.py > quine_py.py && diff quine.py quine_py.py > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "PL: " ; $(PL) quine.pl > quine_pl.pl && diff quine.pl quine_pl.pl > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "SH: " ; $(SH) quine.sh > quine_sh.sh && diff quine.sh quine_sh.sh > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "RS: " ; $(RS) quine.rs -o quine_rs && ./quine_rs > quine_rs.rs && diff quine.rs quine_rs.rs > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "V: " ; $(V) run quine.v > quine_v.v && diff quine.v quine_v.v > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "NELUA: " ; $(NELUA) quine.nelua > quine_nelua.nelua && diff quine.nelua quine_nelua.nelua > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"

clean:
	@$(RM) quine_c quine_c.c
#	@$(RM) quine_cpp quine_cpp.cpp
	@$(RM) quine_py.py
	@$(RM) quine_pl.pl
	@$(RM) quine_sh.sh
	@$(RM) quine_rs quine_rs.rs
	@$(RM) quine quine_v.v
	@$(RM) quine quine_nelua.nelua
