// FUN_00677f70  00677f70

void FUN_00677f70(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_28;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad737;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = FUN_005fb720(0);
  if (iVar2 == 0) {
    FUN_005e9f20("GetListBox(0)","..\\casinoShell\\cardsdialog.cpp",0xdb,uVar1);
  }
  local_14 = 0;
  while( true ) {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x194))();
    if (iVar2 <= local_14) break;
    local_28 = operator_new(0x18);
    local_8 = 0;
    if (local_28 == (undefined4 *)0x0) {
      local_28 = (undefined4 *)0x0;
    }
    else {
      FUN_00629ab0();
      *local_28 = CardBacksListText::vftable;
    }
    local_8 = 0xffffffff;
    iVar2 = local_14;
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x198))(local_14);
    local_28[5] = uVar3;
    uVar4 = 0;
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x1a8))(local_28[5],0xffffffff,0);
    FUN_005fb720(0);
    FUN_00628980(local_28,uVar3,uVar4,iVar2);
    local_14 = local_14 + 1;
  }
  FUN_005fb720(0);
  FUN_00628d80();
  ExceptionList = local_10;
  return;
}

