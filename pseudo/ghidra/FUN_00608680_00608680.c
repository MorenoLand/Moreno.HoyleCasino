// FUN_00608680  00608680

void __thiscall FUN_00608680(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if ((param_2 < 0) || (0xb < param_2)) {
    FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x13f);
  }
  else {
    local_10 = param_3;
    alSourcefv(*(undefined4 *)(&DAT_00796b3c + param_2 * 0x24),0x1004,&local_10,param_1);
    iVar1 = alGetError();
    if (iVar1 != 0) {
      FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x144);
    }
  }
  return;
}

