// FUN_004106f0  004106f0

undefined4 * __thiscall
FUN_004106f0(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069dc35;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc0d0(param_4);
  local_8 = 0;
  *param_1 = BlackjackDealToScript::vftable;
  param_1[8] = param_2;
  *(undefined1 *)(param_1 + 9) = param_3;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  switch(param_1[8]) {
  case 0:
    FUN_005eaf00(0x13a8);
    break;
  case 1:
    FUN_005eaf00(0x13a9);
    break;
  case 2:
    FUN_005eaf00(0x13a7);
    break;
  case 3:
    FUN_005eaf00(0x13aa);
    break;
  case 4:
    FUN_005eaf00(0x13ab);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\blackjackdisplay.cpp",0x498,uVar1);
  }
  FUN_005eaf00(0x13a6);
  (**(code **)(**(int **)(DAT_0079032c + 0x40) + 0xb0))(0);
  (**(code **)(**(int **)(DAT_0079032c + 0x3c) + 0xb0))(0);
  (**(code **)(**(int **)(DAT_0079032c + 0x40) + 0x6c))(0x96);
  (**(code **)(**(int **)(DAT_0079032c + 0x3c) + 0x6c))(0x97);
  ExceptionList = local_10;
  return param_1;
}

