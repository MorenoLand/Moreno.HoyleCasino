// FUN_005c8ae0  005c8ae0

undefined4 __thiscall FUN_005c8ae0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_3 < 0x3158d1) || (0x3158d5 < param_3)) {
    uVar2 = 0;
  }
  else {
    FUN_005de170(param_3,param_1);
    FUN_005e2f90();
    DAT_007947e0[0x13c5] = param_3;
    iVar3 = FUN_005e05c0(param_2);
    DAT_007947e0[0x13c4] = iVar3;
    cVar1 = (**(code **)(*DAT_007947e0 + 0x334))(0x15,0xffffffff);
    if (cVar1 == '\0') {
      FUN_005e3130();
    }
    uVar2 = 1;
  }
  return uVar2;
}

