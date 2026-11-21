// FUN_00648f50  00648f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00648f50(int *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvVar9;
  int *piVar10;
  DWORD DVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iStack_f0;
  undefined4 uStack_e8;
  int iStack_e0;
  int iStack_d8;
  int iStack_d4;
  int iStack_58;
  uint uStack_54;
  uint local_3c;
  int iStack_34;
  int iStack_24;
  undefined *puStack_18;
  int iStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006abe87;
  local_10 = ExceptionList;
  uVar5 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = 0;
  piVar6 = (int *)FUN_0063aac0(uVar5);
  if (*piVar6 == 0) {
    ExceptionList = local_10;
    return;
  }
  if ((*(int *)(*(int *)(param_1[8] + 0x18) + 4) != DAT_016306a4) &&
     (cVar4 = (**(code **)(*DAT_0162ee80 + 0xa4))(), cVar4 == '\0')) {
    ExceptionList = local_10;
    return;
  }
  iVar12 = *(int *)(*(int *)(param_1[8] + 4) + 8);
  piVar6 = *(int **)(param_1[8] + 0xc);
  piVar2 = *(int **)(param_1[8] + 8);
  uVar7 = FUN_005fc360();
  switch(uVar7) {
  case 0:
    cVar4 = FUN_00635cb0(0x3eb);
    if (cVar4 == '\0') {
      cVar4 = FUN_00646cb0();
      if (cVar4 == '\0') {
        piVar6 = (int *)FUN_0063aac0();
        if ((*piVar6 == 2) || (piVar6 = (int *)FUN_0063aac0(), *piVar6 == 3)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if (DAT_00795fbc == '\0') {
            iStack_d4 = FUN_0062fbf0(0xb4);
            iStack_d4 = iStack_d4 + 0xb4;
          }
          else {
            iStack_d4 = 0;
          }
          (**(code **)(*param_1 + 8))(1,iStack_d4);
        }
        else {
          iVar12 = FUN_0062fbf0(0x1e);
          if ((((iVar12 == 0) && (DAT_00795f98 == '\0')) && (iVar12 = FUN_006377b0(), 0 < iVar12))
             || (DAT_00795fbb != '\0')) {
            (**(code **)(*param_1 + 8))(3,0);
          }
          else {
            if (DAT_00795fbc == '\0') {
              iStack_d8 = FUN_0062fbf0(0xb4);
              iStack_d8 = iStack_d8 + 0xb4;
            }
            else {
              iStack_d8 = 0;
            }
            (**(code **)(*param_1 + 8))(1,iStack_d8);
          }
        }
      }
      else {
        (**(code **)(*param_1 + 8))(0,500);
      }
    }
    else {
      (**(code **)(*param_1 + 8))(0,500);
    }
    break;
  case 1:
    piVar6 = (int *)FUN_0063aac0(uVar5);
    if ((*piVar6 == 2) || (piVar6 = (int *)FUN_0063aac0(uVar5), *piVar6 == 3)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      piVar6 = (int *)FUN_0063aac0();
      if (*piVar6 == 3) {
        iVar12 = FUN_00639520(0xd);
        iVar8 = FUN_0062fbf0(4);
        if (iVar8 == 0) {
          uVar13 = 0;
          uVar7 = FUN_0062fbf0(*(undefined4 *)(&DAT_0076357c + iVar12 * 0x380),0);
          FUN_006475c0(0xd,uVar7,uVar13);
        }
        else {
          FUN_006475c0(0xd,0,0);
        }
      }
      else {
        if (DAT_00795fbc == '\0') {
          iStack_e0 = FUN_0062fbf0(0xb4);
          iStack_e0 = iStack_e0 + 0xb4;
        }
        else {
          iStack_e0 = 0;
        }
        (**(code **)(*param_1 + 8))(0xe,iStack_e0);
      }
    }
    else {
      iVar12 = FUN_00639520(iVar12);
      iVar8 = FUN_0062fbf0(4);
      if (iVar8 == 0) {
        uVar13 = 0;
        uVar7 = FUN_0062fbf0(*(undefined4 *)(&DAT_0076357c + iVar12 * 0x380),0);
        FUN_006473f0(uVar7,uVar13);
      }
      else {
        FUN_006473f0(0,0);
      }
    }
    break;
  case 2:
    if (param_1[0x10c] < param_1[0x10b]) {
      *(undefined1 *)(param_1[8] + 0x5c) = 1;
      piVar10 = (int *)FUN_0063aac0(uVar5);
      if ((*piVar10 == 2) || (piVar10 = (int *)FUN_0063aac0(uVar5), *piVar10 == 3)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 != 3) {
          FUN_005e9f20("false","..\\casinoShell\\character.cpp",0x5a1);
          ExceptionList = local_10;
          return;
        }
        FUN_00665270(*(undefined1 *)((int)param_1 + param_1[0x10c] * 2 + 0x2c),
                     *(undefined4 *)(param_1[8] + 0x34));
      }
      else {
        uVar7 = FUN_00646d10();
        uVar7 = FUN_00639610(iVar12,uVar7);
        FUN_005eaf00(uVar7);
        uVar7 = FUN_005eb240();
        (**(code **)(*piVar6 + 0xb0))(uVar7);
        uVar7 = FUN_00646d10();
        uVar7 = FUN_00639670(iVar12,uVar7);
        FUN_005eaf00(uVar7);
        (**(code **)(*piVar2 + 0xb0))(*(undefined1 *)((int)param_1 + param_1[0x10c] * 2 + 0x2c));
        (**(code **)(*piVar2 + 0x74))();
      }
      (**(code **)(*param_1 + 8))(2,*(undefined1 *)((int)param_1 + param_1[0x10c] * 2 + 0x2d));
      param_1[0x10c] = param_1[0x10c] + 1;
    }
    else {
      if (param_1[4] != 0) {
        (**(code **)(*(int *)param_1[4] + 0x1c))(0);
      }
      FUN_006464d0(1,0);
      (**(code **)(*param_1 + 8))(0,0);
    }
    break;
  case 3:
    iVar8 = FUN_00639520(iVar12);
    iVar12 = FUN_006483e0(iVar12);
    if (iVar12 == 0) {
      (**(code **)(*param_1 + 8))(0,0);
    }
    else {
      iVar12 = FUN_0062fbf0(iVar12);
      uVar15 = 0;
      uVar14 = 0xffffffff;
      uVar13 = 0;
      uVar7 = FUN_0062fbf0(*(undefined4 *)(&DAT_00763584 + iVar12 * 0x2c + iVar8 * 0x380),0,
                           0xffffffff,0);
      FUN_00647210(*(undefined4 *)(&DAT_00763580 + iVar12 * 0x2c + iVar8 * 0x380),uVar7,uVar13,
                   uVar14,uVar15);
    }
    break;
  case 4:
    if ((param_1[0x10e] != -1) &&
       (iVar12 = FUN_00637000(*(undefined4 *)(*(int *)(param_1[8] + 4) + 8),0x436,0xffffffff),
       iVar12 != -1)) {
      (**(code **)(*DAT_0162ee84 + 0x80))
                (iVar12,0,1,0xb,1,0x3f800000,*(undefined4 *)(param_1[8] + 0x54),0);
    }
    (**(code **)(*param_1 + 8))(5,0);
    break;
  case 5:
    *(undefined1 *)(param_1[8] + 0x5c) = 1;
    if (param_1[0x10c] < param_1[0x10b]) {
      iVar12 = FUN_00639700(iVar12);
      if ((iVar12 == 0) || (cVar4 = FUN_00646d10(), cVar4 != '\0')) {
        FUN_005eaf00(param_1[0x10d]);
      }
      else {
        FUN_005eaf00(param_1[0x10d] + 1);
      }
      (**(code **)(*piVar6 + 0xb0))(*(undefined1 *)((int)param_1 + param_1[0x10c] * 2 + 0x2c));
      (**(code **)(*piVar2 + 0x70))();
      (**(code **)(*param_1 + 8))(5,*(undefined1 *)((int)param_1 + param_1[0x10c] * 2 + 0x2d));
      param_1[0x10c] = param_1[0x10c] + 1;
      cVar4 = (**(code **)(*DAT_0162ee84 + 0x38))();
      if ((cVar4 != '\0') && (param_1[0x10f] != 0)) {
        (**(code **)(*DAT_0162ee84 + 0x80))(param_1[0x10f],0,0,5,1,0x3f800000,_DAT_006b3654,0);
        param_1[0x10f] = 0;
      }
    }
    else if (param_1[0x10e] == -1) {
      if (param_1[4] != 0) {
        (**(code **)(*(int *)param_1[4] + 0x1c))(0);
      }
      FUN_006464d0(1,0);
      (**(code **)(*param_1 + 8))(1,0);
    }
    else {
      iVar12 = FUN_00637000(*(undefined4 *)(*(int *)(param_1[8] + 4) + 8),param_1[0x10e],0xffffffff)
      ;
      param_1[10] = iVar12;
      FUN_00646fa0(param_1[10],0xffffffff,0,0,1);
      param_1[0x10e] = -1;
    }
    break;
  case 6:
    cVar4 = FUN_00636d40(*(undefined4 *)(*(int *)(param_1[8] + 4) + 4));
    if (cVar4 == '\0') {
      (**(code **)(*param_1 + 8))(7,0);
    }
    else {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    break;
  case 7:
    *(undefined1 *)(param_1[8] + 0x5c) = 1;
    if (iVar12 == 0x1e) {
      FUN_005eaf00(0x219dde);
      (**(code **)(*piVar2 + 0x70))();
      (**(code **)(*param_1 + 8))(9,3);
    }
    else if ((iVar12 == 2) && (0x1f < *(byte *)(param_1 + 0xb))) {
      FUN_005eaf00(((int)(uint)*(byte *)(param_1 + 0xb) >> 5) + 0x219353);
      (**(code **)(*piVar6 + 0xb0))(0);
      (**(code **)(*piVar2 + 0x70))();
      (**(code **)(*param_1 + 8))(8,3);
    }
    else {
      (**(code **)(*param_1 + 8))(9,0);
    }
    break;
  case 8:
    *(undefined1 *)(param_1[8] + 0x5c) = 1;
    iVar12 = FUN_005eb220();
    iVar8 = FUN_005eb240();
    if (iVar12 == iVar8) {
      (**(code **)(*param_1 + 8))(9,0);
    }
    else {
      iVar12 = FUN_005eb220();
      (**(code **)(*piVar6 + 0xb0))(iVar12 + 1);
      (**(code **)(*param_1 + 8))(8,3);
    }
    break;
  case 9:
    *(undefined1 *)(param_1[8] + 0x5c) = 1;
    if (param_1[0x10b] == 0) {
      uVar7 = (**(code **)(*DAT_0162ee84 + 0x80))
                        (param_1[10],0,(char)param_1[0x112],0xb,1,0x3f800000,
                         *(undefined4 *)(param_1[8] + 0x54),param_1[8] + 0x4c);
      (**(code **)(*param_1 + 8))(0xd,uVar7);
    }
    else {
      if (DAT_007960cb == '\0') {
        (**(code **)(*DAT_0162ee84 + 0x80))
                  (param_1[10],0,(char)param_1[0x112],0xb,1,0x3f800000,
                   *(undefined4 *)(param_1[8] + 0x54),param_1[8] + 0x4c);
      }
      else {
        uVar7 = FUN_00603c50(0x2047474f,param_1[10],0);
        *(undefined4 *)(param_1[8] + 0x4c) = uVar7;
      }
      DVar11 = timeGetTime();
      *(DWORD *)(param_1[8] + 0x58) = DVar11;
      if (*(int *)(param_1[8] + 0x48) != 0) {
        iVar12 = param_1[8];
        cVar4 = FUN_00646d10();
        FUN_005eaf00((uint)(cVar4 == '\0') + *(int *)(iVar12 + 0x48));
        pvVar9 = operator_new(0x43c);
        uStack_8 = 0;
        if (pvVar9 == (void *)0x0) {
          uStack_e8 = 0;
        }
        else {
          uStack_e8 = FUN_0064a7a0(param_1[8],*(undefined4 *)(param_1[8] + 0x48),0,0);
        }
        uStack_8 = 0xffffffff;
        FUN_005f5d50(uStack_e8);
      }
      (**(code **)(*param_1 + 8))(10,0);
    }
    break;
  case 10:
    *(undefined1 *)(param_1[8] + 0x5c) = 1;
    if ((param_1[0x10c] < param_1[0x10b]) &&
       ((DAT_007960cb != '\0' ||
        ((*(int *)(param_1[8] + 0x4c) != 0 &&
         (cVar4 = FUN_005f45a0(*(undefined4 *)(param_1[8] + 0x4c)), cVar4 != '\0')))))) {
      uVar1 = *(undefined1 *)((int)param_1 + param_1[0x10c] * 2 + 0x2c);
      piVar10 = (int *)FUN_0063aac0(uVar5);
      if ((*piVar10 == 2) || (piVar10 = (int *)FUN_0063aac0(), *piVar10 == 3)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        cVar4 = (**(code **)(*DAT_0162ee84 + 200))();
        if ((cVar4 == '\0') || (cVar4 = (**(code **)(*DAT_0162ee80 + 0x1e0))(), cVar4 == '\0')) {
          FUN_005e9f20("false","..\\casinoShell\\character.cpp",0x652);
          ExceptionList = local_10;
          return;
        }
        piVar6 = (int *)FUN_0063aac0();
        if (*piVar6 != 3) {
          FUN_005e9f20("false","..\\casinoShell\\character.cpp",0x654);
          ExceptionList = local_10;
          return;
        }
        FUN_00665270(uVar1,*(undefined4 *)(param_1[8] + 0x34));
      }
      else {
        if (*(int *)(param_1[8] + 0x48) == 0) {
          uVar7 = FUN_00646d10();
          uVar7 = FUN_00639610(iVar12,uVar7);
          FUN_005eaf00(uVar7);
          uVar7 = FUN_005eb240();
          (**(code **)(*piVar6 + 0xb0))(uVar7);
          uVar7 = FUN_00646d10();
          uVar7 = FUN_00639670(iVar12,uVar7);
          FUN_005eaf00(uVar7);
        }
        else {
          iVar12 = param_1[8];
          cVar4 = FUN_00646d10();
          FUN_005eaf00((uint)(cVar4 == '\0') + *(int *)(iVar12 + 0x48));
        }
        (**(code **)(*piVar2 + 0xb0))(uVar1);
        (**(code **)(*piVar2 + 0x74))();
      }
      uVar7 = FUN_00608410(*(undefined4 *)(param_1[8] + 0x4c));
      if (DAT_007960cb == '\0') {
        iStack_14 = FUN_00608790(uVar7);
      }
      else {
        DVar11 = timeGetTime();
        iStack_14 = DVar11 - *(int *)(param_1[8] + 0x58);
      }
      iVar12 = (iStack_14 * 0x3c) / 1000;
      iStack_58 = 0;
      for (iStack_24 = 0; iStack_24 < param_1[0x10c]; iStack_24 = iStack_24 + 1) {
        iStack_58 = (uint)*(byte *)((int)param_1 + iStack_24 * 2 + 0x2d) + iStack_58;
      }
      uStack_54 = (uint)*(byte *)((int)param_1 + param_1[0x10c] * 2 + 0x2d);
      bVar3 = false;
      if (iVar12 < iStack_58) {
        if (iStack_58 - iVar12 < 0xf) {
          iStack_f0 = iStack_58 - iVar12;
        }
        else {
          iStack_f0 = 0xf;
        }
        uStack_54 = uStack_54 + iStack_f0;
      }
      if ((iStack_58 < iVar12) && (uStack_54 = uStack_54 - (iVar12 - iStack_58), (int)uStack_54 < 0)
         ) {
        bVar3 = (int)uStack_54 < -4;
        uStack_54 = 0;
      }
      (**(code **)(*param_1 + 8))(10,uStack_54);
      param_1[0x10c] = param_1[0x10c] + 1;
      if (bVar3) {
        FUN_005fc3d0();
      }
    }
    else if ((*(int *)(param_1[8] + 0x48) == 0) || (piVar6[0x60] == 0)) {
      (**(code **)(*param_1 + 8))(0xb,0);
    }
    else {
      (**(code **)(*param_1 + 8))(10,2);
    }
    break;
  case 0xb:
    *(undefined1 *)(param_1[8] + 0x5c) = 1;
    *(undefined4 *)(param_1[8] + 0x48) = 0;
    if (iVar12 == 0x1e) {
      FUN_005eaf00(0x219dde);
      (**(code **)(*piVar2 + 0x70))();
      (**(code **)(*param_1 + 8))(0xd,3);
    }
    else if ((iVar12 == 2) && (0x1f < *(byte *)(param_1 + 0xb))) {
      FUN_005eaf00(((int)(uint)*(byte *)(param_1 + 0xb) >> 5) + 0x219353);
      uVar7 = FUN_005eb240();
      (**(code **)(*piVar6 + 0xb0))(uVar7);
      (**(code **)(*piVar2 + 0x70))();
      (**(code **)(*param_1 + 8))(0xc,3);
    }
    else {
      (**(code **)(*param_1 + 8))(0xd,0);
    }
    break;
  case 0xc:
    *(undefined1 *)(param_1[8] + 0x5c) = 1;
    iVar12 = FUN_005eb220();
    if (iVar12 == 0) {
      (**(code **)(*param_1 + 8))(0xd,0);
    }
    else {
      iVar12 = FUN_005eb220();
      (**(code **)(*piVar6 + 0xb0))(iVar12 + -1);
      (**(code **)(*param_1 + 8))(0xc,3);
    }
    break;
  case 0xd:
    *(undefined1 *)(param_1[8] + 0x50) = 1;
    FUN_006464d0(1,0);
    *(undefined1 *)(param_1[8] + 0x50) = 0;
    if (param_1[0x110] < 1) {
      iStack_34 = 0;
    }
    else {
      iVar12 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 4))();
      iStack_34 = param_1[0x110] - (iVar12 - param_1[0x111]);
      if (iStack_34 < 0) {
        iStack_34 = 0;
      }
    }
    if (param_1[4] != 0) {
      (**(code **)(*(int *)param_1[4] + 0x1c))(iStack_34);
    }
    (**(code **)(*param_1 + 8))(1,0);
    break;
  case 0xe:
    puStack_18 = (undefined *)0x0;
    uVar7 = FUN_005eafc0();
    switch(uVar7) {
    case 0xf712c:
    case 0xf7130:
    case 0xf7139:
    case 0xf713b:
      param_1[0x10b] = 0;
      break;
    default:
switchD_0064a3f8_caseD_1:
      puStack_18 = &DAT_0076d3cc;
      local_3c = 6;
      break;
    case 0xf7146:
      iVar12 = FUN_0062fbf0(2);
      if (iVar12 == 0) {
        puStack_18 = &DAT_0076d3a0;
        local_3c = 0x10;
      }
      else if (iVar12 == 1) {
        puStack_18 = &DAT_0076d390;
        local_3c = 0x10;
      }
      break;
    case 0xf7149:
    case 0xf714a:
      iVar12 = FUN_0062fbf0(3);
      if (iVar12 != 0) goto switchD_0064a3f8_caseD_1;
      puStack_18 = &DAT_0076d37c;
      local_3c = 2;
      break;
    case 0xf7151:
      iVar12 = FUN_0062fbf0(3);
      if (iVar12 == 0) {
        puStack_18 = &DAT_0076d3cc;
        local_3c = 6;
      }
      else if (iVar12 == 1) {
        puStack_18 = &DAT_0076d3c4;
        local_3c = 6;
      }
      else if (iVar12 == 2) {
        puStack_18 = &DAT_0076d3bc;
        local_3c = 8;
      }
      break;
    case 0xf7152:
      iVar12 = FUN_0062fbf0(2);
      if (iVar12 == 0) {
        puStack_18 = &DAT_0076d3cc;
        local_3c = 6;
      }
      else if (iVar12 == 1) {
        puStack_18 = &DAT_0076d3b0;
        local_3c = 0xc;
      }
      break;
    case 0xf7155:
      iVar12 = FUN_0062fbf0(2);
      if (iVar12 == 0) {
        puStack_18 = &DAT_0076d3cc;
        local_3c = 6;
      }
      else if (iVar12 == 1) {
        puStack_18 = &DAT_0076d380;
        local_3c = 6;
      }
      break;
    case 0xf7161:
      iVar12 = FUN_0062fbf0(2);
      if (iVar12 == 0) {
        puStack_18 = &DAT_0076d3cc;
        local_3c = 6;
      }
      else if (iVar12 == 1) {
        puStack_18 = &DAT_0076d388;
        local_3c = 6;
      }
    }
    if (puStack_18 != (undefined *)0x0) {
      memcpy(param_1 + 0xb,puStack_18,local_3c);
      param_1[0x10b] = local_3c / 2;
    }
    param_1[0x10c] = 0;
    (**(code **)(*param_1 + 8))(0xf,0);
    break;
  case 0xf:
    *(undefined1 *)(param_1[8] + 0x5c) = 1;
    if (param_1[0x10c] < param_1[0x10b]) {
      (**(code **)(*piVar2 + 0xb0))(*(undefined1 *)((int)param_1 + param_1[0x10c] * 2 + 0x2c));
      (**(code **)(*piVar2 + 0x74))();
      (**(code **)(*param_1 + 8))(0xf,*(undefined1 *)((int)param_1 + param_1[0x10c] * 2 + 0x2d));
      param_1[0x10c] = param_1[0x10c] + 1;
    }
    else {
      FUN_006464d0(1,0);
      (**(code **)(*param_1 + 8))(0,0);
    }
  }
  ExceptionList = local_10;
  return;
}

