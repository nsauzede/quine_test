py='py=%c%s%c;v=%c%s%c;c=%c%s%c;print(v%%(39,v,39,39,c,39,39,py,39),end=%c%c)';v='v:=%c%s%cc:=%c%s%cpy:=%c%s%cC.printf(c.str,34,c.str,34,34,py.str,34,34,v.str,34)';c='main(){char*c=%c%s%c,*py=%c%s%c,*v=%c%s%c;printf(py,39,py,39,39,v,39,39,c,39,34,34);}';print(v%(39,v,39,39,c,39,39,py,39),end="")