// FUN_005d8670  005d8670

undefined4 FUN_005d8670(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_2 < 0x186be) || (0x186bf < param_2)) {
    if ((param_2 == 0x186a1) || (param_2 == 100000)) {
      FUN_005fe240(0x139a,0xffffffff,0x186a4,0);
    }
    uVar2 = FUN_0064e470(param_1,param_2);
  }
  else {
    cVar1 = FUN_0064e470(param_1,param_2);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      FUN_005fe240(0x30e789,0xffffffff,0x30e788,1);
      uVar2 = 1;
    }
  }
  return uVar2;
}

