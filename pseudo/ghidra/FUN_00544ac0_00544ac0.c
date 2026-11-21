// FUN_00544ac0  00544ac0

void FUN_00544ac0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  piVar1 = (int *)FUN_005fb300(param_1);
  (**(code **)(*piVar1 + 0xcc))(piVar1,extraout_var,uVar3);
  iVar2 = FUN_00544a70(param_1);
  if (iVar2 != -1) {
    FUN_005f2b20(iVar2,1);
  }
  return;
}

