// FUN_0063a3e0  0063a3e0

void __thiscall FUN_0063a3e0(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int local_8;
  
  param_1[1] = param_2;
  param_1[2] = -1;
  param_1[3] = -1;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_0063a4d0();
  puVar1 = (undefined4 *)FUN_0063aac0();
  *puVar1 = param_3;
  local_8 = 0;
  while( true ) {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0xec))();
    if (iVar2 <= local_8) break;
    FUN_0063a720(local_8);
    local_8 = local_8 + 1;
  }
  if (param_1[0xe9] != 0) {
    operator_delete((void *)param_1[0xe9]);
  }
  uVar3 = (**(code **)(*DAT_0162ee84 + 0xf0))();
  pvVar4 = operator_new(uVar3);
  param_1[0xe9] = (int)pvVar4;
  (**(code **)(*param_1 + 8))();
  return;
}

