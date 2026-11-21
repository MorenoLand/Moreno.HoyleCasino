// FUN_006424c0  006424c0

void FUN_006424c0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  short local_80c [1024];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_1 < 1) {
    FUN_005e9f20("n > 0","..\\casinoShell\\card.cpp",0x1f5);
  }
  if (0x400 < param_3) {
    FUN_005e9f20("maxCount <= MAX_DECK_SIZE","..\\casinoShell\\card.cpp",0x1f6);
  }
  for (local_8 = 0; local_8 < 0x400; local_8 = local_8 + 1) {
    local_80c[local_8] = 0;
  }
  for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    local_80c[local_8] = *(short *)(param_2 + local_8 * 2);
  }
  FUN_00641ed0(local_80c,param_3);
  local_8 = 0;
  do {
    if (param_3 <= local_8) {
LAB_006425e9:
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    if (((local_80c[local_8] != 0) &&
        (iVar1 = FUN_00641290(CONCAT22((short)((uint)local_8 >> 0x10),local_80c[local_8])),
        iVar1 == param_4)) && (param_1 = param_1 + -1, param_1 == 0)) {
      FUN_00641280(local_80c[local_8]);
      goto LAB_006425e9;
    }
    local_8 = local_8 + 1;
  } while( true );
}

