// FUN_00628220  00628220

void __fastcall FUN_00628220(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006ab54f;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciListBox::vftable;
  local_8 = 2;
  while (iVar2 = FUN_0060c9a0(uVar1), iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_0060ca40(0);
    FUN_0060c890(puVar3);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  while (iVar2 = FUN_0060c9a0(uVar1), iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_0060ca40(0);
    FUN_0060c890(puVar3);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  if (param_1[0x31] != 0) {
    operator_delete((void *)param_1[0x31]);
    param_1[0x31] = 0;
  }
  if (param_1[0x32] != 0) {
    operator_delete((void *)param_1[0x32]);
    param_1[0x32] = 0;
  }
  local_8._0_1_ = 1;
  FUN_0060c6a0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0060c6a0();
  local_8 = 0xffffffff;
  FUN_00614a10();
  ExceptionList = local_10;
  return;
}

