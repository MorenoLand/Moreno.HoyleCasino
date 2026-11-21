// FUN_0063b930  0063b930

void __fastcall FUN_0063b930(CPropertySection *param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  char *pcVar5;
  void *pvVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  CPropertySection *pCVar11;
  undefined4 uVar12;
  undefined4 *local_16c;
  undefined4 *local_168;
  undefined4 *local_164;
  int local_160;
  int local_15c;
  undefined1 local_138 [32];
  char local_118 [256];
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abc00;
  local_10 = ExceptionList;
  local_18 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x1c0) == 0) {
    uVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))(local_18);
    pvVar3 = operator_new(-(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar2 * 8));
    *(void **)(param_1 + 0x1c0) = pvVar3;
  }
  (**(code **)(*DAT_0162ee80 + 0xf4))(*(undefined4 *)(param_1 + 0x1c0));
  uVar4 = FUN_005f3bf0(local_138);
  (**(code **)(*DAT_0162ee84 + 0x338))(uVar4);
  cVar1 = (**(code **)(*DAT_0162ee80 + 0xb0))();
  if (cVar1 == '\0') {
    pcVar5 = (char *)FUN_00630f40("SID_SHELL_GAMESETTINGS_FORMAT",local_138);
    sprintf(local_118,pcVar5);
  }
  else {
    pcVar5 = (char *)FUN_00630f40("SID_SHELL_GAMEPLAYERS_FORMAT",local_138);
    sprintf(local_118,pcVar5);
  }
  FUN_005fa5b0(0,0xffffffff,local_118,0x49,0x1f9,0x19,5,3,1,0x12,0xffffffff);
  local_15c = (**(code **)(*DAT_0162ee80 + 0xb8))();
  local_14 = local_15c;
  if (local_15c == 0) {
    local_15c = FUN_00630f40("SID_GENERIC_OK");
  }
  FUN_005f9de0(0,0,0x30d4e5,0x14e,0x188,1,local_15c,0x48,0x4b,0x4a,0xffffffff,0);
  local_160 = (**(code **)(*DAT_0162ee80 + 0xbc))();
  local_14 = local_160;
  if (local_160 == 0) {
    local_160 = FUN_00630f40("SID_GENERIC_CANCEL");
  }
  FUN_005f9de0(0,1,0x30d4de,0x1a8,0x188,1,local_160,0x48,0x4b,0x4a,0xffffffff,0);
  uVar4 = 0xd;
  FUN_005fb300(0);
  FUN_006026f0(uVar4);
  uVar4 = 0x1b;
  FUN_005fb300(1);
  FUN_006026f0(uVar4);
  local_164 = operator_new(0x21c);
  local_8 = 0;
  if (local_164 == (undefined4 *)0x0) {
    local_164 = (undefined4 *)0x0;
  }
  else {
    FUN_005ff310();
    *local_164 = SettingsDialogTab::vftable;
  }
  local_8 = 0xffffffff;
  uVar12 = 0xffffffff;
  uVar10 = 0x4a;
  uVar9 = 0x4b;
  uVar8 = 0x48;
  uVar4 = FUN_00630f40("SID_GENERIC_SETTINGS",0x48,0x4b,0x4a,0xffffffff);
  FUN_005fa1e0(local_164,0,3,0,0x30d4db,0,0,1,uVar4,uVar8,uVar9,uVar10,uVar12);
  local_168 = operator_new(0x21c);
  local_8 = 1;
  if (local_168 == (undefined4 *)0x0) {
    local_168 = (undefined4 *)0x0;
  }
  else {
    FUN_005ff310();
    *local_168 = SettingsDialogTab::vftable;
  }
  local_8 = 0xffffffff;
  uVar12 = 0xffffffff;
  uVar10 = 0x4a;
  uVar9 = 0x4b;
  uVar8 = 0x48;
  uVar4 = FUN_00630f40("SID_GENERIC_PLAYERS",0x48,0x4b,0x4a,0xffffffff);
  FUN_005fa1e0(local_168,0,4,0,0x30d4dc,0,0,1,uVar4,uVar8,uVar9,uVar10,uVar12);
  local_16c = operator_new(0x1d0);
  local_8 = 2;
  if (local_16c == (undefined4 *)0x0) {
    local_16c = (undefined4 *)0x0;
  }
  else {
    FUN_005ec5a0();
    *local_16c = SettingsHelpText::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005fa5b0(local_16c,0xffffffff,&PTR_006b27f8,0x23,0x140,0x25,7,0x180,1,0x11,0xffffffff);
  uVar4 = 0x32;
  pCVar11 = param_1;
  pvVar3 = CPropertySection::Get(param_1,4,(ulong *)0x0);
  pvVar6 = CPropertySection::Get(param_1,3,(ulong *)0x0);
  (**(code **)(*DAT_0162ee80 + 200))(pvVar6,pvVar3,pCVar11,uVar4);
  FUN_0063c260();
  cVar1 = (**(code **)(*DAT_0162ee80 + 0xb0))();
  if (cVar1 != '\0') {
    piVar7 = CPropertySection::Get(param_1,3,(ulong *)0x0);
    (**(code **)(*piVar7 + 0xd0))();
  }
  cVar1 = (**(code **)(*DAT_0162ee80 + 0xb4))();
  if (cVar1 != '\0') {
    piVar7 = CPropertySection::Get(param_1,4,(ulong *)0x0);
    (**(code **)(*piVar7 + 0xd0))();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

