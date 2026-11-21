// FUN_005fa1e0  005fa1e0

int * __thiscall
FUN_005fa1e0(int param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,undefined4 param_6
            ,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int *local_30;
  int *local_2c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa369;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_3 == (int *)0x0) {
    local_14 = 0;
    while( true ) {
      iVar3 = FUN_0060c9a0(uVar2);
      if (iVar3 <= local_14) break;
      FUN_0060ca40(local_14);
      iVar3 = FUN_005f5400();
      if (iVar3 == param_5) {
        param_3 = (int *)FUN_0060ca40(local_14);
        break;
      }
      local_14 = local_14 + 1;
    }
  }
  cVar1 = FUN_0060c9e0(param_3);
  if (cVar1 == '\0') {
    if (param_3 == (int *)0x0) {
      pvVar4 = operator_new(0x58);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_2c = (int *)0x0;
      }
      else {
        local_2c = (int *)FUN_005ff8b0();
      }
      local_8 = 0xffffffff;
      param_3 = local_2c;
    }
    FUN_0060c840(param_3);
    param_3[1] = param_1;
    FUN_005f53e0(param_5);
    (**(code **)(*param_3 + 0x40))();
    (**(code **)(*param_3 + 0x6c))(param_9);
  }
  if (param_2 == (int *)0x0) {
    pvVar4 = operator_new(0x21c);
    local_8 = 1;
    if (pvVar4 == (void *)0x0) {
      local_30 = (int *)0x0;
    }
    else {
      local_30 = (int *)FUN_005ff310();
    }
    local_8 = 0xffffffff;
    param_2 = local_30;
  }
  FUN_005ff8f0(param_2);
  FUN_005eae80(param_6,param_7,param_8,param_9,param_4);
  FUN_005ff4c0(param_10,param_11,param_12,param_13,param_14);
  (**(code **)(*param_2 + 0x74))();
  ExceptionList = local_10;
  return param_3;
}

