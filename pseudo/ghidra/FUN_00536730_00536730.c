// FUN_00536730  00536730

void __fastcall FUN_00536730(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_38;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_8;
  
  iVar3 = (**(code **)(*DAT_00793394 + 0x40))();
  FUN_00536210();
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    uVar4 = FUN_00536b40(local_8);
    *(undefined4 *)(param_1 + 0x58 + local_8 * 4) = uVar4;
  }
  if ((1 < iVar3) && (cVar2 = FUN_00538440(), cVar2 == '\0')) {
    bVar1 = false;
    local_20 = (-(uint)(iVar3 != 3) & 10) + 0x32;
    local_30 = (-(uint)(iVar3 != 3) & 0xfffffff7) + 10;
    local_28 = 0x14;
    local_18 = 0x5f;
    local_38 = 0;
    switch(*(undefined4 *)(DAT_007947e0 + 0x4f14)) {
    case 0x13:
    case 0x15:
      local_18 = 0x4b;
      local_20 = 0x14;
      local_28 = 10;
      break;
    case 0x14:
      local_18 = 0x3c;
      break;
    case 0x17:
      local_38 = 5;
      break;
    case 0x18:
      local_18 = 0x1e;
      local_20 = 0x28;
      break;
    case 0x19:
      local_38 = 5;
      break;
    case 0x1b:
    case 0x1d:
      local_18 = 0x1e;
      local_20 = 0x1e;
      local_30 = 0x1e;
      break;
    case 0x1c:
      local_18 = 0x14;
    }
    do {
      if ((local_38 == 0) || (iVar5 = FUN_0062fbf0(100), local_38 <= iVar5)) {
        for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
          uVar4 = FUN_00536b40(local_24);
          *(undefined4 *)(param_1 + 0x58 + local_24 * 4) = uVar4;
        }
        FUN_005362a0();
        iVar5 = FUN_005361a0();
        if (iVar5 < 1) {
          iVar6 = FUN_0062fbf0(100);
          bVar1 = local_18 < iVar6;
        }
        else {
          uVar4 = FUN_00536250();
          switch(uVar4) {
          case 0:
            bVar1 = false;
            break;
          case 1:
            iVar6 = FUN_0062fbf0(100);
            bVar1 = local_20 < iVar6;
            break;
          case 2:
            iVar6 = FUN_0062fbf0(100);
            bVar1 = local_30 < iVar6;
            break;
          case 3:
            iVar6 = FUN_0062fbf0(100);
            bVar1 = (int)((uint)(iVar3 == 3) * 2 + 1) < iVar6;
            break;
          case 4:
            iVar6 = FUN_0062fbf0(100);
            bVar1 = (int)((iVar3 == 3) + 1) < iVar6;
            break;
          case 5:
            iVar6 = FUN_0062fbf0(100);
            bVar1 = 1 < iVar6;
          }
        }
        if ((((!bVar1) && (0 < iVar5)) && ((int)((-(uint)(iVar3 != 3) & 0x14) + 0x3c) < iVar5)) &&
           (iVar5 = FUN_0062fbf0(100), iVar5 < local_28)) {
          bVar1 = true;
        }
      }
      else {
        FUN_005366d0();
        bVar1 = false;
      }
    } while (bVar1);
  }
  cVar2 = (**(code **)(*DAT_00793394 + 0x4c))();
  if (cVar2 != '\0') {
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      uVar4 = FUN_005360d0(local_8);
      iVar3 = (**(code **)(*DAT_00793394 + 0x50))(uVar4);
      if (iVar3 == 1) {
        DAT_00793394[local_8 + 2] = 1;
      }
      else {
        uVar4 = FUN_00536110(local_8);
        iVar3 = (**(code **)(*DAT_00793394 + 0x50))(uVar4);
        if (iVar3 == -1) {
          DAT_00793394[local_8 + 2] = -1;
        }
      }
    }
  }
  return;
}

