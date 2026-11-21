// FUN_005cab60  005cab60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_005cab60(int param_1)

{
  undefined *puVar1;
  int local_8;
  
  local_8 = 0;
  if (_DAT_006b3e40 == *(double *)(param_1 + 0x1e0)) {
    return 0x42d;
  }
  puVar1 = (undefined *)FUN_00686cc0();
  if ((int)puVar1 < 0x2711) {
    if (puVar1 == (undefined *)0x2710) goto LAB_005cac9e;
    if ((int)puVar1 < 0x65) {
      if (puVar1 != (undefined *)0x64) {
        switch(puVar1) {
        case (undefined *)0x19:
switchD_005cabe4_caseD_19:
          local_8 = local_8 + 1;
        case (undefined *)0xa:
          local_8 = local_8 + 1;
        case (undefined *)0x5:
          local_8 = local_8 + 1;
        default:
switchD_005cabe4_caseD_6:
          return local_8 + 0x3f8;
        case (undefined *)0x32:
          goto switchD_005cabe4_caseD_32;
        }
      }
      goto LAB_005cacc2;
    }
    if (puVar1 != (undefined *)0x1f4) {
      if (puVar1 != (undefined *)0x3e8) {
        if (puVar1 != (undefined *)0x1388) goto switchD_005cabe4_caseD_6;
        goto LAB_005caca7;
      }
      goto LAB_005cacb0;
    }
  }
  else {
    if ((int)puVar1 < 0x7a121) {
      if (puVar1 == (undefined *)0x7a120) goto LAB_005cac7a;
      if (puVar1 != (undefined *)0x61a8) {
        if (puVar1 != (undefined *)0xc350) {
          if (puVar1 != (undefined *)0x186a0) goto switchD_005cabe4_caseD_6;
          goto LAB_005cac83;
        }
        goto LAB_005cac8c;
      }
    }
    else {
      if (puVar1 != (undefined *)0xf4240) {
        if (puVar1 == &DAT_00989680) {
          return 0x440;
        }
        if (puVar1 == (undefined *)0x5f5e100) {
          return 0x43f;
        }
        goto switchD_005cabe4_caseD_6;
      }
      local_8 = 1;
LAB_005cac7a:
      local_8 = local_8 + 1;
LAB_005cac83:
      local_8 = local_8 + 1;
LAB_005cac8c:
      local_8 = local_8 + 1;
    }
    local_8 = local_8 + 1;
LAB_005cac9e:
    local_8 = local_8 + 1;
LAB_005caca7:
    local_8 = local_8 + 1;
LAB_005cacb0:
    local_8 = local_8 + 1;
  }
  local_8 = local_8 + 1;
LAB_005cacc2:
  local_8 = local_8 + 1;
switchD_005cabe4_caseD_32:
  local_8 = local_8 + 1;
  goto switchD_005cabe4_caseD_19;
}

