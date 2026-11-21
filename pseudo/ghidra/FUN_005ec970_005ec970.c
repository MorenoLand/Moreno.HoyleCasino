// FUN_005ec970  005ec970

void __thiscall
FUN_005ec970(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,undefined1 param_5
            ,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  void *pvVar4;
  int local_c;
  
  if (*(int *)(param_1 + 0xac) == 0) {
    pvVar4 = operator_new(8);
    *(void **)(param_1 + 0xac) = pvVar4;
    **(undefined4 **)(param_1 + 0xac) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xac) + 4) = 0;
  }
  **(int **)(param_1 + 0xac) = **(int **)(param_1 + 0xac) + 1;
  lVar3 = (ulonglong)**(uint **)(param_1 + 0xac) * 8;
  pvVar4 = operator_new(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
  for (local_c = 0; local_c < **(int **)(param_1 + 0xac) + -1; local_c = local_c + 1) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xac) + 4);
    uVar2 = *(undefined4 *)(iVar1 + 4 + local_c * 8);
    *(undefined4 *)((int)pvVar4 + local_c * 8) = *(undefined4 *)(iVar1 + local_c * 8);
    *(undefined4 *)((int)pvVar4 + local_c * 8 + 4) = uVar2;
  }
  *(undefined1 *)((int)pvVar4 + local_c * 8) = param_2;
  *(undefined1 *)((int)pvVar4 + local_c * 8 + 1) = param_3;
  *(undefined1 *)((int)pvVar4 + local_c * 8 + 2) = param_4;
  *(undefined1 *)((int)pvVar4 + local_c * 8 + 4) = param_5;
  *(undefined1 *)((int)pvVar4 + local_c * 8 + 5) = param_6;
  *(undefined1 *)((int)pvVar4 + local_c * 8 + 6) = param_7;
  if (*(int *)(*(int *)(param_1 + 0xac) + 4) != 0) {
    operator_delete(*(void **)(*(int *)(param_1 + 0xac) + 4));
  }
  *(void **)(*(int *)(param_1 + 0xac) + 4) = pvVar4;
  return;
}

