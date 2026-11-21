// FUN_00532c20  00532c20

void __fastcall FUN_00532c20(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a485b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = SlotMachineRoom::vftable;
  local_8 = 0;
  FUN_005d13e0(uVar1);
  FUN_005de170();
  DAT_00793388 = 0;
  if (DAT_0079338c == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)*DAT_0079338c)(1);
  }
  DAT_0079338c = (undefined4 *)0x0;
  if (DAT_00793390 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)*DAT_00793390)(1);
  }
  pvVar4 = DAT_00793394;
  DAT_00793390 = (undefined4 *)0x0;
  if (DAT_00793394 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    FUN_00538580();
    operator_delete(pvVar4);
  }
  DAT_00793394 = (void *)0x0;
  local_8 = 0xffffffff;
  FUN_005d7bd0(uVar1,pvVar4,uVar3,uVar2);
  ExceptionList = local_10;
  return;
}

