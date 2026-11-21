// FUN_005f79f0  005f79f0

void __fastcall FUN_005f79f0(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006aa223;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciPlane::vftable;
  local_8 = 0x12;
  FUN_005fb0c0(uVar2);
  FUN_005f9a80();
  cVar1 = FUN_005f8970();
  if ((cVar1 != '\0') && (puVar3 = (undefined4 *)FUN_005f3fe0(), puVar3 == param_1)) {
    FUN_005f3f90(param_1[0x5c]);
  }
  FUN_005f9b20();
  FUN_005f8ce0(param_1[0x5f]);
  iVar4 = FUN_0060c9a0();
  if (iVar4 != 0) {
    FUN_005e9f20("cast.Size() == 0","..\\scilib\\sciplane.cpp",0x3b);
  }
  while (iVar4 = FUN_0060c9a0(), iVar4 != 0) {
    puVar3 = (undefined4 *)FUN_0060ca40(0);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  if (param_1[0x53] != 0) {
    operator_delete((void *)param_1[0x53]);
  }
  iVar4 = FUN_0060c9a0();
  if (iVar4 != 0) {
    FUN_005e9f20("props.Size() == 0","..\\scilib\\sciplane.cpp",0x42);
  }
  while (iVar4 = FUN_0060c9a0(), iVar4 != 0) {
    puVar3 = (undefined4 *)FUN_0060ca40(0);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  if ((undefined4 *)param_1[0x5f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5f])(1);
  }
  if ((*(char *)(param_1 + 0x5a) != '\0') && ((undefined4 *)param_1[0x6a] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x6a])(1);
  }
  local_8._0_1_ = 0x11;
  FUN_0060c6a0();
  local_8._0_1_ = 0x10;
  FUN_0060c6a0();
  local_8._0_1_ = 0xf;
  FUN_0060c6a0();
  local_8._0_1_ = 0xe;
  FUN_0060c6a0();
  local_8._0_1_ = 0xd;
  FUN_0060c6a0();
  local_8._0_1_ = 0xc;
  FUN_0060c6a0();
  local_8._0_1_ = 0xb;
  FUN_0060c6a0();
  local_8._0_1_ = 10;
  FUN_0060c6a0();
  local_8._0_1_ = 9;
  FUN_0060c6a0();
  local_8._0_1_ = 8;
  FUN_0060c6a0();
  local_8._0_1_ = 7;
  FUN_0060c6a0();
  local_8._0_1_ = 6;
  FUN_0060c6a0();
  local_8._0_1_ = 5;
  FUN_0060c6a0();
  local_8._0_1_ = 4;
  FUN_0060c6a0();
  local_8._0_1_ = 3;
  FUN_0060c6a0();
  local_8._0_1_ = 2;
  FUN_0060c6a0();
  local_8._0_1_ = 1;
  FUN_0060c6a0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0060c6a0();
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

