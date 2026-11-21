// FUN_00688b60  00688b60

undefined4 * __thiscall
FUN_00688b60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006addd3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006077f0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = ResourceIniFile::vftable;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  pvVar1 = operator_new(0x160);
  local_8._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_0061dc00(0x20494e49,param_2,param_3,1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x82] = local_20;
  if ((param_1[0x82] == 0) && (param_4 != '\0')) {
    if (param_1[0x82] == 0) {
      FUN_005e9f20("m_poResource","..\\scilib\\platform\\resourceinifile.cpp",0xe);
    }
  }
  else if (param_1[0x82] != 0) {
    uVar2 = (**(code **)(*(int *)param_1[0x82] + 4))();
    param_1[0x83] = uVar2;
  }
  ExceptionList = local_10;
  return param_1;
}

