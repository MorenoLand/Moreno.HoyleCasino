// FUN_0045da80  0045da80

void __fastcall FUN_0045da80(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x80) == 1) {
    cVar1 = FUN_004603a0(*(undefined4 *)(DAT_00790738 + 0x104));
    if (cVar1 == '\0') {
      iVar2 = FUN_004603f0();
      *(undefined1 *)(iVar2 + 0x4a1) = 1;
    }
    else {
      iVar2 = FUN_004603f0();
      *(undefined1 *)(iVar2 + 0x4a0) = 1;
      if (4 < *(int *)(*(int *)(DAT_00790738 + 4) + *(int *)(DAT_00790738 + 0x104) * 0x20 + 0x50)) {
        *(undefined1 *)(DAT_00790738 + *(int *)(DAT_00790738 + 0x104) + 0xf9) = 1;
      }
    }
    FUN_005db890();
    (**(code **)(**(int **)(param_1 + 4) + 8))(1,0);
  }
  return;
}

