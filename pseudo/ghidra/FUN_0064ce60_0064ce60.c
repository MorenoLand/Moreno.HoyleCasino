// FUN_0064ce60  0064ce60

void __fastcall FUN_0064ce60(int *param_1)

{
  char cVar1;
  void *pvVar2;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abffe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f1120(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(int *)(DAT_007960d8 + 8) != 0) {
    (**(code **)(*DAT_0162ee84 + 900))();
  }
  (**(code **)(*param_1 + 0x24))();
  FUN_0064cfa0();
  (**(code **)(*param_1 + 0x60))();
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
  if (cVar1 != '\0') {
    (**(code **)(*DAT_0162ee84 + 0x35c))();
    cVar1 = (**(code **)(*DAT_0162ee84 + 0xdc))();
    if (cVar1 != '\0') {
      pvVar2 = operator_new(0x19c);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_00670680();
      }
      local_8 = 0xffffffff;
      param_1[0x14] = local_20;
      FUN_006708c0();
      (**(code **)(*(int *)param_1[0x14] + 0x74))();
    }
  }
  ExceptionList = local_10;
  return;
}

