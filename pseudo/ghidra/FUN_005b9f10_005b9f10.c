// FUN_005b9f10  005b9f10

/* WARNING: Removing unreachable block (ram,0x005b9f78) */

void __fastcall FUN_005b9f10(int param_1)

{
  int iVar1;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 8);
    for (local_24 = *(int *)(param_1 + 4); local_24 != iVar1; local_24 = local_24 + 0x10) {
      FUN_005be450();
    }
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

