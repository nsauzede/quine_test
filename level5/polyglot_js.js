function cpr(f,...a){i=0;return f.replace(/%[csd]/g,m=>{c=a[i++];switch(m){
case"%c":return String.fromCharCode(c);case"%s":return String(c);}});}
function b(){process.stdout.write(cpr(s,42));process.exit(0)};a=0;

s="some %c string";
a
b()
