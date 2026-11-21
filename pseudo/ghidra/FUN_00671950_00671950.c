// FUN_00671950  00671950

void __fastcall FUN_00671950(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad1bf;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005eae80(0x27ac41,0,0,5,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_005f5bf0(uVar1);
  }
  local_8 = 0xffffffff;
  param_1[0x78] = local_20;
  FUN_005eae80(0x27ac43,0,0,10,0xffffffff);
  (**(code **)(*param_1 + 0x70))();
  ExceptionList = local_10;
  return;
}

