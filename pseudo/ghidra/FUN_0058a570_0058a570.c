// FUN_0058a570  0058a570

void __fastcall FUN_0058a570(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (('\x03' < **(char **)(*(int *)(DAT_00793584 + 0x3b68) + 4)) ||
     ((iVar1 = FUN_0058a470(), iVar1 != 0 &&
      ((iVar1 = FUN_0058a470(), iVar1 < 0x10 || (iVar1 = FUN_0058a470(), 0x13 < iVar1)))))) {
    iVar1 = (int)*(char *)(*(int *)(*(int *)(param_1 + 0x3b68) + 4) + 1);
    uVar3 = (uint)(*(char *)(*(int *)(*(int *)(param_1 + 0x3b68) + 4) + 3) != '\0');
    uVar2 = FUN_0058a470(uVar3,iVar1);
    FUN_0058b380(uVar2,uVar3,iVar1);
  }
  return;
}

