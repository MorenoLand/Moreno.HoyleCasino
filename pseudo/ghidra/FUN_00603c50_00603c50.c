// FUN_00603c50  00603c50

undefined4 __thiscall
FUN_00603c50(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 *local_5c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aaa5e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = FUN_006043a0(param_2,param_3);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
    ExceptionList = local_10;
    return *(undefined4 *)(iVar2 + 8);
  }
  local_5c = operator_new(0x10);
  local_8 = 0;
  if (local_5c == (undefined4 *)0x0) {
    local_5c = (undefined4 *)0x0;
  }
  else {
    FUN_0062aea0(uVar1);
    *local_5c = ResourceNode::vftable;
  }
  local_8 = 0xffffffff;
  if (param_2 < 0x20584555) {
    if (param_2 == 0x20584554) {
      pvVar3 = operator_new(0x96c);
      local_8 = 5;
      if (pvVar3 == (void *)0x0) {
        local_74 = 0;
      }
      else {
        local_74 = FUN_00615fe0(0x20584554,param_3,param_1);
      }
      local_5c[2] = local_74;
      goto LAB_00603ee8;
    }
    if (param_2 == 0x2033504d) {
      pvVar3 = operator_new(0x160);
      local_8 = 3;
      if (pvVar3 == (void *)0x0) {
        local_6c = 0;
      }
      else {
        local_6c = FUN_0061dc00(0x2033504d,param_3,param_1,param_4);
      }
      local_5c[2] = local_6c;
      goto LAB_00603ee8;
    }
    if (param_2 == 0x2047474f) {
      pvVar3 = operator_new(0x160);
      local_8 = 4;
      if (pvVar3 == (void *)0x0) {
        local_70 = 0;
      }
      else {
        local_70 = FUN_0061dc00(0x2047474f,param_3,param_1,param_4);
      }
      local_5c[2] = local_70;
      goto LAB_00603ee8;
    }
  }
  else if (param_2 == 0x474e4f53) {
    pvVar3 = operator_new(0x160);
    local_8 = 2;
    if (pvVar3 == (void *)0x0) {
      local_68 = 0;
    }
    else {
      local_68 = FUN_0061dc00(0x20564157,param_3,param_1,0);
    }
    local_5c[2] = local_68;
    goto LAB_00603ee8;
  }
  pvVar3 = operator_new(0x160);
  local_8 = 1;
  if (pvVar3 == (void *)0x0) {
    local_64 = 0;
  }
  else {
    local_64 = FUN_0061dc00(param_2,param_3,param_1,1);
  }
  local_5c[2] = local_64;
LAB_00603ee8:
  local_8 = 0xffffffff;
  if (local_5c[2] == 0) {
    if ((local_5c[2] != 0) && ((undefined4 *)local_5c[2] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)local_5c[2])(1);
    }
    if (local_5c != (undefined4 *)0x0) {
      (**(code **)*local_5c)(1);
    }
    uVar4 = 0;
  }
  else {
    local_5c[3] = 1;
    FUN_0062aa20(local_5c);
    uVar4 = local_5c[2];
  }
  ExceptionList = local_10;
  return uVar4;
}

