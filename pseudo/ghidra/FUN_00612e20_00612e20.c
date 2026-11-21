// FUN_00612e20  00612e20

/* WARNING: Removing unreachable block (ram,0x00612e91) */

void __fastcall FUN_00612e20(int param_1)

{
  int iVar1;
  undefined4 local_28;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 8);
    for (local_28 = *(int *)(param_1 + 4); local_28 != iVar1; local_28 = local_28 + 0x48) {
      FUN_005be450();
    }
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

