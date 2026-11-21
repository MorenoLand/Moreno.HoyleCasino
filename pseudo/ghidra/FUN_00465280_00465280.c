// FUN_00465280  00465280

void __fastcall FUN_00465280(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0069f46c;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = Deck::vftable;
  local_8 = 1;
  while (iVar2 = FUN_0060c9a0(uVar1), iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_0060ca40(0);
    FUN_0060c890(puVar3);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  local_8 = local_8 & 0xffffff00;
  FUN_0060c6a0();
  local_8 = 0xffffffff;
  FUN_0060c6a0();
  ExceptionList = local_10;
  return;
}

