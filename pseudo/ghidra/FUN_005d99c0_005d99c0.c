// FUN_005d99c0  005d99c0

void __thiscall FUN_005d99c0(int *param_1,int param_2,void *param_3)

{
  undefined4 uVar1;
  void *_Dst;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int local_c;
  
  iVar2 = FUN_005dcb00(param_2);
  uVar1 = *(undefined4 *)(iVar2 + 0x49c);
  _Dst = *(void **)(DAT_0162ee84[0x16] + param_2 * 4);
  if (*(int *)((int)_Dst + 0x3a4) != 0) {
    operator_delete(*(void **)((int)_Dst + 0x3a4));
    *(undefined4 *)((int)_Dst + 0x3a4) = 0;
  }
  if (*(int *)((int)_Dst + 0x3a8) != 0) {
    local_c = 0;
    while( true ) {
      iVar2 = (**(code **)(*DAT_0162ee84 + 0xec))();
      if (iVar2 <= local_c) break;
      if (*(int *)(*(int *)((int)_Dst + 0x3a8) + local_c * 4) != 0) {
        operator_delete(*(void **)(*(int *)((int)_Dst + 0x3a8) + local_c * 4));
      }
      *(undefined4 *)(*(int *)((int)_Dst + 0x3a8) + local_c * 4) = 0;
      local_c = local_c + 1;
    }
    operator_delete(*(void **)((int)_Dst + 0x3a8));
    *(undefined4 *)((int)_Dst + 0x3a8) = 0;
  }
  memcpy(_Dst,param_3,0x4f4);
  uVar3 = (**(code **)(*DAT_0162ee84 + 0xf0))();
  pvVar4 = operator_new(uVar3);
  *(void **)((int)_Dst + 0x3a4) = pvVar4;
  memcpy(*(void **)((int)_Dst + 0x3a4),*(void **)((int)param_3 + 0x3a4),uVar3);
  uVar3 = (**(code **)(*DAT_0162ee84 + 0xec))();
  pvVar4 = operator_new(-(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar3 * 4));
  *(void **)((int)_Dst + 0x3a8) = pvVar4;
  local_c = 0;
  while( true ) {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0xec))();
    if (iVar2 <= local_c) break;
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x108))(local_c);
    pvVar4 = operator_new(uVar3);
    *(void **)(*(int *)((int)_Dst + 0x3a8) + local_c * 4) = pvVar4;
    memcpy(*(void **)(*(int *)((int)_Dst + 0x3a8) + local_c * 4),
           *(void **)(*(int *)((int)param_3 + 0x3a8) + local_c * 4),uVar3);
    local_c = local_c + 1;
  }
  iVar2 = FUN_005dcb00(param_2);
  *(undefined4 *)(iVar2 + 0x49c) = uVar1;
  (**(code **)(*param_1 + 0x15c))(param_3);
  return;
}

