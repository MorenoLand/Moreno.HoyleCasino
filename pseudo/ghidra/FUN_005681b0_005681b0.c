// FUN_005681b0  005681b0

undefined4 FUN_005681b0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_var;
  
  iVar2 = FUN_00568250(param_2);
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    FUN_005de170(extraout_var);
    FUN_005e2f90();
    DAT_007947e0[0x13c5] = iVar2;
    iVar2 = FUN_005682a0(param_1);
    DAT_007947e0[0x13c4] = iVar2;
    cVar1 = (**(code **)(*DAT_007947e0 + 0x334))(0x12,0xffffffff);
    if (cVar1 == '\0') {
      FUN_005e3130();
    }
    uVar3 = 1;
  }
  return uVar3;
}

