// FUN_0058f4a0  0058f4a0

void __fastcall FUN_0058f4a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  
  FUN_0058f450();
  iVar1 = *(int *)(param_1 + 0x154 + *(int *)(*(int *)(param_1 + 0x174) + 0x3c08) * 4);
  for (local_c = 0; local_c < 0x14; local_c = local_c + 1) {
    iVar2 = (int)*(char *)(DAT_007947e0 + 0x9c + iVar1 * 0x14 + local_c);
    if ((0 < iVar2) && (iVar2 < 0x51)) {
      (**(code **)(**(int **)(param_1 + iVar2 * 4) + 0x74))();
    }
  }
  return;
}

