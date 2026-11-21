// FUN_005f5110  005f5110

void __thiscall FUN_005f5110(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  FUN_005f5530(*(int *)(param_1 + 0x18) - iVar1);
  FUN_005f5570(iVar2 - iVar3);
  return;
}

