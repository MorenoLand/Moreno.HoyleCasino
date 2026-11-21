// FUN_00552f00  00552f00

void FUN_00552f00(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  piVar1 = (int *)FUN_005fb300(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xd0))(extraout_var,uVar3);
  }
  iVar2 = FUN_00552e20(param_1);
  if (iVar2 != -1) {
    FUN_005f2ba0(iVar2);
  }
  return;
}

