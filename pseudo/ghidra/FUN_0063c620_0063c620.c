// FUN_0063c620  0063c620

void __fastcall FUN_0063c620(CPropertySection *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_50;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abc33;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; iVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))(uVar3), local_14 < iVar4;
      local_14 = local_14 + 1) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x1bc) + local_14 * 4) + 0x20) != 0) {
      FUN_0063d570(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1bc) + local_14 * 4) + 0x20),4);
      FUN_0063b2d0();
    }
  }
  cVar2 = (**(code **)(*DAT_0162ee80 + 0x13c))();
  if (cVar2 != '\0') {
    FUN_0064d5e0(*(undefined4 *)(param_1 + 0x1bc));
  }
  for (local_14 = 0; iVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_14 < iVar4;
      local_14 = local_14 + 1) {
    piVar5 = (int *)FUN_0063aac0();
    if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      iVar4 = FUN_005fb300(local_14 + 0x15);
      if (iVar4 == 0) {
        uVar12 = 0;
        uVar11 = 0xffffffff;
        uVar10 = 0x4a;
        uVar9 = 0x4b;
        uVar8 = 0x48;
        uVar6 = FUN_00630f40("SID_SHELL_FACE",0x48,0x4b,0x4a,0xffffffff,0);
        uVar6 = FUN_005f9de0(0,local_14 + 0x15,0x30d4c8,
                             (-(uint)(local_14 != 0) & 0x49) + 0x69 +
                             *(int *)(*(int *)(param_1 + 0x1c0) + local_14 * 8),
                             *(int *)(*(int *)(param_1 + 0x1c0) + 4 + local_14 * 8) + 0x1e,1,uVar6,
                             uVar8,uVar9,uVar10,uVar11,uVar12);
        CPropertySection::Get(param_1,4,(ulong *)0x0);
        FUN_005ff5a0(uVar6);
      }
      iVar4 = FUN_005fb300(local_14 + 0x1d);
      if (iVar4 != 0) {
        uVar6 = FUN_005fb300(local_14 + 0x1d);
        CPropertySection::Get(param_1,4,(ulong *)0x0);
        FUN_005ff670(uVar6);
        FUN_005fbcb0(0,local_14 + 0x1d);
      }
      iVar4 = FUN_005fb350(local_14 + 0x25);
      if (iVar4 != 0) {
        uVar6 = FUN_005fb350(local_14 + 0x25);
        CPropertySection::Get(param_1,4,(ulong *)0x0);
        FUN_005ff670(uVar6);
        FUN_005fbce0(0,local_14 + 0x25);
      }
    }
    piVar5 = (int *)FUN_0063aac0();
    if (*piVar5 == 1) {
      if ((*(int *)(*(int *)(*(int *)(param_1 + 0x1bc) + local_14 * 4) + 0xc) == -1) &&
         (iVar4 = FUN_005fb300(local_14 + 0x1d), iVar4 == 0)) {
        uVar12 = 0;
        uVar11 = 0xffffffff;
        uVar10 = 0x4a;
        uVar9 = 0x4b;
        uVar8 = 0x48;
        uVar6 = FUN_00630f40("SID_SHELL_BIO_ELLIPSIS",0x48,0x4b,0x4a,0xffffffff,0);
        uVar6 = FUN_005f9de0(0,local_14 + 0x1d,0x30d4c8,
                             *(int *)(*(int *)(param_1 + 0x1c0) + local_14 * 8) + 0xb2,
                             *(int *)(*(int *)(param_1 + 0x1c0) + 4 + local_14 * 8) + 0x1e,1,uVar6,
                             uVar8,uVar9,uVar10,uVar11,uVar12);
        CPropertySection::Get(param_1,4,(ulong *)0x0);
        FUN_005ff5a0(uVar6);
      }
      iVar4 = FUN_005fb300(local_14 + 0x15);
      if (iVar4 != 0) {
        uVar6 = FUN_005fb300(local_14 + 0x15);
        CPropertySection::Get(param_1,4,(ulong *)0x0);
        FUN_005ff670(uVar6);
        FUN_005fbcb0(0,local_14 + 0x15);
      }
      iVar4 = FUN_005fb350(local_14 + 0x25);
      if (iVar4 == 0) {
        uVar13 = 0;
        uVar12 = 0x14;
        uVar11 = 0xffffffff;
        uVar10 = 0x42;
        uVar9 = 0x45;
        uVar8 = 0x1f;
        uVar6 = FUN_00630f40("SID_SHELL_PREFERREDPLAYER",0x1f,0x45,0x42,0xffffffff,0x14,0);
        uVar6 = FUN_005f9ef0(0,local_14 + 0x25,0x30d4c9,
                             *(undefined4 *)(*(int *)(param_1 + 0x1c0) + local_14 * 8),
                             *(int *)(*(int *)(param_1 + 0x1c0) + 4 + local_14 * 8) + 0x6e,1,uVar6,
                             uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
        CPropertySection::Get(param_1,4,(ulong *)0x0);
        FUN_005ff5a0(uVar6);
      }
    }
    piVar5 = (int *)FUN_0063aac0();
    if (*piVar5 == 0) {
      FUN_005fb5a0(local_14,&PTR_006b27f8);
      iVar4 = FUN_005fb5e0(local_14 + 5);
      if (iVar4 != 0) {
        piVar5 = (int *)FUN_005fb5e0(local_14 + 5);
        uVar6 = FUN_00630f40("SID_SHELL_ADD",0x1f,0xffffffff,0xffffffff,0xffffffff,0,0);
        (**(code **)(*piVar5 + 0xdc))(uVar6);
      }
      uVar6 = FUN_005fb300(local_14 + 0xd);
      CPropertySection::Get(param_1,4,(ulong *)0x0);
      FUN_005ff670(uVar6);
      uVar6 = FUN_005fb300(local_14 + 0x15);
      CPropertySection::Get(param_1,4,(ulong *)0x0);
      FUN_005ff670(uVar6);
      uVar6 = FUN_005fb300(local_14 + 0x1d);
      CPropertySection::Get(param_1,4,(ulong *)0x0);
      FUN_005ff670(uVar6);
      uVar6 = FUN_005fb350(local_14 + 0x25);
      CPropertySection::Get(param_1,4,(ulong *)0x0);
      FUN_005ff670(uVar6);
      uVar6 = FUN_005fb2b0(local_14);
      CPropertySection::Get(param_1,4,(ulong *)0x0);
      FUN_005ff670(uVar6);
      FUN_005fbcb0(0,local_14 + 0xd);
      FUN_005fbcb0(0,local_14 + 0x15);
      FUN_005fbcb0(0,local_14 + 0x1d);
      FUN_005fbce0(0,local_14 + 0x25);
      FUN_005fbc80(0,local_14);
    }
    else {
      iVar4 = FUN_005fb2b0(local_14);
      if (iVar4 == 0) {
        uVar6 = FUN_005f9ce0(0,local_14,0x30d4e8,
                             *(int *)(*(int *)(param_1 + 0x1c0) + local_14 * 8) + -1,
                             *(int *)(*(int *)(param_1 + 0x1c0) + 4 + local_14 * 8) + -1,1,0,0xff,0)
        ;
        CPropertySection::Get(param_1,4,(ulong *)0x0);
        FUN_005ff5a0(uVar6);
      }
      pvVar7 = operator_new(0x60);
      local_8 = 0;
      if (pvVar7 == (void *)0x0) {
        local_50 = 0;
      }
      else {
        local_50 = FUN_006454f0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1bc) + local_14 * 4) + 0x20) = local_50;
      FUN_00645820(*(undefined4 *)(*(int *)(param_1 + 0x1bc) + local_14 * 4),param_1,0,0,0);
      FUN_0063d4b0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1bc) + local_14 * 4) + 0x20),4);
      FUN_006464d0(0,0);
      FUN_00646150(*(undefined4 *)(*(int *)(param_1 + 0x1c0) + local_14 * 8),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c0) + 4 + local_14 * 8));
      FUN_00646380(5);
      iVar4 = FUN_0063aac0();
      FUN_005fb5a0(local_14,iVar4 + 4);
      piVar5 = (int *)FUN_005fb550(local_14);
      (**(code **)(*piVar5 + 0x44))
                (*(int *)(*(int *)(param_1 + 0x1c0) + local_14 * 8) + 2,
                 *(int *)(*(int *)(param_1 + 0x1c0) + 4 + local_14 * 8) + 0x57);
      iVar4 = FUN_005fb5e0(local_14 + 5);
      if (iVar4 == 0) {
        iVar4 = FUN_005fb300(local_14 + 5);
        if (iVar4 != 0) {
          piVar5 = (int *)FUN_005fb300(local_14 + 5);
          uVar6 = FUN_00630f40("SID_SHELL_REPLACE");
          (**(code **)(*piVar5 + 0xe0))(uVar6);
        }
      }
      else {
        piVar5 = (int *)FUN_005fb5e0(local_14 + 5);
        uVar6 = FUN_00630f40("SID_SHELL_REPLACE",0x1f,0xffffffff,0xffffffff,0xffffffff,0,0);
        (**(code **)(*piVar5 + 0xdc))(uVar6);
      }
      iVar4 = FUN_005fb350(local_14 + 0x25);
      if (iVar4 != 0) {
        cVar2 = FUN_0063b560(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1bc) + local_14 * 4) + 8)
                            );
        if (cVar2 == '\0') {
          piVar5 = (int *)FUN_005fb350(local_14 + 0x25);
          (**(code **)(*piVar5 + 0xf8))();
        }
        else {
          piVar5 = (int *)FUN_005fb350(local_14 + 0x25);
          (**(code **)(*piVar5 + 0xf4))();
        }
      }
      iVar4 = FUN_0063d860();
      if ((*(int *)(param_1 + 0x1d0) < iVar4) && (local_14 != 0)) {
        iVar4 = FUN_005fb300(local_14 + 0xd);
        if (iVar4 == 0) {
          uVar12 = 0;
          uVar11 = 0xffffffff;
          uVar10 = 0x4a;
          uVar9 = 0x4b;
          uVar8 = 0x48;
          uVar6 = FUN_00630f40("SID_SHELL_CLEAR",0x48,0x4b,0x4a,0xffffffff,0);
          uVar6 = FUN_005f9de0(0,local_14 + 0xd,0x30d4c8,
                               *(int *)(*(int *)(param_1 + 0x1c0) + local_14 * 8) + 0x69,
                               *(int *)(*(int *)(param_1 + 0x1c0) + 4 + local_14 * 8) + 0x1e,1,uVar6
                               ,uVar8,uVar9,uVar10,uVar11,uVar12);
          CPropertySection::Get(param_1,4,(ulong *)0x0);
          FUN_005ff5a0(uVar6);
        }
      }
      else {
        uVar6 = FUN_005fb300(local_14 + 0xd);
        CPropertySection::Get(param_1,4,(ulong *)0x0);
        FUN_005ff670(uVar6);
        FUN_005fbcb0(0,local_14 + 0xd);
      }
    }
    (**(code **)(*(int *)param_1 + 0x40))(local_14);
  }
  if (4 < *(int *)(param_1 + 0x1d4)) {
    iVar4 = FUN_0063d860();
    if (iVar4 < 4) {
      piVar5 = (int *)FUN_005fb300(0x2d);
      (**(code **)(*piVar5 + 0x70))();
      piVar5 = (int *)FUN_005fb300(0x2e);
      (**(code **)(*piVar5 + 0x70))();
    }
    else {
      piVar5 = (int *)FUN_005fb300(0x2d);
      (**(code **)(*piVar5 + 0x74))();
      piVar5 = (int *)FUN_005fb300(0x2e);
      (**(code **)(*piVar5 + 0x74))();
    }
    for (local_14 = 0; iVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_14 < iVar4;
        local_14 = local_14 + 1) {
      if ((local_14 < *(int *)(param_1 + 0x1c8) * 4) ||
         (*(int *)(param_1 + 0x1c8) * 4 + 4 <= local_14)) {
        (**(code **)(*(int *)param_1 + 0x44))(local_14);
        iVar4 = FUN_005fb5e0(local_14 + 5);
        if (iVar4 == 0) {
          iVar4 = FUN_005fb300(local_14 + 5);
          if (iVar4 != 0) {
            piVar5 = (int *)FUN_005fb300(local_14 + 5);
            (**(code **)(*piVar5 + 0x70))();
          }
        }
        else {
          piVar5 = (int *)FUN_005fb5e0(local_14 + 5);
          (**(code **)(*piVar5 + 0x70))();
        }
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x1bc) + local_14 * 4) + 0x20) != 0) {
          FUN_0063d570(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1bc) + local_14 * 4) + 0x20),4)
          ;
          FUN_0063b2d0();
        }
        FUN_005fb5a0(local_14,&PTR_006b27f8);
        uVar6 = FUN_005fb300(local_14 + 0xd);
        CPropertySection::Get(param_1,4,(ulong *)0x0);
        FUN_005ff670(uVar6);
        uVar6 = FUN_005fb300(local_14 + 0x15);
        CPropertySection::Get(param_1,4,(ulong *)0x0);
        FUN_005ff670(uVar6);
        uVar6 = FUN_005fb300(local_14 + 0x1d);
        CPropertySection::Get(param_1,4,(ulong *)0x0);
        FUN_005ff670(uVar6);
        uVar6 = FUN_005fb350(local_14 + 0x25);
        CPropertySection::Get(param_1,4,(ulong *)0x0);
        FUN_005ff670(uVar6);
        uVar6 = FUN_005fb2b0(local_14);
        CPropertySection::Get(param_1,4,(ulong *)0x0);
        FUN_005ff670(uVar6);
        FUN_005fbcb0(0,local_14 + 0xd);
        FUN_005fbcb0(0,local_14 + 0x15);
        FUN_005fbcb0(0,local_14 + 0x1d);
        FUN_005fbce0(0,local_14 + 0x25);
        FUN_005fbc80(0,local_14);
      }
      else {
        iVar4 = FUN_005fb5e0(local_14 + 5);
        if (iVar4 == 0) {
          iVar4 = FUN_005fb300(local_14 + 5);
          if (iVar4 != 0) {
            piVar5 = (int *)FUN_005fb300(local_14 + 5);
            (**(code **)(*piVar5 + 0x74))();
          }
        }
        else {
          piVar5 = (int *)FUN_005fb5e0(local_14 + 5);
          (**(code **)(*piVar5 + 0x74))();
        }
      }
    }
  }
  cVar2 = (**(code **)(*DAT_0162ee80 + 0x104))();
  if (cVar2 != '\0') {
    for (local_14 = 0; iVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_14 < iVar4;
        local_14 = local_14 + 1) {
      iVar4 = FUN_005fb300(local_14 + 0xd);
      if (iVar4 != 0) {
        piVar5 = (int *)FUN_005fb300(local_14 + 0xd);
        (**(code **)(*piVar5 + 0xd0))();
      }
    }
  }
  cVar2 = (**(code **)(*DAT_0162ee80 + 0x100))();
  if (cVar2 != '\0') {
    for (local_14 = 0; iVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_14 < iVar4;
        local_14 = local_14 + 1) {
      iVar4 = FUN_005fb5e0(local_14 + 5);
      if (iVar4 == 0) {
        iVar4 = FUN_005fb300(local_14 + 5);
        if (iVar4 != 0) {
          piVar5 = (int *)FUN_005fb300(local_14 + 5);
          (**(code **)(*piVar5 + 0xd0))();
        }
      }
      else {
        piVar5 = (int *)FUN_005fb5e0(local_14 + 5);
        (**(code **)(*piVar5 + 0xd0))();
      }
      iVar4 = FUN_005fb300(local_14 + 0xd);
      if (iVar4 != 0) {
        piVar5 = (int *)FUN_005fb300(local_14 + 0xd);
        (**(code **)(*piVar5 + 0xd0))();
      }
    }
  }
  uVar6 = 0x32;
  pvVar7 = CPropertySection::Get(param_1,4,(ulong *)0x0);
  (**(code **)(*DAT_0162ee80 + 0xe8))(pvVar7,param_1,uVar6);
  (**(code **)(*DAT_0162ee80 + 0xf0))();
  ExceptionList = local_10;
  return;
}

