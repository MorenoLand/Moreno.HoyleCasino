// FUN_0058aa10  0058aa10

void __fastcall FUN_0058aa10(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_8;
  
  cVar1 = FUN_00585eb0();
  if (cVar1 == '\0') {
    uVar2 = FUN_00630f40("SID_KENO_DELETETICKET_TITLE",4);
    uVar2 = FUN_00630f40("SID_KENO_DELETETICKET_MESSAGE",uVar2);
    iVar3 = FUN_0062ff10(uVar2);
    if (iVar3 != 7) {
      for (local_8 = *(int *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4); local_8 < 99;
          local_8 = local_8 + 1) {
        puVar4 = (undefined4 *)
                 (param_1 + 0x328 + *(int *)(param_1 + 0x3c08) * 0xe10 + (local_8 + 1) * 0x24);
        puVar5 = (undefined4 *)
                 (param_1 + 0x328 + *(int *)(param_1 + 0x3c08) * 0xe10 + local_8 * 0x24);
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      FUN_005e2e40(param_1 + 0x3ba4 + *(int *)(param_1 + 0x3c08) * 0x10,
                   *(undefined4 *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4));
      *(undefined1 *)(param_1 + 0x1114 + *(int *)(param_1 + 0x3c08) * 0xe10) = 0;
      *(undefined1 *)(param_1 + 0x1115 + *(int *)(param_1 + 0x3c08) * 0xe10) = 1;
      *(undefined1 *)(param_1 + 0x1116 + *(int *)(param_1 + 0x3c08) * 0xe10) = 1;
      *(undefined1 *)(param_1 + 0x1117 + *(int *)(param_1 + 0x3c08) * 0xe10) = 0;
      *(undefined1 *)(param_1 + 0x1118 + *(int *)(param_1 + 0x3c08) * 0xe10) = 0;
      *(undefined4 *)(param_1 + 0x1130 + *(int *)(param_1 + 0x3c08) * 0xe10) = 0;
      *(undefined4 *)(param_1 + 0x1134 + *(int *)(param_1 + 0x3c08) * 0xe10) = 0;
      for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
        *(undefined1 *)(param_1 + 0x1119 + *(int *)(param_1 + 0x3c08) * 0xe10 + local_8) = 0;
      }
      *(int *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4) =
           *(int *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4) + -1;
      if (*(int *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4) < 0) {
        *(undefined4 *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4) = 0;
      }
      *(int *)(param_1 + 0x3bf4 + *(int *)(param_1 + 0x3c08) * 4) =
           *(int *)(param_1 + 0x3bf4 + *(int *)(param_1 + 0x3c08) * 4) + -1;
      if (*(int *)(param_1 + 0x3bf4 + *(int *)(param_1 + 0x3c08) * 4) < 1) {
        *(undefined4 *)(param_1 + 0x3bf4 + *(int *)(param_1 + 0x3c08) * 4) = 1;
      }
      FUN_0058dfb0(*(undefined4 *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4));
    }
  }
  else {
    FUN_005857a0();
  }
  return;
}

