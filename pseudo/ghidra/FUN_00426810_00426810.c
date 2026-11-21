// FUN_00426810  00426810

void __fastcall FUN_00426810(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int local_c;
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 2; local_c = local_c + 1) {
      iVar4 = local_8 * 2 + local_c;
      cVar3 = FUN_005cb7d0(local_8,0);
      if (cVar3 == '\0') {
        uVar5 = FUN_0064c8a0(0,0);
        *(int *)(param_1 + 0x28 + iVar4 * 8) = (int)uVar5;
        *(int *)(param_1 + 0x2c + iVar4 * 8) = (int)((ulonglong)uVar5 >> 0x20);
      }
      else {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 8 + iVar4 * 4) + 0x48 + local_8 * 0x20);
        uVar2 = puVar1[1];
        *(undefined4 *)(param_1 + 0x28 + iVar4 * 8) = *puVar1;
        *(undefined4 *)(param_1 + 0x2c + iVar4 * 8) = uVar2;
      }
    }
    *(undefined1 *)(param_1 + local_8 + 0x68) = *(undefined1 *)(param_1 + local_8 + 0xd4);
  }
  return;
}

