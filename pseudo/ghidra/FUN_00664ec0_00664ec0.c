// FUN_00664ec0  00664ec0

int FUN_00664ec0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_var;
  undefined4 uVar5;
  undefined4 local_8;
  
  uVar1 = FUN_00664830(param_1);
  uVar5 = extraout_var;
  iVar2 = FUN_006647c0(param_1);
  iVar3 = FUN_005eb470(uVar5);
  for (local_8 = 1; local_8 < iVar2; local_8 = local_8 + 1) {
    iVar4 = FUN_005eb470(uVar5,iVar2,iVar3,uVar1);
    if (iVar3 < iVar4) {
      iVar3 = FUN_005eb470();
    }
  }
  return -iVar3;
}

