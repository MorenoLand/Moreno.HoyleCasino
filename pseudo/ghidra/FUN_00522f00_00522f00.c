// FUN_00522f00  00522f00

void __thiscall FUN_00522f00(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined4 local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3fd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(param_1 + 0x80 + param_3 * 4) + 0x17c + param_2 * 0x1e0);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x80 + param_3 * 4) + 0xdc))
                    (param_2,0,DAT_00781870 ^ (uint)&stack0xfffffffc);
  iVar4 = (**(code **)(**(int **)(param_1 + 0x80 + param_3 * 4) + 0xe0))(param_2,0);
  if (piVar1 != (int *)0x0) {
    iVar5 = FUN_00637810(4);
    piVar1[0x61] = iVar5;
    if ((piVar1[0x61] != 0) && (cVar2 = FUN_00637630(), cVar2 != '\0')) {
      pvVar6 = operator_new(0x2c);
      local_8 = 0;
      if (pvVar6 == (void *)0x0) {
        local_2c = 0;
      }
      else {
        local_2c = FUN_00606e60(0,iVar3 + 0x14,iVar4 + 0x8c,0);
      }
      local_8 = 0xffffffff;
      FUN_005f6050(local_2c);
      ExceptionList = local_10;
      return;
    }
    (**(code **)(*piVar1 + 0x44))(iVar3 + 0x14,iVar4 + 0x8c);
  }
  ExceptionList = local_10;
  return;
}

