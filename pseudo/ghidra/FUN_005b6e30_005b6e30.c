// FUN_005b6e30  005b6e30

void __fastcall FUN_005b6e30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    iVar2 = FUN_005dcb00(local_8);
    if (*(char *)(iVar2 + 0x4a0) != '\0') {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x580 + local_8 * 4) + 0x48 + local_8 * 0x20);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      FUN_005dcb00(local_8,uVar3,uVar4);
      FUN_005d5cf0(uVar3,uVar4);
      FUN_005cb9b0();
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x634 + local_8 * 4) + 0x48 + local_8 * 0x20);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      FUN_005dcb00(local_8,uVar3,uVar4);
      FUN_005d5cf0(uVar3,uVar4);
      FUN_005cb9b0();
    }
  }
  return;
}

