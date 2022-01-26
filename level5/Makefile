PYTHON:=python
V:=v
TARGET:=a0p.py a0v.v a0c.c
all: a0c.out.c

%0.exe: %0.c
	@cat $^
	@$(CC) -o $@ $^ > /dev/null 2>&1

%.py: %0.exe
	./$^ > $@
	@cat $@

%.v: %.py
	$(PYTHON) $^ > $@
	@cat $@

%.out.c: %.v
	$(V) run $^ > $@
	@cat $@

clean:
	@$(RM) $(TARGET) a0c0 *.out.c
