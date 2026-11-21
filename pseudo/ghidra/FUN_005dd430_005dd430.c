// FUN_005dd430  005dd430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005dd430(int *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  double local_2c;
  double local_18;
  undefined4 local_8;
  
  local_8 = 0;
  if ((DAT_007947e4 != (int *)0x0) && (iVar4 = (**(code **)(*DAT_007947e4 + 0x254))(), iVar4 != 0))
  {
    local_8 = (**(code **)(*DAT_007947e4 + 0x254))();
  }
  cVar1 = FUN_005f4720(local_8);
  cVar2 = FUN_005f4720(0x24b49a);
  iVar4 = FUN_005f3bf0();
  if (iVar4 == 0x3ea) {
    if (cVar1 != '\0') {
      FUN_005f47e0(local_8);
    }
    if (cVar2 != '\0') {
      FUN_005f47e0(0x24b49a);
    }
    FUN_005f4620(0x30d401,0x3f800000);
  }
  else {
    cVar3 = FUN_005f4720(0x30d401);
    if (cVar3 != '\0') {
      FUN_005f47e0(0x30d401);
    }
    cVar3 = (**(code **)(*param_1 + 0x33c))(0xffffffff);
    if ((cVar3 == '\0') && (iVar4 = FUN_005f3bf0(), iVar4 != 3200000)) {
      return;
    }
    cVar3 = FUN_006376d0();
    if ((cVar3 != '\0') && (cVar1 == '\0')) {
      FUN_005f4620(local_8,0x3f800000);
    }
    cVar3 = FUN_006376d0();
    if ((cVar3 == '\0') && (cVar1 != '\0')) {
      FUN_005f47e0(local_8);
    }
    cVar1 = FUN_00637670();
    if ((cVar1 != '\0') && (cVar2 == '\0')) {
      if ((char)param_1[0x25] == '\0') {
        local_18 = 1.0;
      }
      else {
        local_18 = _DAT_006be700;
      }
      iVar4 = FUN_006377e0();
      FUN_005f4620(0x24b49a,((float)iVar4 / (float)_DAT_006be518) * (float)local_18);
    }
    cVar1 = FUN_00637670();
    if ((cVar1 == '\0') && (cVar2 != '\0')) {
      FUN_005f47e0(0x24b49a);
    }
    cVar1 = FUN_005f4720(0x24b49a);
    if (cVar1 != '\0') {
      if ((char)param_1[0x25] == '\0') {
        local_2c = 1.0;
      }
      else {
        local_2c = _DAT_006be700;
      }
      iVar4 = FUN_006377e0();
      FUN_005f4830(0x24b49a,((float)iVar4 / (float)_DAT_006be518) * (float)local_2c);
    }
  }
  return;
}

