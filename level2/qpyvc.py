py='py=%c%s%c%cv=%c%s%c%cc=%c%s%c%cprint(v%%(39,v,39,10,39,c,39,10,39,py,39,10))%c'
v='v:=%c%s%c%cc:=%c%s%c%cpy:=%c%s%c%cC.printf(c.str,34,c.str,34,10,34,py.str,34,10,34,v.str,34,10,10)'
c='main(){char*c=%c%s%c,%c*py=%c%s%c,%c*v=%c%s%c;%cprintf(py,39,py,39,10,39,v,39,10,39,c,39,10,10);}%c'
print(v%(39,v,39,10,39,c,39,10,39,py,39,10))
