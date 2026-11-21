// FUN_0063a2a0  0063a2a0

undefined4 __fastcall FUN_0063a2a0(int param_1)

{
  int iVar1;
  int local_8;
  
  if (*(int *)(param_1 + 0x3a4) != 0) {
    operator_delete(*(void **)(param_1 + 0x3a4));
    *(undefined4 *)(param_1 + 0x3a4) = 0;
  }
  if (*(int *)(param_1 + 0x3a8) != 0) {
    for (local_8 = 0; iVar1 = (**(code **)(*DAT_0162ee84 + 0xec))(), local_8 < iVar1;
        local_8 = local_8 + 1) {
      if (*(int *)(*(int *)(param_1 + 0x3a8) + local_8 * 4) != 0) {
        operator_delete(*(void **)(*(int *)(param_1 + 0x3a8) + local_8 * 4));
      }
      *(undefined4 *)(*(int *)(param_1 + 0x3a8) + local_8 * 4) = 0;
    }
    operator_delete(*(void **)(param_1 + 0x3a8));
    *(undefined4 *)(param_1 + 0x3a8) = 0;
  }
  memset((void *)(param_1 + 0x28),0,900);
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x24))(1);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return 1;
}

