// FUN_00603fb0  00603fb0

undefined4 __thiscall FUN_00603fb0(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_44;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aaa9a;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = FUN_00604400(param_2,param_3);
  if (iVar2 == 0) {
    local_44 = operator_new(0x10);
    local_8 = 0;
    if (local_44 == (undefined4 *)0x0) {
      local_44 = (undefined4 *)0x0;
    }
    else {
      FUN_0062aea0(uVar1);
      *local_44 = ResourceNode::vftable;
    }
    local_8 = 0xffffffff;
    if (param_2 == 0x20584554) {
      pvVar3 = operator_new(0x96c);
      local_8 = 2;
      if (pvVar3 == (void *)0x0) {
        local_50 = 0;
      }
      else {
        local_50 = FUN_00616050(0x20584554,param_3,param_1);
      }
      local_44[2] = local_50;
    }
    else {
      pvVar3 = operator_new(0x160);
      local_8 = 1;
      if (pvVar3 == (void *)0x0) {
        local_4c = 0;
      }
      else {
        local_4c = FUN_0061dd90(param_2,param_3,param_1,1);
      }
      local_44[2] = local_4c;
    }
    local_8 = 0xffffffff;
    if (local_44[2] == 0) {
      if ((local_44[2] != 0) && ((undefined4 *)local_44[2] != (undefined4 *)0x0)) {
        (*(code *)**(undefined4 **)local_44[2])(1);
      }
      if (local_44 != (undefined4 *)0x0) {
        (**(code **)*local_44)(1);
      }
      uVar4 = 0;
    }
    else {
      local_44[3] = 1;
      FUN_0062aa20(local_44);
      uVar4 = local_44[2];
    }
  }
  else {
    *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
    uVar4 = *(undefined4 *)(iVar2 + 8);
  }
  ExceptionList = local_10;
  return uVar4;
}

