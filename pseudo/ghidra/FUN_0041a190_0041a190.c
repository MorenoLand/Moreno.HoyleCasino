// FUN_0041a190  0041a190

void __fastcall FUN_0041a190(int param_1)

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
      *(int *)(param_1 + 0x478 + local_8 * 8) = (int)uVar4;
      *(int *)(param_1 + 0x47c + local_8 * 8) = (int)((ulonglong)uVar4 >> 0x20);
    }
    else {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x468 + local_8 * 4) + 0x48 + local_8 * 0x20);
      uVar2 = puVar1[1];
      *(undefined4 *)(param_1 + 0x478 + local_8 * 8) = *puVar1;
      *(undefined4 *)(param_1 + 0x47c + local_8 * 8) = uVar2;
    }
  }
  return;
}

