// FUN_00608890  00608890

undefined4 __thiscall FUN_00608890(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0) || (0xb < param_2)) {
    FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x185,param_1,0);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_00796b58 + param_2 * 0x24);
  }
  return uVar1;
}

