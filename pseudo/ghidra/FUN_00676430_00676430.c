// FUN_00676430  00676430

void __fastcall FUN_00676430(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ad5a7;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = ResNumberList::vftable;
  local_8 = 0;
  while (iVar2 = FUN_0060c9a0(uVar1), iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_006765a0(0);
    uVar4 = FUN_006765a0(0);
    FUN_0060c890(uVar4);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  local_8 = 0xffffffff;
  FUN_0060c6a0();
  ExceptionList = local_10;
  return;
}

