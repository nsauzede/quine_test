/*Rust: Hello, Rust!*/
fn main(){let a="/*Rust: Hello, Rust!*/%cfn main(){let a=%c%s%c;unsafe{let(ptr,_):(*const i8,usize)=core::mem::transmute(a);extern%cC%c{pub fn printf(f:*const i8,...)->i32;}printf(ptr,10,34,ptr,34,34,34,10);}}%c";unsafe{let(ptr,_):(*const i8,usize)=core::mem::transmute(a);extern"C"{pub fn printf(f:*const i8,...)->i32;}printf(ptr,10,34,ptr,34,34,34,10);}}
