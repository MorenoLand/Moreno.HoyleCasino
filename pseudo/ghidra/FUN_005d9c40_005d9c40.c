// FUN_005d9c40  005d9c40

void __thiscall FUN_005d9c40(undefined4 param_1,void *param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 local_c;
  
  if (*(int *)((int)param_2 + 0x3a4) != 0) {
    operator_delete(*(void **)((int)param_2 + 0x3a4));
    *(undefined4 *)((int)param_2 + 0x3a4) = 0;
  }
  if (*(int *)((int)param_2 + 0x3a8) != 0) {
    local_c = 0;
    while( true ) {
      iVar1 = (**(code **)(*DAT_0162ee84 + 0xec))(param_1);
      if (iVar1 <= local_c) break;
      if (*(int *)(*(int *)((int)param_2 + 0x3a8) + local_c * 4) != 0) {
        operator_delete(*(void **)(*(int *)((int)param_2 + 0x3a8) + local_c * 4));
      }
      *(undefined4 *)(*(int *)((int)param_2 + 0x3a8) + local_c * 4) = 0;
      local_c = local_c + 1;
    }
    operator_delete(*(void **)((int)param_2 + 0x3a8));
    *(undefined4 *)((int)param_2 + 0x3a8) = 0;
  }
  memcpy(param_2,param_3,0x4f4);
  uVar2 = (**(code **)(*DAT_0162ee84 + 0xf0))();
  pvVar3 = operator_new(uVar2);
  *(void **)((int)param_2 + 0x3a4) = pvVar3;
  memcpy(*(void **)((int)param_2 + 0x3a4),*(void **)((int)param_3 + 0x3a4),uVar2);
  uVar2 = (**(code **)(*DAT_0162ee84 + 0xec))();
  pvVar3 = operator_new(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar2 * 4));
  *(void **)((int)param_2 + 0x3a8) = pvVar3;
  local_c = 0;
  while( true ) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0xec))();
    if (iVar1 <= local_c) break;
    uVar2 = (**(code **)(*DAT_0162ee84 + 0x108))(local_c);
    pvVar3 = operator_new(uVar2);
    *(void **)(*(int *)((int)param_2 + 0x3a8) + local_c * 4) = pvVar3;
    memcpy(*(void **)(*(int *)((int)param_2 + 0x3a8) + local_c * 4),
           *(void **)(*(int *)((int)param_3 + 0x3a8) + local_c * 4),uVar2);
    local_c = local_c + 1;
  }
  return;
}

