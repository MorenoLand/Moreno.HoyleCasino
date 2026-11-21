// FUN_00593700  00593700

void __fastcall FUN_00593700(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  for (local_c = 0;
      (local_c < *(int *)(param_1 + 500) &&
      (*(char *)(*(int *)(param_1 + 0x1e0) + 0x1dc + local_c * 0x1e8) == '\0'));
      local_c = local_c + 1) {
  }
  if (local_c == *(int *)(param_1 + 500)) {
    uVar1 = FUN_00630f40("SID_FOURCARDPOKER_DISCARDING",0);
    uVar1 = FUN_00630f40("SID_FOURCARDPOKER_INVALID_DISCARD",uVar1);
    FUN_0062ff10(uVar1);
  }
  else {
    iVar2 = FUN_00597d30();
    for (local_10 = local_c; local_10 < *(int *)(param_1 + 500) + -1; local_10 = local_10 + 1) {
      *(undefined2 *)(DAT_007935a8 + 200 + iVar2 * 0xc + local_10 * 2) =
           *(undefined2 *)(DAT_007935a8 + iVar2 * 0xc + 0xca + local_10 * 2);
    }
    *(undefined2 *)(DAT_007935a8 + iVar2 * 0xc + 0xc6 + *(int *)(param_1 + 500) * 2) = 0;
    FUN_005f8990();
    *(undefined4 *)(DAT_007935a4 + 0x80) = 0;
    (**(code **)(**(int **)(DAT_007935a4 + 4) + 8))(1,0);
  }
  return;
}

