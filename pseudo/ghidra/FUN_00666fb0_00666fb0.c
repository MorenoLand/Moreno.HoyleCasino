// FUN_00666fb0  00666fb0

undefined4 FUN_00666fb0(char *param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x2b < local_8) {
      return 0xffffffff;
    }
    iVar1 = _stricmp(s_NOBODY_00780164 + local_8 * 0x44,param_1);
    if (iVar1 == 0) break;
    local_8 = local_8 + 1;
  }
  return *(undefined4 *)(&DAT_00780160 + local_8 * 0x44);
}

