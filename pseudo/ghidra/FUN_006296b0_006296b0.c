// FUN_006296b0  006296b0

void FUN_006296b0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  
  iVar1 = FUN_0060ca40(param_1);
  if (iVar1 != 0) {
    uVar3 = extraout_var;
    piVar2 = (int *)FUN_0060ca40(param_1);
    (**(code **)(*piVar2 + 0x70))(piVar2,uVar3);
  }
  return;
}

