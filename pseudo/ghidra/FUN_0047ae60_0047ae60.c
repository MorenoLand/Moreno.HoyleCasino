// FUN_0047ae60  0047ae60

void __fastcall FUN_0047ae60(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069ff08;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0x7d2) = 0;
  FUN_005f87d0(uVar1);
  iVar2 = FUN_0047e1d0();
  if (iVar2 == 0) {
    local_3c = operator_new(0x28);
    local_8 = 2;
    if (local_3c == (undefined4 *)0x0) {
      local_3c = (undefined4 *)0x0;
    }
    else {
      FUN_005fc0d0(0);
      *local_3c = DealDrawScript::vftable;
    }
    local_8 = 0xffffffff;
    FUN_005fc420(local_3c);
  }
  else if (iVar2 == 1) {
    local_34 = operator_new(0x28);
    local_8 = 0;
    if (local_34 == (undefined4 *)0x0) {
      local_34 = (undefined4 *)0x0;
    }
    else {
      FUN_005fc0d0(0);
      *local_34 = DealStudScript::vftable;
    }
    local_8 = 0xffffffff;
    FUN_005fc420(local_34);
  }
  else if (iVar2 == 2) {
    local_38 = operator_new(0x28);
    local_8 = 1;
    if (local_38 == (undefined4 *)0x0) {
      local_38 = (undefined4 *)0x0;
    }
    else {
      FUN_005fc0d0(0);
      *local_38 = DealHoldemScript::vftable;
    }
    local_8 = 0xffffffff;
    FUN_005fc420(local_38);
  }
  else {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerGame.cpp",0x269);
  }
  ExceptionList = local_10;
  return;
}

