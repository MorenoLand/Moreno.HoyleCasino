// FUN_00523590  00523590

void __fastcall FUN_00523590(int *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a401c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(DAT_00793370 + 4) + 4))(1,DAT_00781870 ^ (uint)&stack0xfffffffc);
  cVar1 = FUN_00637630();
  if ((cVar1 == '\0') || (DAT_00795f94 != '\0')) {
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 0x1c))(0);
  }
  else {
    param_1[0x5e] = 5;
    FUN_005eaf00(param_1[0x67]);
    (**(code **)(*param_1 + 0xb0))(0);
    pvVar2 = operator_new(0x20);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_006010a0(*(undefined4 *)(DAT_00793370 + 4));
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_20);
    (**(code **)(*param_1 + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

