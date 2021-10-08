fn main() { 
   let mut a:u8;
   let mut x:u8;
   let mut b:u8;
  a= 1;
  b=1;
  x=!(a | b);
  x=!x;
  println!("NOT({} NOR {})= {}",a,b,x);
  a= 0;
  b=1;
  x=!(a | b);
  x=!x;
  println!("NOT({} NOR {})= {}",a,b,x);
  a= 1;
  b=0;
  x=!(a | b);
  x=!x;
  println!("NOT({} NOR {})= {}",a,b,x);
  a= 0;
  b=0;
  x=!(a | b);
  x=!x;
  println!("NOT({} NOR {})= {}",a,b,x);
 }
