// FUN_0064d030  0064d030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0064d030(int *param_1)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  undefined1 local_39;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  FUN_005f1a50();
  FUN_00650350(0);
  cVar1 = (**(code **)(*param_1 + 0x1f8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 100))();
    if (cVar1 != '\0') {
      if ((param_1[1] == 0) || (*(int *)(param_1[1] + 4) != 0)) {
        local_39 = 0;
      }
      else {
        local_39 = 1;
      }
      FUN_0064eb80(local_39);
    }
  }
  else {
    FUN_0064eb80(0);
  }
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x378))();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 0x200))(), cVar1 == '\0')) {
    local_c = (**(code **)(*param_1 + 0x1ec))();
    if ((local_c == 0) ||
       ((*(int *)(local_c + 4) == 0 || (piVar2 = (int *)FUN_0063aac0(), *piVar2 == 1)))) {
      DVar3 = GetTickCount();
      param_1[0x11] = DVar3;
    }
    else {
      DVar3 = GetTickCount();
      if (59999 < DVar3 - param_1[0x11]) {
        DVar3 = GetTickCount();
        param_1[0x11] = DVar3;
        local_2c = FUN_00636c50();
        if (local_2c != -1) {
          local_28 = 0xffffffff;
          local_24 = 0xffffffff;
          local_1c = 0;
          local_14 = _DAT_006b2c38;
          local_8 = local_2c;
          local_28 = FUN_0064d1d0();
          if (local_28 != -1) {
            FUN_00639390(&local_2c,0,0,1);
          }
        }
      }
    }
  }
  return;
}

