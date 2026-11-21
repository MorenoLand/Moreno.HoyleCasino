// FUN_005709b0  005709b0

void __thiscall FUN_005709b0(int param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_28;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5fcc;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 1;
  for (local_18 = 0; local_18 < *(short *)(param_1 + 0x184); local_18 = local_18 + 1) {
    local_14 = local_14 * 10;
  }
  if (param_2 < 0) {
    FUN_005e9f20("false","..\\Casino\\roadkillslot.cpp",0x5b0,uVar1);
    param_2 = 0;
  }
  if (local_14 + -1 < param_2) {
    FUN_005e9f20("false","..\\Casino\\roadkillslot.cpp",0x5b4,uVar1);
    param_2 = local_14 + -1;
  }
  pvVar2 = operator_new(0x34);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_00570ad0(param_2,param_1);
  }
  local_8 = 0xffffffff;
  FUN_005f5df0(local_28);
  ExceptionList = local_10;
  return;
}

