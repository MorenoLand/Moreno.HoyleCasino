// FUN_00642620  00642620

void FUN_00642620(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 extraout_var;
  undefined2 local_80c [1024];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_1 < 1) {
    FUN_005e9f20("n > 0","..\\casinoShell\\card.cpp",0x217);
  }
  if (0x400 < param_3) {
    FUN_005e9f20("maxCount <= MAX_DECK_SIZE","..\\casinoShell\\card.cpp",0x218);
  }
  for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    local_80c[local_8] = *(undefined2 *)(param_2 + local_8 * 2);
  }
  FUN_00641e20(local_80c,param_3);
  local_8 = 0;
  do {
    if (param_3 <= local_8) {
LAB_0064271e:
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    if (((*(short *)(param_2 + local_8 * 2) != 0) &&
        (iVar1 = FUN_00641290(local_80c[local_8]), iVar1 == param_4)) &&
       (param_1 = param_1 + -1, param_1 == 0)) {
      FUN_00641280(CONCAT22(extraout_var,local_80c[local_8]));
      goto LAB_0064271e;
    }
    local_8 = local_8 + 1;
  } while( true );
}

