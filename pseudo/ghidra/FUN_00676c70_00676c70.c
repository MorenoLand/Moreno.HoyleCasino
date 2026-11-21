// FUN_00676c70  00676c70

void __fastcall FUN_00676c70(int param_1)

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
  undefined4 *local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad671;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar9 = 0xffffffff;
  uVar8 = 0x12;
  uVar7 = 1;
  uVar6 = 3;
  uVar5 = 3;
  uVar4 = 0x19;
  uVar3 = 0x222;
  uVar2 = 0x49;
  uVar1 = FUN_00630f40("SID_SHELL_BACKGROUNDS",0x49,0x222,0x19,3,3,1,0x12,0xffffffff,
                       DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005fa5b0(0,0,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  FUN_005fa880(0,0,0x22a,1,3,0x158,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0x22a,1,4,0x159,1,0xff,0xff,0xff,0,0,0);
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x4a;
    uVar3 = 0x4b;
    uVar2 = 0x48;
    uVar1 = FUN_00630f40((&PTR_s_SID_GENERIC_OK_007811b0)[local_14],0x48,0x4b,0x4a,0xffffffff,0);
    FUN_005f9de0(0,local_14,(-(uint)(local_14 != 0) & 0xfffffff9) + 0x30d4e5,local_14 * 0x5a + 0x11c
                 ,0x160,1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  }
  uVar1 = 0xd;
  FUN_005fb300(0);
  FUN_006026f0(uVar1);
  uVar1 = 0x1b;
  FUN_005fb300(1);
  FUN_006026f0(uVar1);
  uVar9 = 0xffffffff;
  uVar8 = 5;
  uVar7 = 1;
  uVar6 = 0x3a;
  uVar5 = 0x19;
  uVar4 = 0x14;
  uVar3 = 200;
  uVar2 = 0x48;
  uVar1 = FUN_00630f40("SID_SHELL_BACKGROUNDS_COLON",0x48,200,0x14,0x19,0x3a,1,5,0xffffffff);
  FUN_005fa5b0(0,0xffffffff,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  FUN_005fac90(0,0,0x30d4eb,0x13,0x38,1,0,0x30d4cc,0xd3,0xce,0x30d4cb,0xd3,0x16,0x30d4cf,0xd2,0x25,
               0xbb,0xd2,0x25,0x10,0xa5,7,0x18,200,0x10,0xc,0x1f,0x45,0x42,0,0,0,0x30d4d9);
  uVar7 = 0xff;
  uVar6 = 0;
  uVar5 = 2;
  uVar4 = 0x3b;
  uVar3 = 0x133;
  uVar2 = 0;
  uVar1 = (**(code **)(*DAT_0162ee84 + 0x1d4))(0,0x133,0x3b,2,0,0xff,0);
  FUN_005f9ce0(0,0,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  FUN_005f9ce0(0,0xffffffff,0x30d4f4,300,0x23,1,0,0xff,0);
  FUN_005fa5b0(0,1,&PTR_006b27f8,0x1f,0xd7,0x11,0x133,0x28,3,5,0xffffffff);
  local_24 = operator_new(0x70);
  local_8 = 0;
  if (local_24 == (undefined4 *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    FUN_00680b70();
    *local_24 = BackgroundsDialogHelpGroupBox::vftable;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x1bc) = local_24;
  *(int *)(*(int *)(param_1 + 0x1bc) + 4) = param_1;
  uVar9 = 0xffffffff;
  uVar8 = 0;
  uVar7 = 0x23;
  uVar6 = 0x47;
  uVar5 = 0xe6;
  uVar4 = 10;
  uVar3 = 10;
  uVar2 = 0x48;
  uVar1 = FUN_00630f40("SID_GENERIC_HELP",0x48,10,10,0xe6,0x47,0x23,0,0xffffffff);
  FUN_00680ca0(0x125,0xfb,1,0xf4,0x54,0x78,0x7c,0xa1,0xff,0xff,0xff,uVar1,uVar2,uVar3,uVar4,uVar5,
               uVar6,uVar7,uVar8,uVar9);
  (**(code **)(**(int **)(param_1 + 0x1bc) + 0x74))();
  FUN_00676fc0();
  ExceptionList = local_10;
  return;
}

