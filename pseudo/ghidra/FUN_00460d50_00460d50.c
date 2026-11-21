// FUN_00460d50  00460d50

void __fastcall FUN_00460d50(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    iVar3 = FUN_005dcb00(local_8);
    if (*(char *)(iVar3 + 0x4a0) == '\0') {
      if (*(int *)(param_1 + 0x10c) != local_8) {
        uVar4 = FUN_0064c8a0(0,0);
        *(int *)(param_1 + 8 + local_8 * 0x10) = (int)uVar4;
        *(int *)(param_1 + 0xc + local_8 * 0x10) = (int)((ulonglong)uVar4 >> 0x20);
        uVar4 = FUN_0064c8a0(0,0);
        *(int *)(param_1 + 0x10 + local_8 * 0x10) = (int)uVar4;
        *(int *)(param_1 + 0x14 + local_8 * 0x10) = (int)((ulonglong)uVar4 >> 0x20);
      }
    }
    else {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 0x48 + local_8 * 0x20);
      uVar2 = puVar1[1];
      *(undefined4 *)(param_1 + 8 + local_8 * 0x10) = *puVar1;
      *(undefined4 *)(param_1 + 0xc + local_8 * 0x10) = uVar2;
      iVar3 = FUN_0045e8e0();
      if (iVar3 == 1) {
        iVar3 = *(int *)(param_1 + 4) + 0x48 + local_8 * 0x20;
        uVar2 = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)(param_1 + 0x10 + local_8 * 0x10) = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)(param_1 + 0x14 + local_8 * 0x10) = uVar2;
      }
    }
  }
  return;
}

