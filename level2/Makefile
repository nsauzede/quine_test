PY:=python
PL:=perl

all:
	@echo -n "C -> PY" && $(CC) quine.c -o a > /dev/null 2>&1 && ./a > quine.py && echo "" || false
	@echo -n "PY -> C" && $(PY) quine.py > quine2.c && echo "" || false
	@diff quine.c quine2.c > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"

	@echo -n "PL -> PY" && $(PL) qplpy.pl > qpypl2.py && echo "" || false
	@echo -n "PY -> PL" && $(PY) qpypl2.py > qplpy2.pl && echo "" || false
	@diff qplpy.pl qplpy2.pl > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"

	@echo -n "PY -> PL" && $(PY) qpypl.py > qplpy2.pl && echo "" || false
	@echo -n "PL -> PY" && $(PL) qplpy2.pl > qpypl2.py && echo "" || false
	@diff qpypl.py qpypl2.py > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"

clean:
	@$(RM) a quine.py quine2.c qplpy2.pl qpypl2.py
