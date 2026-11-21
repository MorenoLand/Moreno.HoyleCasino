// FUN_005fe7f0  005fe7f0

int __fastcall FUN_005fe7f0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_50;
  int *local_4c;
  int local_24;
  int local_20;
  int local_1c;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa737;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  pvVar2 = operator_new(0x178);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_4c = (int *)0x0;
  }
  else {
    local_4c = (int *)FUN_005eaaf0(uVar1);
  }
  local_8 = 0xffffffff;
  for (local_1c = 0; iVar3 = FUN_005feda0(), local_1c < iVar3; local_1c = local_1c + 1) {
    iVar3 = FUN_005ff080(local_1c);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1e8) != -2)) {
      if (*(int *)(iVar3 + 0x200) == 0) {
        local_50 = 0;
      }
      else {
        local_50 = (**(code **)(**(int **)(iVar3 + 0x200) + 0xb8))();
      }
      uVar4 = FUN_00602b70(local_50);
      iVar3 = FUN_005fea30(uVar4,local_50);
      if (local_24 < iVar3) {
        local_24 = iVar3;
      }
    }
  }
  local_1c = 0;
  iVar3 = (**(code **)(*DAT_015e55e8 + 0x50))(*(undefined4 *)(param_1 + 0x1b4),0);
  iVar5 = 0;
  while( true ) {
    local_20 = iVar3;
    if (local_20 == 0) {
      if (local_4c != (int *)0x0) {
        (**(code **)*local_4c)(1);
      }
      ExceptionList = local_10;
      return iVar5;
    }
    FUN_005eaf00(local_20);
    (**(code **)(*local_4c + 0x40))();
    iVar3 = FUN_005f5550();
    if (local_24 + 10 <= iVar3) break;
    local_1c = local_1c + 1;
    iVar3 = (**(code **)(*DAT_015e55e8 + 0x50))(*(undefined4 *)(param_1 + 0x1b4),local_1c);
    iVar5 = local_20;
  }
  if (local_4c == (int *)0x0) {
    ExceptionList = local_10;
    return local_20;
  }
  (**(code **)*local_4c)(1);
  ExceptionList = local_10;
  return local_20;
}

