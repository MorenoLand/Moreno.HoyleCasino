// FUN_0065dee0  0065dee0

void __fastcall FUN_0065dee0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *local_3c;
  undefined4 local_38;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac8ec;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0065bb00(DAT_00781870 ^ (uint)&stack0xfffffffc);
  uVar12 = 0xffffffff;
  uVar11 = 0x12;
  uVar10 = 1;
  uVar9 = 3;
  uVar8 = 5;
  uVar7 = 0x19;
  uVar6 = 0x1f9;
  uVar5 = 0x49;
  uVar2 = FUN_00630f40("SID_SHELL_SIGNIN",0x49,0x1f9,0x19,5,3,1,0x12,0xffffffff);
  FUN_005fa5b0(0,0,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
  if ((*(char *)((int)param_1 + 0x1d5) != '\0') && ((char)param_1[0x75] == '\0')) {
    uVar2 = FUN_00630f40("SID_SHELL_SIGNINDIFFERENT");
    FUN_005fb5a0(0,uVar2);
  }
  FUN_005fa880(0,0,1,0x156,0xef,0x23,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,1,0x156,0xf0,0x24,1,0xff,0xff,0xff,0,0,0);
  FUN_005fa880(0,0,0x202,1,3,0x180,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0x202,1,4,0x181,1,0xff,0xff,0xff,0,0,0);
  FUN_005fa790(0,0xffffffff,&PTR_006b27f8,0x1f,0x10e,0xac,0xf5,0x28,1,0x78,0x7c,0xa1,0xff,0xff,0xff,
               0);
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    uVar9 = 0;
    uVar8 = 0xffffffff;
    uVar7 = 0x4a;
    uVar6 = 0x4b;
    uVar5 = 0x48;
    uVar2 = FUN_00630f40((&PTR_s_SID_GENERIC_OK_007709ec)[local_14],0x48,0x4b,0x4a,0xffffffff,0);
    FUN_005f9de0(0,local_14,*(undefined4 *)(&DAT_007709a4 + local_14 * 4),
                 *(undefined4 *)(&DAT_007709bc + local_14 * 8),
                 *(undefined4 *)(&DAT_007709c0 + local_14 * 8),1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9
                );
    if ((DAT_00795f95 != '\0') && ((local_14 == 2 || (local_14 == 3)))) {
      piVar3 = (int *)FUN_005fb300(local_14);
      (**(code **)(*piVar3 + 0xd0))();
    }
  }
  cVar1 = (**(code **)(*DAT_0162ee84 + 0xb0))();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb300(4);
    (**(code **)(*piVar3 + 0x70))();
    piVar3 = (int *)FUN_005fb300(5);
    (**(code **)(*piVar3 + 0x70))();
  }
  cVar1 = FUN_00639840();
  if (cVar1 != '\0') {
    FUN_005f9de0(0,1000,0x30d4ef,10,5,1,"Sync Viewer",0x48,0x4b,0x4a,0xffffffff,0);
  }
  uVar12 = 0xffffffff;
  uVar11 = 5;
  uVar10 = 1;
  uVar9 = 0x28;
  uVar8 = 10;
  uVar7 = 0x14;
  uVar6 = 200;
  uVar5 = 0x48;
  uVar2 = FUN_00630f40("SID_SHELL_PLAYERS_COLON",0x48,200,0x14,10,0x28,1,5,0xffffffff);
  FUN_005fa5b0(0,1,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
  pvVar4 = operator_new(0xcc);
  local_8 = 0;
  if (pvVar4 == (void *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_00660400();
  }
  local_8 = 0xffffffff;
  FUN_005fac90(local_38,0,0x30d4d8,4,0x26,1,0,0x30d4cc,0xd3,0x6c,0x30d4cb,0xd3,0x16,0x30d4cf,0xd2,
               0x26,0x58,0xd2,0x27,0x10,0x43,7,0x18,200,0x10,6,0x1f,0x45,0x42,0,0,0,0x30d4d9);
  local_3c = operator_new(0x70);
  local_8 = 1;
  if (local_3c == (undefined4 *)0x0) {
    local_3c = (undefined4 *)0x0;
  }
  else {
    FUN_00680b70();
    *local_3c = LoginHelpGroupBox::vftable;
  }
  local_8 = 0xffffffff;
  param_1[0x74] = (int)local_3c;
  *(int **)(param_1[0x74] + 4) = param_1;
  uVar12 = 0xffffffff;
  uVar11 = 0;
  uVar10 = 0x23;
  uVar9 = 0x47;
  uVar8 = 200;
  uVar7 = 10;
  uVar6 = 10;
  uVar5 = 0x48;
  uVar2 = FUN_00630f40("SID_GENERIC_HELP",0x48,10,10,200,0x47,0x23,0,0xffffffff);
  FUN_00680ca0(9,0x11c,1,0xdf,0x53,0x78,0x7c,0xa1,0xff,0xff,0xff,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9
               ,uVar10,uVar11,uVar12);
  (**(code **)(*(int *)param_1[0x74] + 0x74))();
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x360))();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_005fb300(2);
    (**(code **)(*piVar3 + 0xd0))();
    piVar3 = (int *)FUN_005fb300(3);
    (**(code **)(*piVar3 + 0xd0))();
  }
  FUN_0065e3c0();
  (**(code **)(*param_1 + 0x90))();
  ExceptionList = local_10;
  return;
}

