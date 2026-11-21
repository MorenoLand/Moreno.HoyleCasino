// FUN_005c0790  005c0790

void __thiscall FUN_005c0790(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (((param_1 == 0) || (uVar1 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar1)) {
    _invalid_parameter_noinfo();
  }
  iVar2 = param_1;
  FUN_005beeb0(param_2);
  FUN_005c0980(uVar1 + 4,*(undefined4 *)(iVar2 + 8),uVar1,iVar2,param_1);
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -4;
  return;
}

