// FUN_005fb8b0  005fb8b0

undefined4 FUN_005fb8b0(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_var;
  
  piVar1 = (int *)FUN_005fb810(param_1);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0xb8))(extraout_var);
  }
  return uVar2;
}

