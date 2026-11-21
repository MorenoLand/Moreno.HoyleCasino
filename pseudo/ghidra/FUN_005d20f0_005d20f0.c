// FUN_005d20f0  005d20f0

void __thiscall FUN_005d20f0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (DAT_00795f95 == '\0') {
      (**(code **)(*DAT_0162ee84 + 0x334))(8,0xffffffff,param_1);
    }
    else {
      uVar1 = FUN_00630f40("SID_CASINO_DEMO",0);
      uVar1 = FUN_00630f40("SID_CASINO_DEMOMESSAGE",uVar1);
      FUN_0062ff10(uVar1);
    }
  }
  else if ((param_2 < 1) || (8 < param_2)) {
    if (99 < param_2) {
      FUN_005d2370(param_2);
    }
  }
  else {
    FUN_005d16b0(param_2);
  }
  return;
}

