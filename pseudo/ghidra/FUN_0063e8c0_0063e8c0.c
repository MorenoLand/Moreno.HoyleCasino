// FUN_0063e8c0  0063e8c0

void __thiscall
FUN_0063e8c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,int param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 local_40c [257];
  int local_8;
  
  if (0xff < param_7) {
    FUN_005e9f20("false","..\\casinoShell\\settingsdialog.cpp",0x40c,param_1);
    param_7 = 0xff;
  }
  for (local_8 = 0; local_8 < param_7; local_8 = local_8 + 1) {
    uVar1 = FUN_00630f40(*(undefined4 *)(param_8 + local_8 * 4));
    local_40c[local_8] = uVar1;
  }
  FUN_0063e760(param_2,param_3,param_4,param_5,param_6,param_7,local_40c,param_9);
  return;
}

