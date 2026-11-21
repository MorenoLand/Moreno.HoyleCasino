// FUN_005730e0  005730e0

undefined4 __thiscall FUN_005730e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_3 == 0x30fef8) {
    FUN_005de170(param_1);
    FUN_005e2f90();
    DAT_007947e0[0x13c5] = -1;
    iVar3 = FUN_005e05c0(param_2);
    DAT_007947e0[0x13c4] = iVar3;
    cVar1 = (**(code **)(*DAT_007947e0 + 0x334))(0x14,0xffffffff);
    if (cVar1 == '\0') {
      FUN_005e3130();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

