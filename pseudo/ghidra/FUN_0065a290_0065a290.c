// FUN_0065a290  0065a290

void __fastcall FUN_0065a290(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_00657430();
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1dc) + 0x10);
  puVar3 = (undefined4 *)(param_1 + 0x1e0);
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memset((void *)(param_1 + 0x22c),0,0x4c);
  return;
}

