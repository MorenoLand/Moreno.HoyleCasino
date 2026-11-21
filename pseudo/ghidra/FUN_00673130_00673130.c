// FUN_00673130  00673130

void __thiscall FUN_00673130(int param_1,undefined1 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *local_64;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad348;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0x1c4) = param_2;
  uVar12 = 0xd;
  uVar10 = 0xffffffff;
  uVar9 = 0x4a;
  uVar8 = 0x4b;
  uVar7 = 0x48;
  uVar3 = FUN_00630f40("SID_GENERIC_OK",0x48,0x4b,0x4a,0xffffffff,0xd,uVar2);
  FUN_005f9de0(0,0,0x30d4e5,(-(uint)(*(char *)(param_1 + 0x1c4) != '\0') & 0x5a) + 0x11c,0x160,1,
               uVar3,uVar7,uVar8,uVar9,uVar10,uVar12);
  uVar12 = 0x1b;
  uVar10 = 0xffffffff;
  uVar9 = 0x4a;
  uVar8 = 0x4b;
  uVar7 = 0x48;
  uVar3 = FUN_00630f40("SID_GENERIC_CANCEL",0x48,0x4b,0x4a,0xffffffff,0x1b);
  FUN_005f9de0(0,1,0x30d4de,(-(uint)(*(char *)(param_1 + 0x1c4) != '\0') & 0x5a) + 0x176,0x160,1,
               uVar3,uVar7,uVar8,uVar9,uVar10,uVar12);
  FUN_005fa5b0(0,0,&PTR_006b27f8,0x1f,0xd2,0xf,0x153,0x120,1,5,0xffffffff);
  FUN_005fa5b0(0,1,&PTR_006b27f8,0x48,0x78,0x19,0x153,0x104,1,5,0xffffffff);
  FUN_005f9ce0(0,0,0x30d4f4,0x147,0x26,1,0,0xff,0);
  FUN_005fa5b0(0,4,&PTR_006b27f8,0x1f,0xd7,0x11,0x14c,0x29,5,5,0xffffffff);
  uVar13 = 0xffffffff;
  uVar11 = 5;
  uVar12 = 5;
  iVar6 = (-(uint)(*(char *)(param_1 + 0x1c4) != '\0') & 0x40) + 0x28;
  uVar10 = 0xe;
  uVar9 = 0x19;
  uVar8 = 0xd7;
  uVar7 = 0x48;
  uVar3 = FUN_00630f40("SID_SHELL_SAVEDGAMES_COLON",0x48,0xd7,0x19,0xe,iVar6,5,5,0xffffffff);
  FUN_005fa5b0(0,5,uVar3,uVar7,uVar8,uVar9,uVar10,iVar6,uVar12,uVar11,uVar13);
  FUN_005fa880(0,0,1,0x12e,0x140,0x23,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,1,0x12e,0x141,0x24,1,0xff,0xff,0xff,0,0,0);
  FUN_005fa880(0,0,0x22a,1,3,0x158,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0x22a,1,4,0x159,1,0xff,0xff,0xff,0,0,0);
  if (*(int *)(param_1 + 0x1bc) == 0) {
    pvVar4 = operator_new(0x214cc);
    local_8 = 0;
    if (pvVar4 == (void *)0x0) {
      local_48 = 0;
    }
    else {
      local_48 = FUN_00673d10();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1bc) = local_48;
    *(int *)(*(int *)(param_1 + 0x1bc) + 4) = param_1;
    pvVar4 = operator_new(0x41c);
    local_8 = 1;
    if (pvVar4 == (void *)0x0) {
      local_4c = 0;
    }
    else {
      uVar2 = FUN_005f8570();
      uVar2 = uVar2 & 0xffff;
      uVar1 = FUN_005f8550(uVar2);
      local_4c = FUN_0062e170(uVar1,uVar2);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(*(int *)(param_1 + 0x1bc) + 0x48) = local_4c;
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x78))(0xd5,0xa0);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x44))(0x14e,0x3e);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x6c))(3);
  }
  if (*(char *)(param_1 + 0x1c4) == '\0') {
    uVar14 = 0xffffffff;
    uVar13 = 0x12;
    uVar11 = 1;
    uVar12 = 3;
    uVar10 = 3;
    uVar9 = 0x19;
    uVar8 = 0x222;
    uVar7 = 0x49;
    uVar3 = FUN_00630f40("SID_SHELL_RESTOREGAME",0x49,0x222,0x19,3,3,1,0x12,0xffffffff);
    FUN_005fa5b0(0,2,uVar3,uVar7,uVar8,uVar9,uVar10,uVar12,uVar11,uVar13,uVar14);
    uVar12 = 0x7f;
    uVar10 = 0xffffffff;
    uVar9 = 0x4a;
    uVar8 = 0x4b;
    uVar7 = 0x48;
    uVar3 = FUN_00630f40("SID_GENERIC_DELETE",0x48,0x4b,0x4a,0xffffffff,0x7f);
    FUN_005f9de0(0,2,0x30d4de,0x1d0,0x160,1,uVar3,uVar7,uVar8,uVar9,uVar10,uVar12);
    local_58 = operator_new(0xcc);
    local_8 = 4;
    if (local_58 == (undefined4 *)0x0) {
      local_58 = (undefined4 *)0x0;
    }
    else {
      FUN_006280d0();
      *local_58 = SavedGamesListBox::vftable;
    }
    local_8 = 0xffffffff;
    FUN_005fac90(local_58,0,0x30d4ec,8,0x26,1,0,0x30d4cc,0x11e,0x6c,0x30d4cb,0x11e,0x16,0x30d4cf,
                 0x11d,0x26,0x58,0x11d,0x27,0x10,0x43,7,0x18,0x113,0x10,6,0x1f,0x45,0x42,0,0,0,
                 0x30d4ee);
  }
  else {
    uVar14 = 0xffffffff;
    uVar13 = 0x12;
    uVar11 = 1;
    uVar12 = 3;
    uVar10 = 3;
    uVar9 = 0x19;
    uVar8 = 0x222;
    uVar7 = 0x49;
    uVar3 = FUN_00630f40("SID_SHELL_SAVEGAME",0x49,0x222,0x19,3,3,1,0x12,0xffffffff);
    FUN_005fa5b0(0,2,uVar3,uVar7,uVar8,uVar9,uVar10,uVar12,uVar11,uVar13,uVar14);
    local_50 = operator_new(0xcc);
    local_8 = 2;
    if (local_50 == (undefined4 *)0x0) {
      local_50 = (undefined4 *)0x0;
    }
    else {
      FUN_006280d0();
      *local_50 = SavedGamesListBox::vftable;
    }
    local_8 = 0xffffffff;
    FUN_005fac90(local_50,0,0x30d4ec,8,0x66,1,0,0x30d4cc,0x11e,0x6c,0x30d4cb,0x11e,0x16,0x30d4cf,
                 0x11d,0x26,0x58,0x11d,0x27,0x10,0x43,7,0x18,0x113,0x10,6,0x1f,0x45,0x42,0,0,0,
                 0x30d4ee);
    uVar14 = 0xffffffff;
    uVar13 = 5;
    uVar11 = 1;
    uVar12 = 0x28;
    uVar10 = 0xe;
    uVar9 = 0x19;
    uVar8 = 0x8c;
    uVar7 = 0x48;
    uVar3 = FUN_00630f40("SID_SHELL_SAVEGAMEAS_COLON",0x48,0x8c,0x19,0xe,0x28,1,5,0xffffffff);
    FUN_005fa5b0(0,3,uVar3,uVar7,uVar8,uVar9,uVar10,uVar12,uVar11,uVar13,uVar14);
    local_54 = operator_new(0x1fc);
    local_8 = 3;
    if (local_54 == (undefined4 *)0x0) {
      local_54 = (undefined4 *)0x0;
    }
    else {
      FUN_0060b4a0();
      *local_54 = FileNameEditBox::vftable;
    }
    local_8 = 0xffffffff;
    FUN_005fa6a0(local_54,0,0x30d4e9,8,0x26,&PTR_006b27f8,0x1f,0xfa,0x10,9,0x18,1,0x14,5);
    FUN_00674060();
  }
  FUN_00673c20();
  if (*(char *)(param_1 + 0x1c4) == '\0') {
    piVar5 = (int *)FUN_005fb720(0);
    iVar6 = (**(code **)(*piVar5 + 0xb8))();
    if (iVar6 != 0) {
      piVar5 = (int *)FUN_005fb720(0);
      (**(code **)(*piVar5 + 0xc0))(0,1);
    }
  }
  local_64 = operator_new(0x70);
  local_8 = 5;
  if (local_64 == (undefined4 *)0x0) {
    local_64 = (undefined4 *)0x0;
  }
  else {
    FUN_00680b70();
    *local_64 = SaveGameHelpGroupBox::vftable;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x1c0) = local_64;
  *(int *)(*(int *)(param_1 + 0x1c0) + 4) = param_1;
  uVar14 = 0xffffffff;
  uVar13 = 0;
  uVar11 = 0x23;
  uVar12 = 0x46;
  uVar10 = 0x123;
  uVar9 = 10;
  uVar8 = 5;
  uVar7 = 0x48;
  uVar3 = FUN_00630f40("SID_GENERIC_HELP",0x48,5,10,0x123,0x46,0x23,0,0xffffffff);
  FUN_00680ca0(9,0xfe,1,0x12f,0x52,0x78,0x7c,0xa1,0xff,0xff,0xff,uVar3,uVar7,uVar8,uVar9,uVar10,
               uVar12,uVar11,uVar13,uVar14);
  (**(code **)(**(int **)(param_1 + 0x1c0) + 0x74))();
  ExceptionList = local_10;
  return;
}

