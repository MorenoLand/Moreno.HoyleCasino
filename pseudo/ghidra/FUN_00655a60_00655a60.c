// FUN_00655a60  00655a60

void FUN_00655a60(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac5b2;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = FUN_005fb720(0xb);
  if (iVar2 == 0) {
    FUN_005e9f20("GetListBox(ED_LISTBOX_BACKGROUDMUSIC)","..\\casinoShell\\environmentdialog.cpp",
                 0x1b1,uVar1);
  }
  local_14 = 0;
  while( true ) {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x17c))();
    if (iVar2 <= local_14) break;
    local_30 = operator_new(0x18);
    local_8 = 0;
    if (local_30 == (undefined4 *)0x0) {
      local_30 = (undefined4 *)0x0;
    }
    else {
      FUN_00629ab0();
      *local_30 = MusicListText::vftable;
    }
    local_8 = 0xffffffff;
    iVar2 = local_14;
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x180))(local_14);
    local_30[5] = uVar3;
    uVar4 = 0;
    uVar3 = (**(code **)(*DAT_0162ee84 + 400))(local_30[5],0xffffffff,0);
    FUN_005fb720(0xb);
    FUN_00628980(local_30,uVar3,uVar4,iVar2);
    local_14 = local_14 + 1;
  }
  FUN_005fb720(0xb);
  FUN_00628d80();
  local_34 = operator_new(0x18);
  local_8 = 1;
  if (local_34 == (undefined4 *)0x0) {
    local_34 = (undefined4 *)0x0;
  }
  else {
    FUN_00629ab0();
    *local_34 = MusicListText::vftable;
  }
  local_8 = 0xffffffff;
  local_34[5] = 0xffffffff;
  uVar5 = 0;
  uVar4 = 0xffffffff;
  uVar3 = FUN_00630f40("SID_SHELL_RANDOM",0xffffffff,0);
  FUN_005fb720(0xb);
  FUN_00628980(local_34,uVar3,uVar4,uVar5);
  ExceptionList = local_10;
  return;
}

