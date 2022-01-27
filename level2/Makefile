PY:=python
PL:=perl
V:=v
NELUA:=nelua

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

	@echo -n "C -> V" && $(CC) qcv.c -o a > /dev/null 2>&1 && ./a > qvc2.v && echo "" || false
	@echo -n "V -> C" && $(V) run qvc2.v > qcv2.c && echo "" || false
	@diff qcv.c qcv2.c > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"

	@echo -n "V -> C" && $(V) run qvc.v > qcv2.c && echo "" || false
	@echo -n "C -> V" && $(CC) qcv2.c -o a > /dev/null 2>&1 && ./a > qvc2.v && echo "" || false
	@diff qvc.v qvc2.v > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"

	@echo -n "V -> C" && $(V) run qvcpy.v > qcpyv2.c && echo "" || false
	@echo -n "C -> PY" && $(CC) qcpyv2.c -o a > /dev/null 2>&1 && ./a > qpyvc2.py && echo "" || false
	@echo -n "PY -> V" && $(PY) qpyvc2.py > qvcpy2.v && echo "" || false
	@diff qvcpy.v qvcpy2.v > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"

	@echo -n "NE -> PY" && $(NELUA) qnepyvc.nelua > qpyvcne2.py && echo "" || false
	@echo -n "PY -> V" && $(PY) qpyvcne2.py > qvcnepy2.v && echo "" || false
	@echo -n "V -> C" && $(V) run qvcnepy2.v > qcnepyv2.c && echo "" || false
	@echo -n "C -> NE" && $(CC) qcnepyv2.c -o a > /dev/null 2>&1 && ./a > qnepyvc2.nelua && echo "" || false
	@diff qnepyvc.nelua qnepyvc.nelua > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"

clean:
	@$(RM) a quine.py quine2.c qplpy2.pl qpypl2.py qvc2.v qcv2.c qcpyv2.c qpyvc2.py qvcpy2.v qpyvcne2.py qvcnepy2.v qcnepyv2.c qnepyvc2.nelua
