// FUN_005c4920  005c4920

/* WARNING: Removing unreachable block (ram,0x005c4988) */

void __fastcall FUN_005c4920(int param_1)

{
  int iVar1;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 8);
    for (local_c = *(int *)(param_1 + 4); local_c != iVar1; local_c = local_c + 0x34) {
      FUN_005c3980();
    }
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

