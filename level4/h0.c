///bin/true : or false ? # \
_="It's a bird... It's a plane... It's..._ \
<!--"
#if 0
_=''''
#elif 1
#ifdef __cplusplus
//C++: Hello, C++!
#include <stdio.h>
int main(){const char*a="\
///bin/true : or falseA ? # \\%c\
_=%cIt's a bird... It's a plane... It's..._ \\%c\
<!--%c%c\
#if 0%c\
_=''''%c\
#elif 1%c\
#ifdef __cplusplus%c\
//C++: Hello, C++!%c\
#include <stdio.h>%c\
int main(){const char*a=%c%s%c;printf(a,10,34,10,34,10,10,10,10,10,10,10,34,a,34,10,10,10,10,34,a,34,10,10,10,10,10,10,10,10,10,10,10);return 0;}%c\
#else%c\
/*C++: Hello, C!*/%c\
#include <stdio.h>%c\
int main(){char*s=%c\
///bin/true : or falseB ? # %%c%%c%%c\
_=%%cIt's a bird... It's a plane... It's..._ %%c%%c%%c\
<!--%%c%%c\
#if 0%%c\
_=''''%%c\
#elif 1%%c\
#ifdef __cplusplus%%c\
#else%%c\
/*C++: Hello, C!*/%%c\
#include <stdio.h>%%c\
int main(){char*s=%%c%%s%%c;printf(s,92,92,10,34,92,92,10,34,10,10,10,10,10,10,10,10,34,s,34,10,10,10,10,10,10,10,10,10,10,10);return 0;}%%c\
#endif%%c\
#else%%c\
-->%%c\
# C++ Superquine : FranquenQuine, Quinception, Quinea pig%%c\
Bla%%c\
<!---%%c\
//'''%%c\
q%%c\
endif%%c\
#endif%%c\
%c;printf(s,92,10,34,92,10,34,10,10,10,10,10,10,10,10,34,s,34,10,10,10,10,10,10,10,10,10,10,10);return 0;}%c\
#endif%c\
#else%c\
-->%c\
# C++ Superquine : FranquenQuine, Quinception, Quinea pig%c\
Bla%c\
<!---%c\
//'''%c\
q%c\
endif%c\
#endif%c\
";printf(a,10,34,10,34,10,10,10,10,10,10,10,34,a,34,10,10,10,10,34,34,10,10,10,10,10,10,10,10,10,10,10);return 0;}
#else
/*C: Hello, C!*/
#include <stdio.h>
int main(){char*s="\
///bin/true : or false1 ? # \\%c\
_=%cIt's a bird... It's a plane... It's..._ \\%c\
<!--%c%c\
#if 0%c\
_=''''%c\
#elif 1%c\
#ifdef __cplusplus%c\
//C: Hello, C++!%c\
#include <stdio.h>%c\
int main(){const char*a=%c\
///bin/true : or false2 ? # %%c%%c%%c\
_=%%cIt's a bird... It's a plane... It's..._ %%c%%c%%c\
<!--%%c%%c\
#if 0%%c\
_=''''%%c\
#elif 1%%c\
#ifdef __cplusplus%%c\
//C: Hello, C++!%%c\
#include <stdio.h>%%c\
int main(){const char*a=%%c%%s%%c;printf(a,92,92,10,34,92,92,10,34,10,10,10,10,10,10,10,34,a,34,10,10,10,10,34,a,34,10,10,10,10,10,10,10,10,10,10,10);return 0;}%%c\
#else%%c\
/*C: Hello, C!*/%%c\
#include <stdio.h>%%c\
int main(){char*s=%%c%%s%%c;printf(s,10,10,34,s,34,10);return 0;}%%c\
#endif%%c\
#else%%c\
-->%%c\
# C Superquine : FranquenQuine, Quinception, Quinea pig%%c\
Bla%%c\
<!---%%c\
//'''%%c\
q%%c\
endif%%c\
#endif%%c\
%c;printf(a,92,92,10,34,92,92,10,34,10,10,10,10,10,10,10,34,a,34,10,10,10,10,34,a,34,10,10,10,10,10,10,10,10,10,10,10,10,10,10);return 0;}%c\
#else%c\
/*C: Hello, C!*/%c\
#include <stdio.h>%c\
int main(){char*s=%c%s%c;printf(s,10,10,34,s,34,10);return 0;}%c\
#endif%c\
#else%c\
-->%c\
# C Superquine : FranquenQuine, Quinception, Quinea pig%c\
Bla%c\
<!---%c\
//'''%c\
q%c\
endif%c\
#endif%c\
";printf(s,10,34,10,34,10,10,10,10,10,10,10,34,34,10,10,10,10,34,s,34,10,10,10,10,10,10,10,10,10,10,10,10,10,10);return 0;}
#endif
#else
-->
# Superquine : FranquenQuine, Quinception, Quinea pig
Bla
<!---
//'''
q
endif
#endif
