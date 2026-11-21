// FUN_00532940  00532940

void __fastcall FUN_00532940(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    if (*(char *)(param_1 + 0x1e8) == '\0') {
      uVar4 = FUN_005f3e50();
      uVar4 = uVar4 & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      if (uVar4 == 0) {
        if ((*(int *)(param_1 + 0x1d8) == 3) &&
           (iVar1 = *(int *)(param_1 + 0x1ec), iVar2 = *(int *)(param_1 + 0x1f0),
           iVar5 = FUN_005325a0(), iVar5 < iVar1 + iVar2)) {
          FUN_00532200();
        }
        else {
          FUN_00532760();
        }
      }
    }
    else {
      cVar3 = FUN_005325c0();
      if (cVar3 != '\0') {
        cVar3 = FUN_00532690();
        if (cVar3 == '\0') {
          FUN_005326b0();
        }
        else {
          FUN_00532700();
          *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
        }
      }
      if (*(int *)(param_1 + 0x1e4) <= *(int *)(param_1 + 0x1e0)) {
        *(undefined1 *)(param_1 + 0x1e8) = 0;
        *(undefined4 *)(param_1 + 0x1e0) = 0;
        FUN_00532760();
      }
    }
  }
  return;
}

