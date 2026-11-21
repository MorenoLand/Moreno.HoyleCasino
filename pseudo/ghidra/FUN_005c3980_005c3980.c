// FUN_005c3980  005c3980

void __fastcall FUN_005c3980(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a869d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(param_1 + 0x30) != 0) && (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x30))(1,DAT_00781870 ^ (uint)&stack0xfffffffc);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_8 = 0xffffffff;
  FUN_005be450();
  ExceptionList = local_10;
  return;
}

