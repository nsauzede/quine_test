# Quine
Play with [Quines](https://en.wikipedia.org/wiki/Quine_(computing)).

Inspiration from [Quine Relay](https://github.com/mame/quine-relay), and especially from [this comment](https://github.com/mame/quine-relay/issues/11#issuecomment-679251077).

## Level1
Basic quine where processing (compiling, running..) input file a gives output file b,
where hash(a)==hash(b), because b has the exact same contents as a.

Eg: for a compiled language like C, it goes like this:

```sh
$ cc a.c -o a_c && ./a_c > b.c && diff a.c b.c && echo "QUINE!!" || echo "You lose"
```

Note: for interpreted languages like Python, there is no compilation phase, obviously:

```sh
$ python a.py > b.py && diff a.py b.py && echo "QUINE!!" || echo "You lose"
```

## Level2
Indirect quine where processing input file a in language A gives output file b in another language (or form)
that must be processed again by another tool, to obtain the original file a.
Can be scaled to more than one intermediate languages, before getting back to a.

Eg: Start from a C file that when compiled/run produces a Python file,
which when run produces the initial C file again:

```sh
$ cc a.c -o a_c && ./a_c | python > b.c && diff a.c b.c && echo "QUINE!!" || echo "You lose"
```

## Level3 : hybrid contents ? (non-quine)
Try to split parallel ways to process a single file to different outputs

Eg: Start from a c,c++,etc.. hybrid source file A (which means a single file contains multiple languages),
compile it separately as C and C++ and run both : former produces a eg: shell script, the latter eg: a Python script:

```
A -+-C++-> B=SH
   \--C--> C=PY
```