// FUN_00673b60  00673b60

void FUN_00673b60(undefined4 param_1,char *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad36e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = operator_new(0x30);
  local_8 = 0;
  if (local_24 == (undefined4 *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    FUN_00629ab0(uVar1);
    *local_24 = SavedGameListText::vftable;
  }
  local_8 = 0xffffffff;
  uVar4 = 0;
  uVar3 = 0xffffffff;
  puVar2 = local_24;
  FUN_005fb720(0);
  FUN_00628980(puVar2,param_1,uVar3,uVar4);
  strcpy((char *)(local_24 + 5),param_2);
  ExceptionList = local_10;
  return;
}

