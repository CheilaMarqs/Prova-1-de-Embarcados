library STD;
USE STANDARD.ALL;

entity portas is
port(
  A, B : IN BIT;
  X : OUT BIT
);
end portas;

architecture circuito of portas is
Begin
  X <= NOT(NOT(A OR B));
end circuito;
