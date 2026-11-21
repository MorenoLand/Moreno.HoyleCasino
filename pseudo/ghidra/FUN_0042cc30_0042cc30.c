// FUN_0042cc30  0042cc30

void __thiscall FUN_0042cc30(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e5da;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005cc540(param_2,param_3);
  iVar3 = FUN_005ccdf0(param_2,param_3);
  cVar1 = FUN_0042c940(param_2,param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_0042c9c0(param_2,param_3);
    if (cVar1 != '\0') {
      FUN_0042ca40(param_2,param_3);
    }
  }
  else if (iVar3 != -1) {
    if (*(int *)(param_1 + 0xaec + param_2 * 4) == 0) {
      pvVar4 = operator_new(0x178);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_005eaaf0(uVar2);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0xaec + param_2 * 4) = local_24;
    }
    FUN_005cc2e0();
    iVar5 = FUN_005f5400();
    FUN_005eaf00((0x36 < iVar5) + 0xfaf);
    (**(code **)(**(int **)(param_1 + 0xaec + param_2 * 4) + 0x40))();
    uVar6 = (**(code **)(**(int **)(param_1 + 0x17c + param_2 * 0x1e0 + param_3 * 0x78 + iVar3 * 4)
                        + 0x54))();
    iVar3 = (**(code **)(**(int **)(param_1 + 0x17c + param_2 * 0x1e0 + param_3 * 0x78 + iVar3 * 4)
                        + 0x4c))(uVar6);
    (**(code **)(**(int **)(param_1 + 0xaec + param_2 * 4) + 0x44))(iVar3 + 2);
    iVar3 = FUN_005f53c0();
    (**(code **)(**(int **)(param_1 + 0xaec + param_2 * 4) + 0x6c))(iVar3 + 1);
    (**(code **)(**(int **)(param_1 + 0xaec + param_2 * 4) + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

