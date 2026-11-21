// FUN_005b14d0  005b14d0

void FUN_005b14d0(undefined4 param_1,int param_2)

{
  if (param_2 == 0x186a1) {
    FUN_005fe640(0x186a6,0);
    FUN_005fe640(0x186a9,0);
    FUN_005fe640(0x186a7,0);
    FUN_005fe640(0x186a8,0);
    if (DAT_00795f95 == '\0') {
      FUN_005fe240(0x1399,0xffffffff,0xffffffff,0);
    }
    else {
      FUN_005fe640(0xfffffffe,0);
    }
  }
  else if (param_2 == 0x186d7) {
    FUN_005fe640(0x186da,0);
    FUN_005fe240(0x1391,0xffffffff,0xffffffff,0);
    FUN_005fe240(0x139b,0xffffffff,0xffffffff,0);
  }
  FUN_005d8670(param_1,param_2);
  return;
}

