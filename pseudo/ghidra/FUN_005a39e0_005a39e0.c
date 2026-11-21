// FUN_005a39e0  005a39e0

void __fastcall FUN_005a39e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int local_10;
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
      iVar4 = local_10 + local_8 * 3;
      cVar3 = FUN_005cb7d0(local_8,0);
      if (cVar3 == '\0') {
        uVar5 = FUN_0064c8a0(0,0);
        *(int *)(param_1 + 0x38 + iVar4 * 8) = (int)uVar5;
        *(int *)(param_1 + 0x3c + iVar4 * 8) = (int)((ulonglong)uVar5 >> 0x20);
      }
      else {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 8 + iVar4 * 4) + 0x48 + local_8 * 0x20);
        uVar2 = puVar1[1];
        *(undefined4 *)(param_1 + 0x38 + iVar4 * 8) = *puVar1;
        *(undefined4 *)(param_1 + 0x3c + iVar4 * 8) = uVar2;
      }
    }
  }
  return;
}

