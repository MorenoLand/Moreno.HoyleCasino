// FUN_00632890  00632890

undefined4 __thiscall FUN_00632890(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab984;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  switch(param_2) {
  case 1000:
    pvVar2 = operator_new(0x84);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_3c = 0;
      local_48 = local_3c;
    }
    else {
      local_48 = FUN_0066b820();
    }
    break;
  case 0x3e9:
    pvVar2 = operator_new(100);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_40 = 0;
      local_48 = local_40;
    }
    else {
      local_48 = FUN_0066b230();
    }
    break;
  case 0x3ea:
    pvVar2 = operator_new(0x5c);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_44 = 0;
      local_48 = local_44;
    }
    else {
      local_48 = FUN_0066ace0();
    }
    break;
  case 0x3eb:
    pvVar2 = operator_new(0x88);
    local_8 = 3;
    if (pvVar2 == (void *)0x0) {
      local_48 = 0;
    }
    else {
      local_48 = FUN_006695e0(uVar1);
    }
    break;
  default:
    local_48 = 0;
    break;
  case 0x44c:
    *(undefined1 *)(param_1 + 0x24) = 1;
    local_48 = 0;
  }
  ExceptionList = local_10;
  return local_48;
}

