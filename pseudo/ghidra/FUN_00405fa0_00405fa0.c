// FUN_00405fa0  00405fa0

void __fastcall FUN_00405fa0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
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
  undefined4 *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069d829;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar15 = 0;
  uVar13 = 0x14;
  uVar11 = 0xffffffff;
  uVar9 = 0x42;
  uVar7 = 0x45;
  uVar5 = 0x1f;
  uVar2 = FUN_00630f40("SID_CASINO_DEALERVOICE",0x1f,0x45,0x42,0xffffffff,0x14,0,
                       DAT_00781870 ^ (uint)&stack0xfffffffc);
  uVar2 = FUN_005f9ef0(0,0x32,0x30d4c9,0x14,0x55,2,uVar2,uVar5,uVar7,uVar9,uVar11,uVar13,uVar15);
  FUN_005ff5a0(uVar2);
  uVar15 = 0;
  uVar13 = 0x14;
  uVar11 = 0xffffffff;
  uVar9 = 0x42;
  uVar7 = 0x45;
  uVar5 = 0x1f;
  uVar2 = FUN_00630f40("SID_CASINO_CONTINUEBUTTON",0x1f,0x45,0x42,0xffffffff,0x14,0);
  uVar2 = FUN_005f9ef0(0,0x33,0x30d4c9,0x14,0x69,2,uVar2,uVar5,uVar7,uVar9,uVar11,uVar13,uVar15);
  FUN_005ff5a0(uVar2);
  uVar16 = 0;
  uVar14 = 0xff;
  uVar12 = 0xff;
  uVar10 = 0xff;
  uVar8 = 0xa1;
  uVar6 = 0x7c;
  uVar4 = 0x78;
  uVar15 = 2;
  uVar13 = 0x118;
  uVar11 = 0x106;
  uVar9 = 0x54;
  uVar7 = 0xf0;
  uVar5 = 0x48;
  uVar2 = FUN_00630f40("SID_GENERIC_HELP",0x48,0xf0,0x54,0x106,0x118,2,0x78,0x7c,0xa1,0xff,0xff,0xff
                       ,0);
  uVar2 = FUN_005fa790(0,10,uVar2,uVar5,uVar7,uVar9,uVar11,uVar13,uVar15,uVar4,uVar6,uVar8,uVar10,
                       uVar12,uVar14,uVar16);
  FUN_005ff5a0(uVar2);
  local_20 = operator_new(0x1d0);
  local_8 = 0;
  if (local_20 == (undefined4 *)0x0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    FUN_005ec5a0();
    *local_20 = BaccaratSettingsHelpText::vftable;
  }
  local_8 = 0xffffffff;
  uVar2 = FUN_005fa5b0(local_20,0x32,&PTR_006b27f8,0x23,0xe6,0x4c,0x10c,0x124,3,5,0xffffffff);
  FUN_005ff5a0(uVar2);
  cVar1 = FUN_00408e80();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb350(0x32);
    (**(code **)(*piVar3 + 0xf4))();
  }
  cVar1 = FUN_00408ec0();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb350(0x33);
    (**(code **)(*piVar3 + 0xf4))();
  }
  if (DAT_007947b0 != 0) {
    cVar1 = FUN_005cdd60();
    if (cVar1 == '\0') {
      piVar3 = (int *)FUN_005fb350(0x33);
      (**(code **)(*piVar3 + 0xf4))();
    }
    else {
      piVar3 = (int *)FUN_005fb350(0x33);
      (**(code **)(*piVar3 + 0xf8))();
    }
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  ExceptionList = local_10;
  return;
}

