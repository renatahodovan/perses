

int *a;
void
foo ()
{
  do
    {
      a[16] = (a[1] ^ a[0]) << 1 | a[1];
      a[17] = (a[0] ^ a[1]) << 1 | a[0];
      a[18] = (a[0] ^ a[1]) << 1 | a[0];
      a[19] = (a[0] ^ a[1]) << 1 | a[0];
      a[20] = (a[0] ^ a[1]) << 1 | a[0];
      a[21] = (a[0] ^ a[1]) << 1 | a[0];
      a[22] = (a[0] ^ a[1]) << 1 | a[0];
      a[23] = (a[20] ^ a[1]) << 1 | a[9];
      a += 8;
    }
  while (1);
}