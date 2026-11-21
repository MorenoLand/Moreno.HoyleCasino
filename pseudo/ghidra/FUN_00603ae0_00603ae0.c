// FUN_00603ae0  00603ae0

void FUN_00603ae0(int param_1)

{
  uint uVar1;
  undefined4 *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aaa01;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    local_24 = operator_new(0x10);
    local_8 = 0;
    if (local_24 == (undefined4 *)0x0) {
      local_24 = (undefined4 *)0x0;
    }
    else {
      FUN_0062aea0(uVar1);
      *local_24 = ResourceNode::vftable;
    }
    local_8 = 0xffffffff;
    local_24[2] = param_1;
    local_24[3] = 1;
    FUN_0062aa20(local_24);
  }
  ExceptionList = local_10;
  return;
}

