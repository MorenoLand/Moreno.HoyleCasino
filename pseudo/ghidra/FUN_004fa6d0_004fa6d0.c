// FUN_004fa6d0  004fa6d0

void __thiscall FUN_004fa6d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0x186a1) {
    cVar1 = FUN_005da830(0x186a1,param_1);
    if (cVar1 == '\0') {
      FUN_005fe240(0x1399,0xffffffff,0xffffffff,0);
    }
    else {
      FUN_005fe640(0xfffffffe,0);
    }
    FUN_005fe640(0x186a6,0);
    FUN_005fe640(0x186a9,0);
    FUN_005fe640(0x186a7,0);
    FUN_005fe640(0x186a8,0);
  }
  else if (param_3 == 0x186c3) {
    FUN_005fe640(0x186c6,0);
    cVar1 = FUN_005da830();
    if (cVar1 != '\0') {
      FUN_005fe640(0x186c5,0);
      FUN_005fe640(0xfffffffe,0);
      FUN_005fe640(0xfffffffe,0);
    }
  }
  else if (param_3 == 0x186d7) {
    FUN_005fe640(0x186da,0);
    FUN_005fe240(0x1391,0xffffffff,0xffffffff,0);
    FUN_005fe240(0x139c,0xffffffff,0xffffffff,1);
    FUN_005fe240(0x139b,0xffffffff,0xffffffff,0);
    cVar1 = FUN_005da830();
    if (cVar1 != '\0') {
      FUN_005fe640(0x186d9,0);
      FUN_005fe640(0x186d6,0);
      FUN_005fe240(0x30e7a4,0xffffffff,0xfffffffe,0);
      FUN_005fe240(0x186d6,0xffffffff,0xfffffffe,0);
    }
  }
  FUN_005d8670(param_2,param_3);
  return;
}

