// FUN_00479480  00479480

void __fastcall FUN_00479480(undefined4 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int local_18;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0069fe01;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = PokerGame::vftable;
  local_8 = 1;
  if (*(char *)((int)param_1 + 0x7d3) != '\0') {
    uVar2 = FUN_0064c8a0(0,0,uVar1);
    FUN_005dcb00(0,uVar2);
    FUN_005d5af0(uVar2);
  }
  FUN_0047fab0();
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
  }
  if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd])(1);
  }
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
  }
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 1])(1);
    }
  }
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[9])(1);
  }
  if ((undefined4 *)param_1[0x126] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x126])(1);
  }
  if ((undefined4 *)param_1[0x127] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x127])(1);
  }
  if ((undefined4 *)param_1[0x128] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x128])(1);
  }
  if ((undefined4 *)param_1[0x37] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x37])(1);
  }
  if ((undefined4 *)param_1[0x38] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x38])(1);
  }
  if ((undefined4 *)param_1[0x39] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x39])(1);
  }
  for (local_18 = 0; local_18 < 200; local_18 = local_18 + 1) {
    if ((undefined4 *)param_1[local_18 + 300] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_18 + 300])(1);
    }
  }
  local_8 = local_8 & 0xffffff00;
  FUN_004f4300();
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

