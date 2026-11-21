// FUN_00689ba0  00689ba0

int FUN_00689ba0(void)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < DAT_01631bb4; local_c = local_c + 1) {
    if (*(char *)(DAT_01631bc0 + local_c) == '\x01') {
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

