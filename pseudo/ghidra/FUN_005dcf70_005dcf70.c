// FUN_005dcf70  005dcf70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005dcf70(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  __time64_t _Var7;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_28;
  int local_14;
  uint local_c;
  int local_8;
  
  FUN_005f3130();
  local_c = 0;
  local_8 = 0;
  _time64((__time64_t *)&local_c);
  if ((local_8 < 1) && ((local_8 < 0 || (local_c == 0)))) {
    FUN_005e9f20("t > 0","..\\Casino\\casinoshell.cpp",0x17c);
  }
  if (-1 < (int)((local_8 - _DAT_00794904) - (uint)(local_c < _DAT_00794900))) {
    uVar1 = (uint)(local_c < _DAT_00794900);
    uVar2 = local_8 - _DAT_00794904;
    if (((int)(uVar2 - uVar1) < 0) ||
       ((uVar2 == uVar1 || SBORROW4(local_8,_DAT_00794904) != SBORROW4(uVar2,uVar1) &&
        (local_c - _DAT_00794900 < 0xb5)))) goto LAB_005dd05a;
  }
  _DAT_00794900 = local_c;
  _DAT_00794904 = local_8;
  if ((DAT_007960d8 != 0) && ((*(int *)(DAT_007960d8 + 8) != 0 && (DAT_007947e0 != (int *)0x0)))) {
    FUN_0060a4d0();
    (**(code **)(*DAT_007947e0 + 900))();
  }
LAB_005dd05a:
  if (DAT_0162ee80 != 0) {
    FUN_005d8850();
  }
  if (((*(char *)(param_1 + 0x25) == '\0') || (*(char *)(param_1 + 0x26) == '\0')) ||
     (DAT_0079346d == '\0')) {
    if (((*(char *)(param_1 + 0x25) != '\0') && (DAT_0162ee80 != 0)) &&
       ((cVar3 = FUN_00636760(), cVar3 == '\0' &&
        ((cVar3 = FUN_005f3b50(), cVar3 == '\0' && (DAT_00793574 < *(int *)(param_1 + 0x20))))))) {
      if (DAT_0079346d == '\0') {
        *(undefined1 *)(DAT_0162ee84 + 0x25) = 0;
        cVar3 = (**(code **)(*DAT_007947e4 + 0x168))();
        if (cVar3 != '\0') {
          *(undefined1 *)(DAT_0162ee84 + 0x25) = 1;
          iVar5 = FUN_00579da0();
          DAT_00793574 = iVar5 + *(int *)(param_1 + 0x20);
        }
      }
      else {
        iVar5 = FUN_00579da0();
        DAT_00793574 = iVar5 + *(int *)(param_1 + 0x20);
      }
    }
  }
  else {
    FUN_00579d50();
  }
  if (*(int *)(param_1 + 0x4f1c) < *(int *)(param_1 + 0x20)) {
    DAT_007948f8 = DAT_007948f8 + 1;
    if (999 < DAT_007948f8) {
      DAT_007948f8 = 0;
      _Var7 = _time64((__time64_t *)0x0);
      local_28 = (undefined4)_Var7;
      FUN_00614670(local_28);
      for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
        uVar4 = FUN_0062fbf0(1000000000);
        FUN_00614670(uVar4);
      }
    }
    *(int *)(param_1 + 0x4f1c) = *(int *)(param_1 + 0x20) + 200;
    iVar5 = FUN_0062fbf0(8000);
    if (iVar5 == 0x62) {
      FUN_005de880(0);
    }
    else {
      iVar6 = FUN_0062fbf0(0x1e);
      *(int *)(param_1 + 0x4ed0) = iVar6 + *(int *)(param_1 + 0x4ed0);
      if (*(int *)(param_1 + 0x4ed0) < 99000000) {
        local_40 = *(undefined4 *)(param_1 + 0x4ed0);
      }
      else {
        local_40 = 99000000;
      }
      *(undefined4 *)(param_1 + 0x4ed0) = local_40;
    }
    if (iVar5 == 0xf) {
      FUN_005de880(1);
    }
    else {
      iVar6 = FUN_0062fbf0(0x2d);
      *(int *)(param_1 + 0x4ed4) = iVar6 + *(int *)(param_1 + 0x4ed4);
      if (*(int *)(param_1 + 0x4ed4) < 99000000) {
        local_44 = *(undefined4 *)(param_1 + 0x4ed4);
      }
      else {
        local_44 = 99000000;
      }
      *(undefined4 *)(param_1 + 0x4ed4) = local_44;
    }
    if (iVar5 == 0x17) {
      FUN_005de880(5);
    }
    else {
      iVar6 = FUN_0062fbf0(0x4b);
      *(int *)(param_1 + 0x4ed8) = iVar6 + *(int *)(param_1 + 0x4ed8);
      if (*(int *)(param_1 + 0x4ed8) < 99000000) {
        local_48 = *(undefined4 *)(param_1 + 0x4ed8);
      }
      else {
        local_48 = 99000000;
      }
      *(undefined4 *)(param_1 + 0x4ed8) = local_48;
    }
    if (iVar5 == 0x2d) {
      FUN_005de880(0x19);
    }
    else {
      iVar6 = FUN_0062fbf0(0x96);
      *(int *)(param_1 + 0x4edc) = iVar6 + *(int *)(param_1 + 0x4edc);
      if (*(int *)(param_1 + 0x4edc) < 99000000) {
        local_4c = *(undefined4 *)(param_1 + 0x4edc);
      }
      else {
        local_4c = 99000000;
      }
      *(undefined4 *)(param_1 + 0x4edc) = local_4c;
    }
    if (iVar5 == 0x39) {
      FUN_005de880(100);
    }
    else {
      iVar5 = FUN_0062fbf0(500);
      *(int *)(param_1 + 0x4ee0) = iVar5 + *(int *)(param_1 + 0x4ee0);
      if (*(int *)(param_1 + 0x4ee0) < 99000000) {
        local_50 = *(undefined4 *)(param_1 + 0x4ee0);
      }
      else {
        local_50 = 99000000;
      }
      *(undefined4 *)(param_1 + 0x4ee0) = local_50;
    }
  }
  return;
}

