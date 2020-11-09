PY:=python

all:
	@echo -n "C -> PY" && $(CC) quine.c -o a > /dev/null 2>&1 && ./a > quine.py && echo "" || false
	@echo -n "PY -> C" && $(PY) quine.py > quine2.c && echo "" || false
	@diff quine.c quine2.c > /dev/null 2>&1 && echo "QUINE!!" || echo "You lose"

clean:
	@$(RM) a quine.py quine2.c
