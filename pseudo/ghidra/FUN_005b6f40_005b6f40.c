// FUN_005b6f40  005b6f40

void __fastcall FUN_005b6f40(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    iVar3 = FUN_005dcb00(local_8);
    if (*(char *)(iVar3 + 0x4a0) == '\0') {
      uVar4 = FUN_0064c8a0(0,0);
      *(int *)(param_1 + 0x590 + local_8 * 8) = (int)uVar4;
      *(int *)(param_1 + 0x594 + local_8 * 8) = (int)((ulonglong)uVar4 >> 0x20);
      uVar4 = FUN_0064c8a0(0,0);
      *(int *)(param_1 + 0x644 + local_8 * 8) = (int)uVar4;
      *(int *)(param_1 + 0x648 + local_8 * 8) = (int)((ulonglong)uVar4 >> 0x20);
    }
    else {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x580 + local_8 * 4) + 0x48 + local_8 * 0x20);
      uVar2 = puVar1[1];
      *(undefined4 *)(param_1 + 0x590 + local_8 * 8) = *puVar1;
      *(undefined4 *)(param_1 + 0x594 + local_8 * 8) = uVar2;
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x634 + local_8 * 4) + 0x48 + local_8 * 0x20);
      uVar2 = puVar1[1];
      *(undefined4 *)(param_1 + 0x644 + local_8 * 8) = *puVar1;
      *(undefined4 *)(param_1 + 0x648 + local_8 * 8) = uVar2;
    }
  }
  return;
}

