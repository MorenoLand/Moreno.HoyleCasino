// FUN_0063a720  0063a720

void __thiscall FUN_0063a720(int param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  size_t _Size;
  
  if (*(int *)(param_1 + 0x3a8) == 0) {
    uVar1 = (**(code **)(*DAT_0162ee84 + 0xec))();
    pvVar2 = operator_new(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar1 * 4));
    *(void **)(param_1 + 0x3a8) = pvVar2;
    iVar3 = (**(code **)(*DAT_0162ee84 + 0xec))();
    memset(*(void **)(param_1 + 0x3a8),0,iVar3 << 2);
  }
  if (*(int *)(*(int *)(param_1 + 0x3a8) + param_2 * 4) != 0) {
    operator_delete(*(void **)(*(int *)(param_1 + 0x3a8) + param_2 * 4));
    *(undefined4 *)(*(int *)(param_1 + 0x3a8) + param_2 * 4) = 0;
  }
  uVar1 = (**(code **)(*DAT_0162ee84 + 0x108))(param_2);
  pvVar2 = operator_new(uVar1);
  *(void **)(*(int *)(param_1 + 0x3a8) + param_2 * 4) = pvVar2;
  _Size = (**(code **)(*DAT_0162ee84 + 0x108))(param_2);
  memset(*(void **)(*(int *)(param_1 + 0x3a8) + param_2 * 4),0,_Size);
  FUN_00635a40(param_2,*(undefined4 *)(*(int *)(param_1 + 0x3a8) + param_2 * 4));
  return;
}

