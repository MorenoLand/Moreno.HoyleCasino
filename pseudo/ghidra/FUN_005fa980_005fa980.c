// FUN_005fa980  005fa980

int * __thiscall
FUN_005fa980(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9,
            undefined1 param_10,undefined1 param_11,undefined1 param_12,undefined4 param_13)

{
  uint uVar1;
  int *local_24;
  undefined1 local_1b [3];
  void *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa458;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == (int *)0x0) {
    local_18 = operator_new(0x60);
    local_8 = 0;
    if (local_18 == (void *)0x0) {
      local_24 = (int *)0x0;
    }
    else {
      local_24 = (int *)FUN_00627090();
    }
    local_14 = local_24;
    param_2 = local_24;
  }
  local_8 = 0xffffffff;
  FUN_0060c840(param_2);
  param_2[1] = param_1;
  (**(code **)(*param_2 + 0xb0))(param_4,param_5,param_6,param_7,param_8,param_3,uVar1);
  FUN_00627520(local_1b,param_9,param_10,param_11);
  FUN_00627620(param_12);
  FUN_00627680(param_13);
  (**(code **)(*param_2 + 0x74))();
  ExceptionList = local_10;
  return param_2;
}

