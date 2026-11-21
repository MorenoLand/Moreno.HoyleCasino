// FUN_004c62d0  004c62d0

void __thiscall FUN_004c62d0(int param_1,char param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_64;
  undefined4 local_5c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a2203;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x70) != 0) {
    if (param_2 == '\0') {
      *(undefined4 *)(param_1 + 0x6c) = 0;
      if ((*(int *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0)) {
        (**(code **)**(undefined4 **)(param_1 + 8))(1,uVar1);
      }
      pvVar2 = operator_new(0x10);
      local_8 = 2;
      if (pvVar2 == (void *)0x0) {
        local_6c = 0;
      }
      else {
        local_6c = FUN_0060c5f0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 8) = local_6c;
      if ((*(int *)(param_1 + 0xc) != 0) && (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0))
      {
        (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
      }
      pvVar2 = operator_new(0x10);
      local_8 = 3;
      if (pvVar2 == (void *)0x0) {
        local_74 = 0;
      }
      else {
        local_74 = FUN_0060c5f0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0xc) = local_74;
      FUN_004da2f0();
      FUN_004db630();
      FUN_004dbdd0();
      FUN_004c6550();
    }
    else {
      if ((*(int *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0)) {
        (**(code **)**(undefined4 **)(param_1 + 8))(1);
      }
      pvVar2 = operator_new(0x10);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_5c = 0;
      }
      else {
        local_5c = FUN_0060c5f0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 8) = local_5c;
      if ((*(int *)(param_1 + 0xc) != 0) && (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0))
      {
        (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
      }
      pvVar2 = operator_new(0x10);
      local_8 = 1;
      if (pvVar2 == (void *)0x0) {
        local_64 = 0;
      }
      else {
        local_64 = FUN_0060c5f0();
      }
      *(undefined4 *)(param_1 + 0xc) = local_64;
    }
  }
  ExceptionList = local_10;
  return;
}

