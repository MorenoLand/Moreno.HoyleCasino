// FUN_00608930  00608930

void __thiscall FUN_00608930(undefined4 param_1,int param_2,undefined4 param_3)

{
  if ((param_2 < 0) || (0xb < param_2)) {
    FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x19d,param_1);
  }
  else {
    *(undefined4 *)(&DAT_00796b4c + param_2 * 0x24) = param_3;
  }
  return;
}

