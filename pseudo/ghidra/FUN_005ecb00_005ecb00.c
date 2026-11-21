// FUN_005ecb00  005ecb00

void __thiscall FUN_005ecb00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  int local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0xac) != 0) {
      operator_delete(*(void **)(*(int *)(param_1 + 0xac) + 4));
      operator_delete(*(void **)(param_1 + 0xac));
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0xac) == 0) {
      pvVar4 = operator_new(8);
      *(void **)(param_1 + 0xac) = pvVar4;
      **(undefined4 **)(param_1 + 0xac) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xac) + 4) = 0;
    }
    else {
      operator_delete(*(void **)(*(int *)(param_1 + 0xac) + 4));
    }
    **(undefined4 **)(param_1 + 0xac) = *param_2;
    lVar3 = (ulonglong)**(uint **)(param_1 + 0xac) * 8;
    pvVar4 = operator_new(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
    *(void **)(*(int *)(param_1 + 0xac) + 4) = pvVar4;
    for (local_8 = 0; local_8 < **(int **)(param_1 + 0xac); local_8 = local_8 + 1) {
      uVar1 = *(undefined4 *)(param_2[1] + 4 + local_8 * 8);
      iVar2 = *(int *)(*(int *)(param_1 + 0xac) + 4);
      *(undefined4 *)(iVar2 + local_8 * 8) = *(undefined4 *)(param_2[1] + local_8 * 8);
      *(undefined4 *)(iVar2 + 4 + local_8 * 8) = uVar1;
    }
  }
  return;
}

