// FUN_0064d1d0  0064d1d0

int FUN_0064d1d0(void)

{
  int iVar1;
  __time64_t local_14;
  tm *local_c;
  int local_8;
  
  local_8 = -1;
  _time64(&local_14);
  local_c = _localtime64(&local_14);
  if ((0x15 < local_c->tm_hour) || (local_c->tm_hour < 4)) {
    local_8 = 0x446;
  }
  if ((4 < local_c->tm_hour) && (local_c->tm_hour < 10)) {
    local_8 = 0x445;
  }
  if (local_c->tm_hour == 0xc) {
    local_8 = 0x447;
  }
  if ((local_8 == -1) || (iVar1 = FUN_0062fbf0(3), iVar1 == 0)) {
    switch(local_c->tm_wday) {
    case 0:
      local_8 = 0x3ec;
      break;
    case 1:
      local_8 = 0x3ea;
      break;
    case 2:
      local_8 = 0x3ee;
      break;
    case 3:
      local_8 = 0x3ef;
      break;
    case 4:
      local_8 = 0x3ed;
      break;
    case 5:
      local_8 = 0x3e9;
      break;
    case 6:
      local_8 = 0x3eb;
    }
  }
  return local_8;
}

