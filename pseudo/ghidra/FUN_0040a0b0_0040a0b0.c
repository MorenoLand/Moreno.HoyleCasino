// FUN_0040a0b0  0040a0b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040a0b0(undefined4 param_1)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  char local_39;
  int local_38;
  char local_31;
  int local_28;
  int local_24;
  char local_1d;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = 0;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_38 = 0;
  local_1d = '\0';
  local_31 = '\0';
  local_39 = FUN_005da7b0();
  local_28 = (**(code **)(*DAT_00790320 + 0x2b0))();
  local_14 = (**(code **)(*DAT_00790320 + 0x2b4))();
  local_48 = FUN_005dcb00(param_1);
  FUN_005dcb00(param_1);
  local_8 = FUN_005d5a50();
  local_18 = *(int *)(DAT_00790324 + 0x4e0);
  local_44 = 0;
  if (local_39 != '\0') {
    piVar2 = (int *)FUN_005daa20(local_58);
    local_1c = *piVar2;
    piVar2 = (int *)FUN_005daae0(local_60);
    local_10 = *piVar2;
    local_c = FUN_005da8a0();
    local_24 = FUN_005da8c0();
    if (local_8 < local_28) {
      return 0;
    }
    if (local_8 == local_10) {
      return local_28;
    }
    local_38 = local_8 / 2;
    if (local_24 < local_c) {
      iVar4 = local_1c - local_8;
      iVar3 = FUN_0062fbf0(local_c - local_24);
      dVar1 = (double)iVar3 / _DAT_006b3728 + _DAT_006b3748;
      iVar3 = FUN_0062fbf0(local_c - local_24);
      if ((((double)iVar3 / _DAT_006b3728) * (double)local_8 + dVar1 < (double)iVar4) &&
         (iVar3 = FUN_0062fbf0(0x14), iVar3 < local_18 + 10)) {
        local_38 = local_8;
      }
    }
    if (local_14 < local_38) {
      local_38 = local_14;
    }
    if (((local_8 == local_1c) && (local_28 + local_14 < local_10)) &&
       (iVar3 = FUN_005dcb00(param_1), *(int *)(iVar3 + 0x4a4) != 4)) {
      return local_28;
    }
    if (local_24 < local_c) {
      local_1d = '\0';
      if (local_18 < 10) {
        local_40 = local_18 * 5;
      }
      else {
        local_40 = 0x32;
      }
      if (local_c + -6 < local_24) {
        local_40 = (6 - (local_c - local_24)) * 0xf + local_40;
      }
      if ((local_14 < local_1c - local_8) || (local_8 < local_1c - local_8)) {
        local_40 = local_40 + 0x1e;
      }
      if (0x19 < local_c - local_24) {
        local_40 = local_40 + -10;
      }
      if (local_40 < 0) {
        local_40 = 1;
      }
      if (0x4b < local_40) {
        local_40 = 0x4b;
      }
      iVar3 = FUN_0062fbf0(100);
      if (iVar3 < local_40) {
        local_31 = '\x01';
      }
      else {
        local_31 = '\0';
      }
    }
    else {
      local_1d = '\x01';
      local_38 = local_14;
      if (local_8 < local_14) {
        local_38 = local_8;
      }
    }
    if ((local_1d != '\0') || (local_31 != '\0')) {
      if (local_8 == local_1c) {
        if (local_1d == '\0') {
          local_4c = FUN_0062fbf0(0xf);
          if (local_4c < 2) {
            iVar3 = FUN_0062fbf0(0x28);
            if (local_10 < iVar3 * local_28) {
              iVar5 = local_10 / 2;
              iVar3 = FUN_0062fbf0(0x28);
              iVar4 = FUN_0062fbf0(0x28);
              iVar5 = iVar5 + (iVar3 - iVar4) * local_28;
              local_50 = iVar5 - iVar5 % 5;
              if (local_28 <= local_50) {
                if (local_50 <= local_38) {
                  return local_50;
                }
                return local_38;
              }
            }
            else {
              iVar3 = FUN_0062fbf0(0x50);
              iVar4 = FUN_0062fbf0(0x32);
              local_50 = (iVar3 - iVar4) * local_28;
              local_50 = local_50 - local_50 % 5;
              if (local_28 <= local_50) {
                if (local_50 <= local_38) {
                  return local_50;
                }
                return local_38;
              }
            }
          }
        }
        else {
          local_4c = FUN_0062fbf0(10);
          if (local_4c < 2) {
            iVar4 = local_14 - local_10;
            iVar3 = FUN_0062fbf0(5);
            local_50 = iVar4 + 1 + iVar3 * local_28;
            local_50 = local_50 - local_50 % 5;
            if (local_28 <= local_50) {
              if (local_50 <= local_38) {
                return local_50;
              }
              return local_38;
            }
          }
          else if (local_4c < 5) {
            iVar3 = FUN_0062fbf0(0x28);
            if (local_10 < iVar3 * local_28) {
              iVar3 = FUN_0062fbf0(0x1e);
              iVar4 = FUN_0062fbf0(0x14);
              local_50 = (iVar3 - iVar4) * local_28 + local_10;
              local_50 = local_50 - local_50 % 5;
              if (local_28 <= local_50) {
                if (local_50 <= local_38) {
                  return local_50;
                }
                return local_38;
              }
            }
            else {
              iVar3 = FUN_0062fbf0(0x3c);
              iVar4 = FUN_0062fbf0(0x19);
              local_50 = (iVar3 - iVar4) * local_28;
              local_50 = local_50 - local_50 % 5;
              if (local_28 <= local_50) {
                if (local_50 <= local_38) {
                  return local_50;
                }
                return local_38;
              }
            }
          }
        }
      }
      else if (local_1d == '\0') {
        local_4c = FUN_0062fbf0(10);
        if (local_c - local_24 == 1) {
          local_4c = local_4c + -3;
        }
        if (local_c - local_24 == 2) {
          local_4c = local_4c + -2;
        }
        else if (local_c - local_24 == 3) {
          local_4c = local_4c + -1;
        }
        if (local_4c < 2) {
          iVar5 = local_1c - local_8;
          iVar3 = FUN_0062fbf0(0x50);
          iVar4 = FUN_0062fbf0(0x14);
          local_50 = iVar5 + (iVar3 - iVar4) * local_28;
        }
        else if (local_4c < 6) {
          iVar6 = local_1c - local_8;
          iVar3 = FUN_0062fbf0(2);
          iVar4 = FUN_0062fbf0(0x3c);
          iVar5 = FUN_0062fbf0(0x1e);
          local_50 = iVar6 / (iVar3 + 2) + (iVar4 - iVar5) * local_28;
        }
        else {
          local_50 = 0;
        }
        local_50 = local_50 - local_50 % 5;
        if (local_28 <= local_50) {
          if (local_50 <= local_38) {
            return local_50;
          }
          return local_38;
        }
      }
      else {
        local_4c = FUN_0062fbf0(10);
        if (local_4c < 5) {
          iVar4 = local_1c - local_8;
          iVar3 = FUN_0062fbf0(0x28);
          local_50 = iVar4 + (iVar3 + 1) * local_28;
        }
        else if (local_4c < 7) {
          iVar5 = local_1c - local_8;
          iVar3 = FUN_0062fbf0(10);
          iVar4 = FUN_0062fbf0(5);
          local_50 = iVar5 + ((iVar3 - iVar4) + 1) * local_28;
        }
        else {
          local_50 = 0;
        }
        local_50 = local_50 - local_50 % 5;
        if (local_28 <= local_50) {
          if (local_50 <= local_38) {
            return local_50;
          }
          return local_38;
        }
      }
    }
  }
  iVar3 = FUN_0040afe0(param_1);
  if (iVar3 < local_28) {
    iVar3 = 0;
  }
  else {
    if ((local_39 == '\0') && (local_38 = FUN_00686cc0(), local_14 < local_38)) {
      local_38 = local_14;
    }
    iVar3 = FUN_005dcb00(param_1);
    switch(*(undefined4 *)(iVar3 + 0x4a4)) {
    case 0:
      iVar4 = FUN_0040afe0(param_1);
      iVar3 = local_28;
      if ((local_28 <= iVar4) && (iVar3 = iVar4, local_38 < iVar4)) {
        iVar3 = local_38;
      }
      break;
    case 1:
      local_50 = FUN_0040afe0(param_1);
      local_50 = local_50 << 1;
      if ((local_50 == local_28 * 2) && (iVar3 = FUN_0062fbf0(2), iVar3 == 0)) {
        local_50 = local_28;
      }
      else {
        iVar3 = local_50 / 10;
        iVar4 = FUN_0062fbf0(10);
        local_50 = iVar3 * (iVar4 + -4) + local_50;
        local_50 = local_50 - local_50 % 5;
      }
      iVar3 = local_28;
      if ((local_28 <= local_50) && (iVar3 = local_50, local_38 < local_50)) {
        iVar3 = local_38;
      }
      break;
    case 2:
      local_50 = FUN_0040afe0(param_1);
      local_50 = local_50 * 5;
      if ((local_50 == local_28 * 5) && (iVar3 = FUN_0062fbf0(2), iVar3 == 0)) {
        local_50 = local_28;
      }
      else {
        iVar3 = local_50 / 10;
        iVar4 = FUN_0062fbf0(10);
        local_50 = iVar3 * (iVar4 + -4) + local_50;
        local_50 = local_50 - local_50 % 5;
      }
      iVar3 = local_28;
      if ((local_28 <= local_50) && (iVar3 = local_50, local_38 < local_50)) {
        iVar3 = local_38;
      }
      break;
    case 3:
      local_50 = FUN_0040afe0(param_1);
      local_50 = local_50 * 10;
      if ((local_50 == local_28 * 10) && (iVar3 = FUN_0062fbf0(2), iVar3 == 0)) {
        local_50 = local_28;
      }
      else {
        iVar3 = local_50 / 10;
        iVar4 = FUN_0062fbf0(10);
        local_50 = iVar3 * (iVar4 + -4) + local_50;
        local_50 = local_50 - local_50 % 5;
      }
      iVar3 = local_28;
      if ((local_28 <= local_50) && (iVar3 = local_50, local_38 < local_50)) {
        iVar3 = local_38;
      }
      break;
    case 4:
      if (local_18 < 3) {
        local_50 = FUN_0040afe0(param_1);
        local_50 = local_50 * 5;
        if ((local_50 == local_28 * 5) && (iVar3 = FUN_0062fbf0(2), iVar3 == 0)) {
          local_50 = local_28;
        }
        else {
          iVar3 = local_50 / 10;
          iVar4 = FUN_0062fbf0(10);
          local_50 = iVar3 * (iVar4 + -4) + local_50;
          local_50 = local_50 - local_50 % 5;
        }
        iVar3 = local_28;
        if ((local_28 <= local_50) && (iVar3 = local_50, local_38 < local_50)) {
          iVar3 = local_38;
        }
      }
      else {
        iVar3 = FUN_0062fbf0(10);
        local_50 = local_38 / (iVar3 + 1);
        iVar4 = FUN_0040afe0(param_1);
        iVar3 = local_50;
        if (local_50 < iVar4 * 5) {
          local_50 = FUN_0040afe0(param_1);
          local_50 = local_50 * 5;
          iVar3 = local_50 / 10;
          iVar4 = FUN_0062fbf0(10);
          local_50 = iVar3 * (iVar4 + -4) + local_50;
          local_50 = local_50 - local_50 % 5;
          iVar3 = local_28;
          if ((local_28 <= local_50) && (iVar3 = local_50, local_38 < local_50)) {
            iVar3 = local_38;
          }
        }
      }
      break;
    case 5:
      if ((local_18 < 3) && (*(int *)(local_48 + 0x4ac) < 2)) {
        iVar3 = FUN_0040afe0(param_1);
      }
      else if (*(char *)(local_48 + 0x4b0) == '\0') {
        if ((*(int *)(local_48 + 0x4ac) < 4) || (2 < local_18)) {
          *(int *)(local_48 + 0x4ac) = *(int *)(local_48 + 0x4ac) + 1;
          if (local_44 == 0) {
            iVar3 = FUN_0040afe0(param_1);
          }
          else {
            iVar3 = local_28;
            if ((((local_28 <= local_44) && (iVar3 = local_38, local_44 <= local_38)) &&
                (iVar3 = local_44, local_14 / 2 < local_44)) && (iVar3 = local_44, local_1d == '\0')
               ) {
              iVar3 = local_14 / 2;
            }
          }
        }
        else {
          *(undefined4 *)(local_48 + 0x4ac) = 1;
          iVar3 = FUN_0040afe0(param_1);
        }
      }
      else {
        *(undefined4 *)(local_48 + 0x4ac) = 1;
        iVar3 = FUN_0040afe0(param_1);
      }
      break;
    case 6:
      if (local_18 < 3) {
        local_50 = FUN_0040afe0(param_1);
        local_50 = local_50 * 5;
        if ((local_50 == local_28 * 5) && (iVar3 = FUN_0062fbf0(2), iVar3 == 0)) {
          local_50 = local_28;
        }
        else {
          iVar3 = local_50 / 10;
          iVar4 = FUN_0062fbf0(10);
          local_50 = iVar3 * (iVar4 + -4) + local_50;
          local_50 = local_50 - local_50 % 5;
        }
        iVar3 = local_28;
        if ((local_28 <= local_50) && (iVar3 = local_50, local_38 < local_50)) {
          iVar3 = local_38;
        }
      }
      else if (*(char *)(local_48 + 0x4b0) == '\0') {
        if (local_44 == 0) {
          local_50 = FUN_0040afe0(param_1);
          local_50 = local_50 * 5;
          iVar3 = local_50 / 10;
          iVar4 = FUN_0062fbf0(10);
          local_50 = iVar3 * (iVar4 + -4) + local_50;
          local_50 = local_50 - local_50 % 5;
          iVar3 = local_28;
          if ((local_28 <= local_50) && (iVar3 = local_50, local_38 < local_50)) {
            iVar3 = local_38;
          }
        }
        else {
          iVar3 = local_28;
          if ((((local_28 <= local_44) && (iVar3 = local_38, local_44 <= local_38)) &&
              (iVar3 = local_44, local_14 / 2 < local_44)) && (iVar3 = local_44, local_1d == '\0'))
          {
            iVar3 = local_14 / 2;
          }
        }
      }
      else {
        local_50 = FUN_0040afe0(param_1);
        local_50 = local_50 * 5;
        iVar3 = local_50 / 10;
        iVar4 = FUN_0062fbf0(10);
        local_50 = iVar3 * (iVar4 + -4) + local_50;
        local_50 = local_50 - local_50 % 5;
        iVar3 = local_28;
        if ((local_28 <= local_50) && (iVar3 = local_50, local_38 < local_50)) {
          iVar3 = local_38;
        }
      }
      break;
    case 7:
      if (local_18 < 1) {
        local_50 = FUN_0040afe0(param_1);
        local_50 = local_50 << 1;
        if ((local_50 == local_28 * 2) && (iVar3 = FUN_0062fbf0(2), iVar3 == 0)) {
          local_50 = local_28;
        }
        else {
          iVar3 = local_50 / 10;
          iVar4 = FUN_0062fbf0(10);
          local_50 = iVar3 * (iVar4 + -4) + local_50;
          local_50 = local_50 - local_50 % 5;
        }
        iVar3 = local_28;
        if ((local_28 <= local_50) && (iVar3 = local_50, local_38 < local_50)) {
          iVar3 = local_38;
        }
      }
      else if (*(char *)(local_48 + 0x4b0) == '\0') {
        local_50 = FUN_0040afe0(param_1);
        local_50 = local_50 << 1;
        iVar3 = local_50 / 10;
        iVar4 = FUN_0062fbf0(10);
        local_50 = iVar3 * (iVar4 + -4) + local_50;
        local_50 = local_50 - local_50 % 5;
        iVar3 = local_28;
        if ((local_28 <= local_50) && (iVar3 = local_50, local_38 < local_50)) {
          iVar3 = local_38;
        }
      }
      else {
        piVar2 = (int *)FUN_0041a2d0(local_68,param_1);
        iVar4 = *piVar2 << 1;
        iVar3 = local_28;
        if ((local_28 <= iVar4) && (iVar3 = iVar4, local_38 < iVar4)) {
          iVar3 = local_38;
        }
      }
      break;
    default:
      iVar3 = FUN_0040afe0(param_1);
    }
  }
  return iVar3;
}

