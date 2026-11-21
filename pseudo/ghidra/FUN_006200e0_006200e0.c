// FUN_006200e0  006200e0

void __fastcall FUN_006200e0(int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  void *pvVar3;
  int local_8;
  
  lVar2 = (ulonglong)(*(int *)(param_1 + 0x30c) + 1) * 8;
  pvVar3 = operator_new(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  *(undefined4 *)((int)pvVar3 + *(int *)(param_1 + 0x30c) * 8) = 0;
  *(undefined4 *)((int)pvVar3 + *(int *)(param_1 + 0x30c) * 8 + 4) = 0;
  for (local_8 = 0; local_8 < *(int *)(param_1 + 0x30c); local_8 = local_8 + 1) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x310) + 4 + local_8 * 8);
    *(undefined4 *)((int)pvVar3 + local_8 * 8) =
         *(undefined4 *)(*(int *)(param_1 + 0x310) + local_8 * 8);
    *(undefined4 *)((int)pvVar3 + local_8 * 8 + 4) = uVar1;
  }
  operator_delete(*(void **)(param_1 + 0x310));
  *(void **)(param_1 + 0x310) = pvVar3;
  *(int *)(param_1 + 0x30c) = *(int *)(param_1 + 0x30c) + 1;
  return;
}

