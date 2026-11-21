// FUN_005d46f0  005d46f0

void __fastcall FUN_005d46f0(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 local_30;
  undefined4 local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8f54;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 4))(1);
    pvVar2 = operator_new(0x20);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_006010a0(0);
    }
    local_8 = 0xffffffff;
    FUN_005fb2b0(0);
    FUN_005f5d50(local_2c);
    pvVar2 = operator_new(0x20);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_006010a0(param_1);
    }
    local_8 = 0xffffffff;
    FUN_005fb2b0(1);
    FUN_005f5d50(local_30);
  }
  else if (iVar1 == 1) {
    FUN_005d1d60();
    FUN_005d2220();
    (**(code **)(*param_1 + 8))(2,0);
  }
  else if (iVar1 == 2) {
    FUN_005d3b10();
    (**(code **)(*param_1 + 8))(2,0x46);
    piVar3 = (int *)FUN_005fb2b0(0);
    (**(code **)(*piVar3 + 0x74))();
    piVar3 = (int *)FUN_005fb2b0(1);
    (**(code **)(*piVar3 + 0x70))();
  }
  ExceptionList = local_10;
  return;
}

