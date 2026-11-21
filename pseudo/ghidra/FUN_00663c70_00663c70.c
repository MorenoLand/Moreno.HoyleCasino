// FUN_00663c70  00663c70

void FUN_00663c70(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0060ca40(param_1);
  puVar3 = (undefined4 *)(iVar1 + 0x20);
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

