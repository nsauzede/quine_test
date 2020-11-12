import strconv
a:='import strconv%ca:=%c%s%c%cc:=char(10)%cq:=char(39)%cstrconv.v_printf(a,c,q,a,q,c,c,c,c)%c'
c:=char(10)
q:=char(39)
strconv.v_printf(a,c,q,a,q,c,c,c,c)
