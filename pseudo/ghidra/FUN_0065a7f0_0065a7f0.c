// FUN_0065a7f0  0065a7f0

void __fastcall FUN_0065a7f0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ac6fc;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = PieceSelectButton::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 0x86] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x86])(1);
    }
    if ((undefined4 *)param_1[local_14 + 0x89] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x89])(1);
    }
  }
  if ((undefined4 *)param_1[0x8c] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x8c])(1,uVar1);
  }
  if ((undefined4 *)param_1[0x8d] == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)**(undefined4 **)param_1[0x8d])(1);
  }
  if ((undefined4 *)param_1[0x8e] == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(code *)**(undefined4 **)param_1[0x8e])(1);
  }
  local_8 = 0xffffffff;
  FUN_006060e0(uVar1,uVar4,uVar3,uVar2);
  ExceptionList = local_10;
  return;
}

