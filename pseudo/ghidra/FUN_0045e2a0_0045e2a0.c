// FUN_0045e2a0  0045e2a0

void __fastcall FUN_0045e2a0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
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
  undefined4 uVar18;
  undefined4 *local_3c;
  char *local_2c [4];
  char *local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f2e3;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c[0] = "SID_PAIGOWPOKER_OPTION_1";
  local_2c[1] = "SID_PAIGOWPOKER_OPTION_2";
  local_2c[2] = "SID_PAIGOWPOKER_OPTION_3";
  local_2c[3] = "SID_PAIGOWPOKER_OPTION_4";
  local_1c = "SID_PAIGOWPOKER_OPTION_5";
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    uVar17 = 0;
    uVar15 = 0x14;
    uVar13 = 0xffffffff;
    uVar11 = 0x42;
    uVar9 = 0x45;
    uVar7 = 0x1f;
    uVar3 = FUN_00630f40(local_2c[local_18],0x1f,0x45,0x42,0xffffffff,0x14,0);
    uVar3 = FUN_005f9ef0(0,local_18 + 0x32,0x30d4c9,0x14,local_18 * 0x14 + 0x55,1,uVar3,uVar7,uVar9,
                         uVar11,uVar13,uVar15,uVar17);
    FUN_005ff5a0(uVar3);
  }
  uVar18 = 0;
  uVar16 = 0xff;
  uVar14 = 0xff;
  uVar12 = 0xff;
  uVar10 = 0xa1;
  uVar8 = 0x7c;
  uVar6 = 0x78;
  uVar17 = 2;
  uVar15 = 0x104;
  uVar13 = 0x106;
  uVar11 = 0x68;
  uVar9 = 0xf0;
  uVar7 = 0x48;
  uVar3 = FUN_00630f40("SID_GENERIC_HELP",0x48,0xf0,0x68,0x106,0x104,2,0x78,0x7c,0xa1,0xff,0xff,0xff
                       ,0,uVar2);
  uVar3 = FUN_005fa790(0,10,uVar3,uVar7,uVar9,uVar11,uVar13,uVar15,uVar17,uVar6,uVar8,uVar10,uVar12,
                       uVar14,uVar16,uVar18);
  FUN_005ff5a0(uVar3);
  local_3c = operator_new(0x1d0);
  local_8 = 0;
  if (local_3c == (undefined4 *)0x0) {
    local_3c = (undefined4 *)0x0;
  }
  else {
    FUN_005ec5a0();
    *local_3c = PaiGowSettingsHelpText::vftable;
  }
  local_8 = 0xffffffff;
  uVar3 = FUN_005fa5b0(local_3c,0x32,&PTR_006b27f8,0x23,0xe6,0x60,0x10c,0x110,3,5,0xffffffff);
  FUN_005ff5a0(uVar3);
  local_14 = (char *)FUN_006375d0(0xffffffff);
  cVar1 = FUN_0045f940();
  if (cVar1 != '\0') {
    piVar4 = (int *)FUN_005fb350(0x32);
    (**(code **)(*piVar4 + 0xf4))();
  }
  if (local_14[2] != '\0') {
    piVar4 = (int *)FUN_005fb350(0x33);
    (**(code **)(*piVar4 + 0xf4))();
  }
  if (local_14[1] != '\0') {
    piVar4 = (int *)FUN_005fb350(0x34);
    (**(code **)(*piVar4 + 0xf4))();
  }
  if (*(int *)(DAT_00790740 + 0x98) != 0) {
    cVar1 = FUN_0045b0f0();
    if (cVar1 == '\0') {
      piVar4 = (int *)FUN_005fb350(0x34);
      (**(code **)(*piVar4 + 0xf4))();
    }
    else {
      piVar4 = (int *)FUN_005fb350(0x34);
      (**(code **)(*piVar4 + 0xf8))();
    }
  }
  cVar1 = FUN_0045f990();
  if (cVar1 != '\0') {
    piVar4 = (int *)FUN_005fb350(0x35);
    (**(code **)(*piVar4 + 0xf4))();
  }
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    iVar5 = (**(code **)(*DAT_00790734 + 0x2b0))();
    if (iVar5 != 100) goto LAB_0045e59a;
  }
  piVar4 = (int *)FUN_005fb350(0x35);
  (**(code **)(*piVar4 + 0xd0))();
LAB_0045e59a:
  if (*local_14 != '\0') {
    piVar4 = (int *)FUN_005fb350(0x36);
    (**(code **)(*piVar4 + 0xf4))();
  }
  cVar1 = FUN_005da830();
  if (cVar1 != '\0') {
    piVar4 = (int *)FUN_005fb350(0x32);
    (**(code **)(*piVar4 + 0xd0))();
    piVar4 = (int *)FUN_005fb350(0x35);
    (**(code **)(*piVar4 + 0xd0))();
  }
  if (*(int *)(param_1 + 0x80) == 1) {
    piVar4 = (int *)FUN_005fb350(0x35);
    (**(code **)(*piVar4 + 0xf8))();
    piVar4 = (int *)FUN_005fb350(0x35);
    (**(code **)(*piVar4 + 0xd0))();
    piVar4 = (int *)FUN_005fb350(0x35);
    (**(code **)(*piVar4 + 0x70))();
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  ExceptionList = local_10;
  return;
}

