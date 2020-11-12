PY:=python
PL:=perl
V:=v

all:
	@echo -n "C: " ; $(CC) quine.c -o quine_c > /dev/null 2>&1 && ./quine_c > quine_c.c && diff quine.c quine_c.c > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "PY: " ; $(PY) quine.py > quine_py.py && diff quine.py quine_py.py > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "PL: " ; $(PL) quine.pl > quine_pl.pl && diff quine.pl quine_pl.pl > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"
	@echo -n "V: " ; $(V) run quine.v > quine_v.v && diff quine.v quine_v.v > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"

clean:
	@$(RM) quine_c quine_c.c
	@$(RM) quine_py.py
	@$(RM) quine_pl.pl
	@$(RM) quine quine_v.v
