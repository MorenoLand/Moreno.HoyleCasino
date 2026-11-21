// FUN_00583280  00583280

void __fastcall FUN_00583280(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a6bbb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = KenoRoom::vftable;
  local_8 = 0;
  if (*(char *)((int)param_1 + 0x89) != '\0') {
    FUN_005e1070(uVar1);
    FUN_00583830();
  }
  FUN_00583ae0();
  if (param_1[0x21] != 0) {
    if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x21])(1);
    }
    param_1[0x21] = 0;
  }
  FUN_005f38b0(0);
  if (DAT_00793580 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)*DAT_00793580)(1);
  }
  DAT_00793580 = (undefined4 *)0x0;
  DAT_0079357c = 0;
  local_8 = 0xffffffff;
  FUN_005d7bd0(uVar1,uVar2);
  ExceptionList = local_10;
  return;
}

