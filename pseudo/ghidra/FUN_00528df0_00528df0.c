// FUN_00528df0  00528df0

undefined4 __thiscall FUN_00528df0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_10;
  int local_c;
  
  local_10 = 0;
  iVar2 = (**(code **)(*DAT_00793370 + 0x2b4))();
  for (local_c = 0; local_c < 0xa1; local_c = local_c + 1) {
    uVar3 = FUN_0064c8a0(0,0);
    cVar1 = FUN_0064c6e0(uVar3);
    if (cVar1 != '\0') {
      local_10 = local_10 + *(int *)(*(int *)(param_1 + 4 + local_c * 4) + 0x48 + param_2 * 0x20);
    }
  }
  return CONCAT31((int3)((uint)local_10 >> 8),iVar2 < local_10);
}

