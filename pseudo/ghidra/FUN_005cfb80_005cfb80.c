// FUN_005cfb80  005cfb80

void FUN_005cfb80(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *local_2c;
  undefined4 local_28;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8d03;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar8 = 3;
  uVar6 = 0;
  uVar4 = 0x49;
  uVar1 = FUN_00630f40("SID_CASINO_ENTERCREDITS",0x49,0,3,DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f73e0(uVar1,uVar4,uVar6,uVar8);
  FUN_005fa880(0,0,0xfc,1,2,0x7c,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0xfc,1,3,0x7d,1,0xff,0xff,0xff,0,0,0);
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    if (local_14 == 0) {
      local_28 = FUN_00630f40("SID_GENERIC_OK");
    }
    else {
      local_28 = FUN_00630f40("SID_GENERIC_CANCEL");
    }
    FUN_005f9de0(0,local_14,(-(uint)(local_14 != 0) & 0xfffffff9) + 0x30d4e5,
                 (-(local_14 != 0) & 0x5aU) + 0x2b,0x83,1,local_28,0x48,0x4b,0x4a,0xffffffff,
                 (-(uint)(local_14 != 0) & 0xfffffff3) + 0xd);
  }
  local_2c = operator_new(0x1fc);
  local_8 = 0;
  if (local_2c == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    FUN_0060b4a0();
    *local_2c = CreditEditBox::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005fa6a0(local_2c,0,0x30d4e3,0x1a,0x2f,&PTR_006b27f8,0x1f,200,0x10,9,0x18,1,6,5);
  uVar9 = 0xffffffff;
  uVar7 = 5;
  uVar5 = 2;
  uVar3 = 0x31;
  uVar2 = 0x21;
  uVar8 = 0x14;
  uVar6 = 0x74;
  uVar4 = 0x48;
  uVar1 = FUN_00630f40("SID_CASINO_CREDITS_COLON",0x48,0x74,0x14,0x21,0x31,2,5,0xffffffff);
  FUN_005fa5b0(0,0,uVar1,uVar4,uVar6,uVar8,uVar2,uVar3,uVar5,uVar7,uVar9);
  ExceptionList = local_10;
  return;
}

