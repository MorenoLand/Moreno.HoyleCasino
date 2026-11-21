// FUN_00613360  00613360

void __thiscall FUN_00613360(int param_1,int param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab09c;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18) != param_2) ||
     (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x1c) != param_3)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(int *)(param_1 + 0x20) = param_2;
    *(int *)(param_1 + 0x24) = param_3;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x30) = param_2;
    *(int *)(param_1 + 0x34) = param_3;
    if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x50))(1,uVar1);
    }
    pvVar2 = operator_new(0x24);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_34 = 0;
    }
    else {
      local_34 = FUN_00623700(param_2,param_3,4,0);
    }
    *(undefined4 *)(param_1 + 0x50) = local_34;
  }
  ExceptionList = local_10;
  return;
}

