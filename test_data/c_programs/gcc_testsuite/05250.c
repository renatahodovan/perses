




void bar1 (char *, int);
void foo1 (int size)
{
  char temp[size];
  temp[size-1] = '\0';
  bar1 (temp, size);
}

void bar2 (char *, char *, char *, char *, int);
void foo2 (int size)
{
  char temp[size];
  temp[size-1] = '\0';
  {
    char temp2[size];
    {
      char temp3[size];
      {
 char temp4[size];
 bar2 (temp, temp2, temp3, temp4, size);
      }
    }
  }
}
