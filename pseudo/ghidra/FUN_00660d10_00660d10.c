// FUN_00660d10  00660d10

void FUN_00660d10(void)

{
  undefined4 uVar1;
  void *pvVar2;
  int *piVar3;
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
  undefined4 local_28;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac981;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar13 = 0xffffffff;
  uVar12 = 0x12;
  uVar11 = 1;
  uVar10 = 3;
  uVar9 = 3;
  uVar8 = 0x19;
  uVar7 = 0xf4;
  uVar6 = 0x49;
  uVar1 = FUN_00630f40("SID_SHELL_NEWPLAYER",0x49,0xf4,0x19,3,3,1,0x12,0xffffffff,
                       DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005fa5b0(0,0xffffffff,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
  FUN_005fa880(0,0,0xfc,1,2,0x7c,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0xfc,1,3,0x7d,1,0xff,0xff,0xff,0,0,0);
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0x1dc);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_00661060();
    }
    local_8 = 0xffffffff;
    iVar5 = (-(uint)(local_14 != 0) & 0xe) + 0xd;
    uVar9 = 0xffffffff;
    uVar8 = 0x4a;
    uVar7 = 0x4b;
    uVar6 = 0x48;
    uVar1 = FUN_00630f40((&PTR_s_SID_GENERIC_OK_00770a90)[local_14],0x48,0x4b,0x4a,0xffffffff,iVar5)
    ;
    piVar3 = (int *)FUN_005f9de0(local_28,local_14,(-(uint)(local_14 != 0) & 0xfffffff9) + 0x30d4e5,
                                 *(undefined4 *)(&DAT_00770a80 + local_14 * 8),
                                 *(undefined4 *)(&DAT_00770a84 + local_14 * 8),1,uVar1,uVar6,uVar7,
                                 uVar8,uVar9,iVar5);
    if ((local_14 == 1) && (*(char *)(DAT_016306b0 + 0x1d4) != '\0')) {
      piVar4 = (int *)FUN_005fb720(0);
      iVar5 = (**(code **)(*piVar4 + 0xb8))();
      if (iVar5 == 0) {
        uVar1 = FUN_00630f40("SID_GENERIC_QUIT");
        (**(code **)(*piVar3 + 0xe0))(uVar1);
      }
    }
  }
  FUN_005fa6a0(0,0,0x30d4e3,0x15,0x2e,&PTR_006b27f8,0x1f,200,0x10,9,0x18,1,0x32,5);
  uVar1 = (**(code **)(*DAT_0162ee84 + 0x36c))();
  FUN_005fb810(0);
  FUN_0060c120(uVar1);
  uVar13 = 0xffffffff;
  uVar12 = 5;
  uVar11 = 2;
  uVar10 = 0x30;
  uVar9 = 0x1c;
  uVar8 = 0x14;
  uVar7 = 0x74;
  uVar6 = 0x48;
  uVar1 = FUN_00630f40("SID_SHELL_NAME_COLON",0x48,0x74,0x14,0x1c,0x30,2,5,0xffffffff);
  FUN_005fa5b0(0,0,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
  ExceptionList = local_10;
  return;
}

