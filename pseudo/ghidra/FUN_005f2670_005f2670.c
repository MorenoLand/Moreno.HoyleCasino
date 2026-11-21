// FUN_005f2670  005f2670

int __thiscall
FUN_005f2670(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int local_30;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9e38;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  while( true ) {
    iVar2 = FUN_0060c9a0(uVar1);
    if (iVar2 <= local_14) {
      pvVar3 = operator_new(0x358);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        local_30 = 0;
      }
      else {
        local_30 = FUN_005fd860(param_7,1,DAT_015e55e8[5]);
      }
      local_8 = 0xffffffff;
      if (param_6 != 0) {
        *(int *)(local_30 + 0x1bc) = param_6;
      }
      FUN_005fdc10(param_2);
      FUN_0060c840(local_30);
      (**(code **)(*param_1 + 0x30))(local_30,param_2);
      (**(code **)(*DAT_015e55e8 + 0x4c))(local_30,param_2);
      FUN_005fddf0(param_3,param_4,param_5);
      FUN_005fedc0();
      ExceptionList = local_10;
      return local_30;
    }
    iVar2 = FUN_0060ca40(local_14);
    if (*(int *)(iVar2 + 0x1c4) == param_2) break;
    local_14 = local_14 + 1;
  }
  if (param_6 != 0) {
    iVar2 = FUN_0060ca40(local_14);
    *(int *)(iVar2 + 0x1bc) = param_6;
  }
  FUN_0060ca40(local_14);
  FUN_005fddf0(param_3,param_4,param_5);
  FUN_0060ca40(local_14);
  FUN_005fedc0();
  iVar2 = FUN_0060ca40(local_14);
  ExceptionList = local_10;
  return iVar2;
}

