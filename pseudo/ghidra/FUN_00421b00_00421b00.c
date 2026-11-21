// FUN_00421b00  00421b00

undefined4 * __thiscall
FUN_00421b00(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e215;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc0d0(param_4);
  local_8 = 0;
  *param_1 = CaribbeanStudDealToScript::vftable;
  if ((param_2 < 0) || (4 < param_2)) {
    FUN_005e9f20("(0<=p) && (p<=4)","..\\Casino\\caribbeanstuddisplay.cpp",0x3cf,uVar1);
  }
  param_1[8] = param_2;
  FUN_005eaf00(*(undefined4 *)(&DAT_0070ce4c + param_2 * 4));
  FUN_005eaf00(0x13a6);
  (**(code **)(**(int **)(DAT_00790360 + 0x7c) + 0xb0))(0);
  (**(code **)(**(int **)(DAT_00790360 + 0x78) + 0xb0))(0);
  (**(code **)(**(int **)(DAT_00790360 + 0x7c) + 0x6c))(0x32);
  (**(code **)(**(int **)(DAT_00790360 + 0x78) + 0x6c))(0x33);
  ExceptionList = local_10;
  return param_1;
}

