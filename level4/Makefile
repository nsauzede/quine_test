
TARGET:=
TARGET+=h0c
TARGET+=h0cpp
TARGET+=h0ccpp
TARGET+=h0cppc
TARGET+=h0c.c
TARGET+=h0cpp.c
TARGET+=h0ccpp.c
TARGET+=h0cppc.c
TARGET+=h0cppcc.c
TARGET+=h0ccppcpp.c

CFLAGS:=-g -O0
CXXFLAGS:=-g -O0

all: $(TARGET)

h0c: h0.c
	gcc -o $@ $(CFLAGS) -x c $^
h0c.c: h0c

h0cpp: h0.c
	gcc -o $@ $(CXXFLAGS) -x c++ $^
h0cpp.c: h0cpp

h0ccpp: h0c.c
	gcc -o $@ $(CXXFLAGS) -x c++ $^
h0ccpp.c: h0ccpp

h0cppc: h0cpp.c
	gcc -o $@ $(CFLAGS) -x c $^
h0cppc.c: h0cppc

h0cppcc.c: h0cppcc
	./$^ > $@
	md5sum h0cppc.c h0cppcc.c

h0ccppcpp.c: h0ccppcpp
	./$^ > $@
	md5sum h0cppc.c h0cppcc.c

h0%.c: h0%
	./$^ > $@
	#cat $@

h0%c: h0%.c
	gcc -o $@ $(CFLAGS) -x c $^

h0%cpp: h0%.c
	gcc -o $@ $(CXXFLAGS) -x c++ $^

clean:
	$(RM) $(TARGET)
