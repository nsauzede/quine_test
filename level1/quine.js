function cpr(f,...a){i=0;return f.replace(/%[csd]/g,m=>{c=a[i++];switch(m){
case"%c":return String.fromCharCode(c);case"%s":return String(c);}});}
s="function cpr(f,...a){i=0;return f.replace(/%c[csd]/g,m=>{c=a[i++];switch(m){%ccase%c%cc%c:return String.fromCharCode(c);case%c%cs%c:return String(c);}});}%cs=%c%s%c;process.stdout.write(cpr(s,37,10,34,37,34,34,37,34,10,34,s,34,10));%c";process.stdout.write(cpr(s,37,10,34,37,34,34,37,34,10,34,s,34,10));
