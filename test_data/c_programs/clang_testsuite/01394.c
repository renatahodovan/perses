vector signed char sc, sc2;
vector unsigned char uc, uc2;
vector bool char bc, bc2;
vector signed short ss, ss2;
vector unsigned short us, us2;
vector bool short bs, bs2;
vector signed int si, si2;
vector unsigned int ui, ui2;
vector bool int bi, bi2;
vector signed long long sl, sl2;
vector unsigned long long ul, ul2;
vector bool long long bl, bl2;
vector double fd, fd2;
vector long ll;
vector float ff;
signed char sc_scalar;
unsigned char uc_scalar;
signed short ss_scalar;
unsigned short us_scalar;
signed int si_scalar;
unsigned int ui_scalar;
signed long sl_scalar;
unsigned long ul_scalar;
double fd_scalar;
void foo(void)
{
  sc = sc2;
  uc = uc2;
  bc = bc2;
  ss = ss2;
  us = us2;
  bs = bs2;
  si = si2;
  ui = ui2;
  bi = bi2;
  sl = sl2;
  ul = ul2;
  bl = bl2;
  fd = fd2;
  sc = uc2;
  sc = bc2;
  uc = sc2;
  uc = bc2;
  bc = sc2;
  bc = uc2;
  sc = sc_scalar;
  sc = uc_scalar;
  uc = sc_scalar;
  uc = uc_scalar;
  bc = sc_scalar;
  bc = uc_scalar;
  sc = ss2;
  sc = si2;
  sc = sl2;
  sc = fd2;
  ss = sc2;
  si = sc2;
  sl = sc2;
  fd = sc2;
  uc = us2;
  uc = ui2;
  uc = ul2;
  uc = fd2;
  us = uc2;
  ui = uc2;
  ul = uc2;
  fd = uc2;
  bc = us2;
  bc = ui2;
  bc = ul2;
  bc = fd2;
  bs = bc2;
  bi = bc2;
  bl = bc2;
  fd = bc2;
  sc = (vector signed char)bc2;
  bc = (vector bool char)uc2;
  uc = (vector unsigned char)sc2;
  ss = (vector signed short)bs2;
  bs = (vector bool short)us2;
  us = (vector unsigned short)ss2;
  si = (vector signed int)bi2;
  bi = (vector bool int)ui2;
  ui = (vector unsigned int)si2;
  sl = (vector signed long long)bl2;
  bl = (vector bool long long)ul2;
  ul = (vector unsigned long long)fd2;
  fd = (vector double)sl2;
  sc = (vector signed char)bs2;
  bc = (vector bool char)us2;
  uc = (vector unsigned char)fd2;
  ss = (vector signed short)bi2;
  bs = (vector bool short)ui2;
  us = (vector unsigned short)fd2;
  si = (vector signed int)bl2;
  bi = (vector bool int)ul2;
  ui = (vector unsigned int)fd2;
  sl = (vector signed long long)bc2;
  bl = (vector bool long long)uc2;
  ul = (vector unsigned long long)sc2;
  fd = (vector double)sc2;
  ++sc2;
  ++uc2;
  ++bc2;
  ++ss2;
  ++us2;
  ++bs2;
  ++si2;
  ++ui2;
  ++bi2;
  ++sl2;
  ++ul2;
  ++bl2;
  ++fd2;
  sc++;
  uc++;
  bc++;
  ss++;
  us++;
  bs++;
  si++;
  ui++;
  bi++;
  sl++;
  ul++;
  bl++;
  fd++;
  --sc2;
  --uc2;
  --bc2;
  --ss2;
  --us2;
  --bs2;
  --si2;
  --ui2;
  --bi2;
  --sl2;
  --ul2;
  --bl2;
  --fd2;
  sc--;
  uc--;
  bc--;
  ss--;
  us--;
  bs--;
  si--;
  ui--;
  bi--;
  sl--;
  ul--;
  bl--;
  fd--;
  sc = +sc2;
  uc = +uc2;
  bc = +bc2;
  ss = +ss2;
  us = +us2;
  bs = +bs2;
  si = +si2;
  ui = +ui2;
  bi = +bi2;
  sl = +sl2;
  ul = +ul2;
  bl = +bl2;
  fd = +fd2;
  sc = +si2;
  ui = +si2;
  ui = +bi2;
  sc = -sc2;
  uc = -uc2;
  bc = -bc2;
  ss = -ss2;
  us = -us2;
  bs = -bs2;
  si = -si2;
  ui = -ui2;
  bi = -bi2;
  sl = -sl2;
  ul = -ul2;
  bl = -bl2;
  fd = -fd2;
  sc = -si2;
  ui = -si2;
  ui = -bi2;
  sc = ~sc2;
  uc = ~uc2;
  bc = ~bc2;
  ss = ~ss2;
  us = ~us2;
  bs = ~bs2;
  si = ~si2;
  ui = ~ui2;
  bi = ~bi2;
  sl = ~sl2;
  ul = ~ul2;
  bl = ~bl2;
  fd = ~fd2;
  sc = ~si2;
  ui = ~si2;
  ui = ~bi2;
  sc = sc + sc2;
  sc = sc + uc2;
  sc = uc + sc2;
  sc = sc + bc2;
  sc = bc + sc2;
  uc = uc + uc2;
  uc = sc + uc2;
  uc = uc + sc2;
  uc = bc + uc2;
  uc = uc + bc2;
  bc = bc + bc2;
  bc = bc + uc2;
  bc = uc + bc2;
  bc = bc + sc2;
  bc = sc + bc2;
  sc = sc + sc_scalar;
  sc = sc + uc_scalar;
  sc = sc_scalar + sc;
  sc = uc_scalar + sc;
  uc = uc + sc_scalar;
  uc = uc + uc_scalar;
  uc = sc_scalar + uc;
  uc = uc_scalar + uc;
  ss = ss + ss2;
  us = us + us2;
  bs = bs + bs2;
  si = si + si2;
  ui = ui + ui2;
  bi = bi + bi2;
  sl = sl + sl2;
  ul = ul + ul2;
  bl = bl + bl2;
  fd = fd + fd2;
  fd = fd + ul2;
  fd = sl + fd2;
  sc += sc2;
  sc += uc2;
  sc += bc2;
  uc += uc2;
  uc += sc2;
  uc += bc2;
  bc += bc2;
  bc += sc2;
  bc += uc2;
  sc += ss2;
  sc += si2;
  sc += sl2;
  sc += fd2;
  sc += sc_scalar;
  sc += uc_scalar;
  uc += sc_scalar;
  uc += uc_scalar;
  ss += ss2;
  us += us2;
  bs += bs2;
  si += si2;
  ui += ui2;
  bi += bi2;
  sl += sl2;
  ul += ul2;
  bl += bl2;
  fd += fd2;
  sc = sc - sc2;
  uc = uc - uc2;
  bc = bc - bc2;
  sc = uc - sc2;
  sc = sc - bc2;
  uc = bc - uc2;
  sc -= sc2;
  uc -= uc2;
  bc -= bc2;
  sc -= uc2;
  uc -= bc2;
  bc -= sc2;
  ss -= ss2;
  us -= us2;
  bs -= bs2;
  si -= si2;
  ui -= ui2;
  bi -= bi2;
  sl -= sl2;
  ul -= ul2;
  bl -= bl2;
  fd -= fd2;
  sc = sc * sc2;
  uc = uc * uc2;
  bc = bc * bc2;
  sc = uc * sc2;
  sc = sc * bc2;
  uc = bc * uc2;
  sc *= sc2;
  uc *= uc2;
  bc *= bc2;
  sc *= uc2;
  uc *= bc2;
  bc *= sc2;
  ss *= ss2;
  us *= us2;
  bs *= bs2;
  si *= si2;
  ui *= ui2;
  bi *= bi2;
  sl *= sl2;
  ul *= ul2;
  bl *= bl2;
  fd *= fd2;
  sc = sc / sc2;
  uc = uc / uc2;
  bc = bc / bc2;
  sc = uc / sc2;
  sc = sc / bc2;
  uc = bc / uc2;
  sc /= sc2;
  uc /= uc2;
  bc /= bc2;
  sc /= uc2;
  uc /= bc2;
  bc /= sc2;
  ss /= ss2;
  us /= us2;
  bs /= bs2;
  si /= si2;
  ui /= ui2;
  bi /= bi2;
  sl /= sl2;
  ul /= ul2;
  bl /= bl2;
  fd /= fd2;
  sc = sc % sc2;
  uc = uc % uc2;
  bc = bc % bc2;
  sc = uc % sc2;
  sc = sc % bc2;
  uc = bc % uc2;
  sc %= sc2;
  uc %= uc2;
  bc %= bc2;
  sc %= uc2;
  uc %= bc2;
  bc %= sc2;
  ss %= ss2;
  us %= us2;
  bs %= bs2;
  si %= si2;
  ui %= ui2;
  bi %= bi2;
  sl %= sl2;
  ul %= ul2;
  bl %= bl2;
  fd %= fd2;
  sc = sc & sc2;
  sc = sc & uc2;
  sc = uc & sc2;
  sc = sc & bc2;
  sc = bc & sc2;
  uc = uc & uc2;
  uc = sc & uc2;
  uc = uc & sc2;
  uc = bc & uc2;
  uc = uc & bc2;
  bc = bc & bc2;
  bc = bc & uc2;
  bc = uc & bc2;
  bc = bc & sc2;
  bc = sc & bc2;
  fd = fd & fd2;
  fd = bl & fd2;
  fd = fd & bl2;
  fd = fd & sl2;
  fd = fd & ul2;
  sc &= sc2;
  sc &= uc2;
  sc &= bc2;
  uc &= uc2;
  uc &= sc2;
  uc &= bc2;
  bc &= bc2;
  bc &= sc2;
  bc &= uc2;
  sc &= ss2;
  sc &= si2;
  sc &= sl2;
  sc &= fd2;
  us &= bc2;
  ui &= bc2;
  ul &= bc2;
  fd &= bc2;
  ss &= ss2;
  us &= us2;
  bs &= bs2;
  si &= si2;
  ui &= ui2;
  bi &= bi2;
  sl &= sl2;
  ul &= ul2;
  bl &= bl2;
  sc = sc | sc2;
  sc = sc | uc2;
  sc = sc | bc2;
  uc = uc | uc2;
  uc = sc | uc2;
  uc = bc | uc2;
  bc = bc | bc2;
  bc = uc | bc2;
  bc = bc | sc2;
  fd = fd | fd2;
  fd = bl | fd2;
  ss |= ss2;
  us |= us2;
  bs |= bs2;
  si |= si2;
  ui |= ui2;
  bi |= bi2;
  sl |= sl2;
  ul |= ul2;
  bl |= bl2;
  fd |= bl2;
  fd |= fd2;
  sc = sc ^ sc2;
  sc = sc ^ uc2;
  sc = sc ^ bc2;
  uc = uc ^ uc2;
  uc = sc ^ uc2;
  uc = bc ^ uc2;
  bc = bc ^ bc2;
  bc = uc ^ bc2;
  bc = bc ^ sc2;
  fd = fd ^ fd2;
  fd = bl ^ fd2;
  ss ^= ss2;
  us ^= us2;
  bs ^= bs2;
  si ^= si2;
  ui ^= ui2;
  bi ^= bi2;
  sl ^= sl2;
  ul ^= ul2;
  bl ^= bl2;
  fd ^= bl2;
  fd ^= fd2;
  sc = sc << sc2;
  sc = sc << uc2;
  sc = uc << sc2;
  sc = sc << bc2;
  sc = bc << sc2;
  uc = uc << uc2;
  uc = sc << uc2;
  uc = uc << sc2;
  uc = bc << uc2;
  uc = uc << bc2;
  bc = bc << bc2;
  bc = bc << uc2;
  bc = uc << bc2;
  bc = bc << sc2;
  bc = sc << bc2;
  sc = sc << 1;
  sc = sc << 1.0f;
  sc = sc << sc_scalar;
  sc = sc << uc_scalar;
  sc = sc << ss_scalar;
  sc = sc << us_scalar;
  sc = sc << si_scalar;
  sc = sc << ui_scalar;
  sc = sc << sl_scalar;
  sc = sc << ul_scalar;
  sc = sc_scalar << sc;
  sc = uc_scalar << sc;
  uc = uc << sc_scalar;
  uc = uc << uc_scalar;
  uc = sc_scalar << uc;
  uc = uc_scalar << uc;
  ss = ss << ss2;
  ss = ss << ss_scalar;
  us = us << us2;
  us = us << us_scalar;
  bs = bs << bs2;
  si = si << si2;
  si = si << si_scalar;
  ui = ui << ui2;
  ui = ui << ui_scalar;
  bi = bi << bi2;
  sl = sl << sl2;
  sl = sl << sl_scalar;
  ul = ul << ul2;
  ul = ul << ul_scalar;
  bl = bl << bl2;
  fd = fd << fd2;
  fd = fd << ul2;
  fd = sl << fd2;
  sc <<= sc2;
  sc <<= uc2;
  sc <<= bc2;
  sc <<= sc_scalar;
  uc <<= uc2;
  uc <<= sc2;
  uc <<= bc2;
  uc <<= uc_scalar;
  bc <<= bc2;
  bc <<= sc2;
  bc <<= uc2;
  sc <<= ss2;
  sc <<= si2;
  sc <<= sl2;
  sc <<= fd2;
  ss <<= ss2;
  ss <<= ss_scalar;
  us <<= us2;
  us <<= us_scalar;
  bs <<= bs2;
  si <<= si2;
  si <<= si_scalar;
  ui <<= ui2;
  ui <<= ui_scalar;
  bi <<= bi2;
  sl <<= sl2;
  sl <<= sl_scalar;
  ul <<= ul2;
  ul <<= ul_scalar;
  bl <<= bl2;
  fd <<= fd2;
  sc = sc >> sc2;
  sc = sc >> uc2;
  sc = uc >> sc2;
  sc = sc >> bc2;
  sc = bc >> sc2;
  uc = uc >> uc2;
  uc = sc >> uc2;
  uc = uc >> sc2;
  uc = bc >> uc2;
  uc = uc >> bc2;
  bc = bc >> bc2;
  bc = bc >> uc2;
  bc = uc >> bc2;
  bc = bc >> sc2;
  bc = sc >> bc2;
  sc = sc >> 1;
  sc = sc >> 1.0f;
  sc = sc >> sc_scalar;
  sc = sc >> uc_scalar;
  sc = sc >> ss_scalar;
  sc = sc >> us_scalar;
  sc = sc >> si_scalar;
  sc = sc >> ui_scalar;
  sc = sc >> sl_scalar;
  sc = sc >> ul_scalar;
  sc = sc_scalar >> sc;
  sc = uc_scalar >> sc;
  uc = uc >> sc_scalar;
  uc = uc >> uc_scalar;
  uc = sc_scalar >> uc;
  uc = uc_scalar >> uc;
  ss = ss >> ss2;
  ss = ss >> ss_scalar;
  us = us >> us2;
  us = us >> us_scalar;
  bs = bs >> bs2;
  si = si >> si2;
  si = si >> si_scalar;
  ui = ui >> ui2;
  ui = ui >> ui_scalar;
  bi = bi >> bi2;
  sl = sl >> sl2;
  sl = sl >> sl_scalar;
  ul = ul >> ul2;
  ul = ul >> ul_scalar;
  bl = bl >> bl2;
  fd = fd >> fd2;
  fd = fd >> ul2;
  fd = sl >> fd2;
  sc >>= sc2;
  sc >>= uc2;
  sc >>= bc2;
  sc >>= sc_scalar;
  uc >>= uc2;
  uc >>= sc2;
  uc >>= bc2;
  uc >>= uc_scalar;
  bc >>= bc2;
  bc >>= sc2;
  bc >>= uc2;
  sc >>= ss2;
  sc >>= si2;
  sc >>= sl2;
  sc >>= fd2;
  ss >>= ss2;
  ss >>= ss_scalar;
  us >>= us2;
  us >>= us_scalar;
  bs >>= bs2;
  si >>= si2;
  si >>= si_scalar;
  ui >>= ui2;
  ui >>= ui_scalar;
  bi >>= bi2;
  sl >>= sl2;
  sl >>= sl_scalar;
  ul >>= ul2;
  ul >>= ul_scalar;
  bl >>= bl2;
  fd >>= fd2;
  (void)(sc == sc2);
  (void)(uc == uc2);
  (void)(bc == bc2);
  (void)(sc == uc);
  (void)(sc == bc);
  (void)(uc == sc);
  (void)(uc == bc);
  (void)(bc == sc);
  (void)(bc == uc);
  (void)(ss == ss2);
  (void)(us == us2);
  (void)(bs == bs2);
  (void)(si == si2);
  (void)(ui == ui2);
  (void)(bi == bi2);
  (void)(sl == sl2);
  (void)(ul == ul2);
  (void)(bl == bl2);
  (void)(fd == fd2);
  (void)(fd == ul);
  (void)(ul == fd);
  (void)(sc != sc2);
  (void)(uc != uc2);
  (void)(bc != bc2);
  (void)(sc != uc);
  (void)(sc != bc);
  (void)(ss != ss2);
  (void)(us != us2);
  (void)(bs != bs2);
  (void)(si != si2);
  (void)(ui != ui2);
  (void)(bi != bi2);
  (void)(sl != sl2);
  (void)(ul != ul2);
  (void)(bl != bl2);
  (void)(fd != fd2);
  (void)(sc <= sc2);
  (void)(uc <= uc2);
  (void)(bc <= bc2);
  (void)(sc <= uc);
  (void)(sc <= bc);
  (void)(ss <= ss2);
  (void)(us <= us2);
  (void)(bs <= bs2);
  (void)(si <= si2);
  (void)(ui <= ui2);
  (void)(bi <= bi2);
  (void)(sl <= sl2);
  (void)(ul <= ul2);
  (void)(bl <= bl2);
  (void)(fd <= fd2);
  (void)(sc >= sc2);
  (void)(uc >= uc2);
  (void)(bc >= bc2);
  (void)(sc >= uc);
  (void)(sc >= bc);
  (void)(ss >= ss2);
  (void)(us >= us2);
  (void)(bs >= bs2);
  (void)(si >= si2);
  (void)(ui >= ui2);
  (void)(bi >= bi2);
  (void)(sl >= sl2);
  (void)(ul >= ul2);
  (void)(bl >= bl2);
  (void)(fd >= fd2);
  (void)(sc < sc2);
  (void)(uc < uc2);
  (void)(bc < bc2);
  (void)(sc < uc);
  (void)(sc < bc);
  (void)(ss < ss2);
  (void)(us < us2);
  (void)(bs < bs2);
  (void)(si < si2);
  (void)(ui < ui2);
  (void)(bi < bi2);
  (void)(sl < sl2);
  (void)(ul < ul2);
  (void)(bl < bl2);
  (void)(fd < fd2);
  (void)(sc > sc2);
  (void)(uc > uc2);
  (void)(bc > bc2);
  (void)(sc > uc);
  (void)(sc > bc);
  (void)(ss > ss2);
  (void)(us > us2);
  (void)(bs > bs2);
  (void)(si > si2);
  (void)(ui > ui2);
  (void)(bi > bi2);
  (void)(sl > sl2);
  (void)(ul > ul2);
  (void)(bl > bl2);
  (void)(fd > fd2);
}