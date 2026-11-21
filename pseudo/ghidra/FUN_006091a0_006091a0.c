// FUN_006091a0  006091a0

void FUN_006091a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_308;
  undefined1 local_300 [4];
  int local_2fc;
  int local_2f8;
  undefined *local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined1 local_2e4 [724];
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  memset(&local_2f0,0,0xc);
  local_2f0 = param_2;
  local_2ec = param_3;
  local_2e8 = 0;
  FUN_00684340(&local_2f0,local_2e4,0,0,FUN_006094b0,FUN_00609530,FUN_00609620,FUN_00609630);
  local_2fc = alGetError();
  if (local_2fc != 0) {
    FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x2eb);
  }
  local_2f8 = FUN_00685dd0(local_2e4,0xffffffff);
  local_2fc = alGetError();
  if (local_2fc != 0) {
    FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x2f0);
  }
  FUN_00685e10(local_2e4,0xffffffff);
  local_2fc = alGetError();
  if (local_2fc != 0) {
    FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x2f4);
  }
  if (*(int *)(local_2f8 + 4) == 1) {
    local_308 = 0x1101;
  }
  else {
    local_308 = 0x1103;
  }
  local_c = *(undefined4 *)(local_2f8 + 8);
  local_2f4 = &DAT_00796ed0;
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_00685e50(local_2e4,local_2f4,(int)&DAT_00e4e1c0 - local_8,0,2,1,local_300);
    local_2fc = alGetError();
    if (local_2fc != 0) {
      FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x30c);
    }
    if (iVar1 < 0) break;
    local_8 = local_8 + iVar1;
    local_2f4 = &DAT_00796ed0 + local_8;
    if ((14999999 < local_8) || (iVar1 < 1)) {
      FUN_00684240(local_2e4);
      local_2fc = alGetError();
      if (local_2fc != 0) {
        FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x322);
      }
      alBufferData(param_1,local_308,&DAT_00796ed0,local_8,local_c);
      local_2fc = alGetError();
      if (local_2fc != 0) {
        FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x327);
      }
LAB_00609497:
      __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  FUN_00684240(local_2e4);
  goto LAB_00609497;
}

