


struct A {
    int x;
    int y;
};

baz (struct A *a)
{
  a->x = 3;
  a->y = 2;
}

foo (int i)
{
  struct A a;


  baz (&a);

  if (i > 10)
    a.x = i;
  else
    a.x = i;


  if (a.x != i)
    link_error ();

  return a.x;
}

main ()
{
  foo (30);
  return 0;
}