// FUN_00608550  00608550

void __thiscall FUN_00608550(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || (0xb < param_2)) {
    FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x120);
  }
  else {
    *(undefined4 *)(&DAT_00796b50 + param_2 * 0x24) = param_3;
    alSourcef(*(undefined4 *)(&DAT_00796b3c + param_2 * 0x24),0x100a,param_3,param_1);
    iVar1 = alGetError();
    if (iVar1 != 0) {
      FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x125);
    }
  }
  return;
}

