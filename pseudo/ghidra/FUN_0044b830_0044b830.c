// FUN_0044b830  0044b830

void __fastcall FUN_0044b830(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *local_34;
  char *local_24 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069ee93;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24[2] = "SID_CASINO_DEALERVOICE";
  local_24[3] = "SID_CASINO_CONTINUEBUTTON";
  local_24[0] = (char *)0x32;
  local_24[1] = (char *)0x33;
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    uVar16 = 0;
    uVar14 = 0x14;
    uVar12 = 0xffffffff;
    uVar10 = 0x42;
    uVar8 = 0x45;
    uVar6 = 0x1f;
    uVar3 = FUN_00630f40(local_24[local_14 + 2],0x1f,0x45,0x42,0xffffffff,0x14,0);
    uVar3 = FUN_005f9ef0(0,local_24[local_14],0x30d4c9,0x14,local_14 * 0x14 + 0x55,1,uVar3,uVar6,
                         uVar8,uVar10,uVar12,uVar14,uVar16);
    FUN_005ff5a0(uVar3);
  }
  uVar17 = 0;
  uVar15 = 0xff;
  uVar13 = 0xff;
  uVar11 = 0xff;
  uVar9 = 0xa1;
  uVar7 = 0x7c;
  uVar5 = 0x78;
  uVar16 = 2;
  uVar14 = 0x118;
  uVar12 = 0x106;
  uVar10 = 0x54;
  uVar8 = 0xf0;
  uVar6 = 0x48;
  uVar3 = FUN_00630f40("SID_GENERIC_HELP",0x48,0xf0,0x54,0x106,0x118,2,0x78,0x7c,0xa1,0xff,0xff,0xff
                       ,0,uVar2);
  uVar3 = FUN_005fa790(0,10,uVar3,uVar6,uVar8,uVar10,uVar12,uVar14,uVar16,uVar5,uVar7,uVar9,uVar11,
                       uVar13,uVar15,uVar17);
  FUN_005ff5a0(uVar3);
  local_34 = operator_new(0x1d0);
  local_8 = 0;
  if (local_34 == (undefined4 *)0x0) {
    local_34 = (undefined4 *)0x0;
  }
  else {
    FUN_005ec5a0();
    *local_34 = LetItRideSettingsHelpText::vftable;
  }
  local_8 = 0xffffffff;
  uVar3 = FUN_005fa5b0(local_34,0x32,&PTR_006b27f8,0x23,0xe6,0x4c,0x10c,0x124,3,5,0xffffffff);
  FUN_005ff5a0(uVar3);
  cVar1 = FUN_0044c7f0();
  if (cVar1 != '\0') {
    piVar4 = (int *)FUN_005fb350(0x32);
    (**(code **)(*piVar4 + 0xf4))();
  }
  cVar1 = FUN_0044c830();
  if (cVar1 != '\0') {
    piVar4 = (int *)FUN_005fb350(0x33);
    (**(code **)(*piVar4 + 0xf4))();
  }
  if (DAT_007947b0 != 0) {
    cVar1 = FUN_005cdd60();
    if (cVar1 == '\0') {
      piVar4 = (int *)FUN_005fb350(0x33);
      (**(code **)(*piVar4 + 0xf4))();
    }
    else {
      piVar4 = (int *)FUN_005fb350(0x33);
      (**(code **)(*piVar4 + 0xf8))();
    }
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  ExceptionList = local_10;
  return;
}

