// FUN_00436460  00436460

void __fastcall FUN_00436460(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0xac4) == 0) {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      for (local_c = 0; local_c < 0x4c; local_c = local_c + 1) {
        cVar4 = FUN_004369a0(local_8,local_c);
        if (cVar4 == '\0') {
          uVar5 = FUN_0064c8a0(0,0);
          iVar2 = param_1 + 0x134 + local_8 * 0x260;
          *(int *)(iVar2 + local_c * 8) = (int)uVar5;
          *(int *)(iVar2 + 4 + local_c * 8) = (int)((ulonglong)uVar5 >> 0x20);
        }
        else {
          puVar1 = (undefined4 *)(*(int *)(param_1 + 4 + local_c * 4) + 0x48 + local_8 * 0x20);
          uVar3 = puVar1[1];
          iVar2 = param_1 + 0x134 + local_8 * 0x260;
          *(undefined4 *)(iVar2 + local_c * 8) = *puVar1;
          *(undefined4 *)(iVar2 + 4 + local_c * 8) = uVar3;
        }
      }
    }
  }
  return;
}

