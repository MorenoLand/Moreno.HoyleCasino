// FUN_00593580  00593580

void __fastcall FUN_00593580(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_4c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a720e;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = FourCardPokerDiscardDialog::vftable;
  local_8 = 0;
  puVar1 = (undefined4 *)param_1[0x78];
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(3,uVar2);
    }
  }
  puVar1 = (undefined4 *)param_1[0x79];
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      operator_delete(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  puVar1 = (undefined4 *)param_1[0x7a];
  if (puVar1 == (undefined4 *)0x0) {
    local_4c = 0;
  }
  else if (puVar1[-1] == 0) {
    operator_delete(puVar1 + -1);
    local_4c = 0;
  }
  else {
    local_4c = (**(code **)*puVar1)(3);
  }
  local_8 = 0xffffffff;
  FUN_00518980(uVar2,local_4c);
  ExceptionList = local_10;
  return;
}

