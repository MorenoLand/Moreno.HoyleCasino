// FUN_006088e0  006088e0

undefined4 __thiscall FUN_006088e0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0) || (0xb < param_2)) {
    FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x195,param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_00796b4c + param_2 * 0x24);
  }
  return uVar1;
}

