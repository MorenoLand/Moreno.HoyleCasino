// FUN_0042da90  0042da90

void __fastcall FUN_0042da90(int *param_1)

{
  int iVar1;
  char cVar2;
  scheduler_resource_allocation_error *this;
  undefined4 local_30;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e64c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1[5] == 0) {
    (**(code **)(*param_1 + 4))(1,DAT_00781870 ^ (uint)&stack0xfffffffc);
    FUN_0042a200();
    for (local_14 = (char *)0x0; (int)local_14 < 2; local_14 = local_14 + 1) {
      this = operator_new(0x24);
      local_8 = 0;
      if (this == (scheduler_resource_allocation_error *)0x0) {
        local_30 = 0;
      }
      else {
        local_30 = Concurrency::scheduler_resource_allocation_error::
                   scheduler_resource_allocation_error
                             (this,local_14,~-(uint)(local_14 != (char *)0x0) & (uint)param_1);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_30);
    }
  }
  else if (param_1[5] == 1) {
    cVar2 = FUN_00434390();
    if (cVar2 != '\0') {
      FUN_0042a160();
    }
    (**(code **)(**(int **)(DAT_007906dc + 0x164) + 0x70))();
    FUN_005f5d50(0);
    (**(code **)(**(int **)(DAT_007906d0 + 4) + 8))(1,0);
    FUN_005fc420(0);
    iVar1 = *(int *)(DAT_007906d4 + 0xab4);
    if ((-1 < iVar1) && (iVar1 < 4)) {
      FUN_005e7e00(iVar1,8,*(undefined4 *)(DAT_007906d4 + 0xabc));
    }
  }
  else {
    FUN_005e9f20("false","..\\Casino\\crapsdisplay.cpp",0x628);
  }
  ExceptionList = local_10;
  return;
}

