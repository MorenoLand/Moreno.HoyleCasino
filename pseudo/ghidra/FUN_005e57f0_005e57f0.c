// FUN_005e57f0  005e57f0

bool FUN_005e57f0(undefined4 param_1)

{
  int *piVar1;
  undefined4 extraout_var;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_005fb210(param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = extraout_var;
    FUN_005f5d50(0);
    (**(code **)(*piVar1 + 0xb0))(1,uVar2);
  }
  return piVar1 != (int *)0x0;
}

