// FUN_00413790  00413790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00413790(int param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int local_1ec;
  int local_1e4;
  int local_1e0;
  int local_1c8;
  undefined4 local_64;
  int local_60;
  int local_5c;
  bool local_55;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  int local_30;
  int local_2c;
  int local_28;
  undefined8 local_24;
  int local_18;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_30 = -1;
  local_60 = -1;
  local_2c = -1;
  local_64 = 0xffffffff;
  local_24 = 0;
  local_14 = 0x3ff0000000000000;
  local_8 = *(int *)(DAT_00790324 + 0x4d0);
  local_55 = true;
  local_5c = *(int *)(DAT_00790324 + 0x4f0);
  switch(*(undefined4 *)(DAT_00790324 + 0x4ec)) {
  case 0:
    local_2c = 0x7d8;
    break;
  case 1:
    switch(*(undefined4 *)(DAT_00790324 + 0x4d4)) {
    case 0:
      local_2c = 0x7d5;
      FUN_005dcb00(local_5c);
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        iVar6 = FUN_00419980(local_5c,0xffffffff);
        if ((iVar6 < 0x11) || (iVar6 = FUN_00419980(local_5c,0xffffffff), 0x13 < iVar6)) {
          iVar6 = FUN_00419980(local_5c,0xffffffff);
          if ((0x13 < iVar6) && (iVar6 = FUN_00419980(local_5c,0xffffffff), iVar6 < 0x16)) {
            local_2c = 0x7d7;
          }
        }
        else {
          local_2c = 0x7d6;
        }
      }
      break;
    case 1:
      local_2c = 2000;
      break;
    case 2:
      local_2c = 0x7d2;
      break;
    case 3:
      local_2c = 0x7d4;
      break;
    case 4:
      local_2c = 0x402;
      FUN_005dcb00(local_5c);
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        local_64 = 0x3f6;
        *(undefined4 *)(DAT_00790324 + 0x4f4 + local_8 * 4) = 2;
        local_55 = false;
      }
    }
    break;
  case 2:
    iVar6 = FUN_00419980(local_8,0xffffffff);
    if (iVar6 == 0x15) {
      *(undefined4 *)(DAT_00790324 + 0x4f4 + local_8 * 4) = 1;
      FUN_005dcb00(local_8);
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        local_2c = 0x40d;
        local_14 = _DAT_006b2c38;
      }
    }
    else {
      *(undefined4 *)(DAT_00790324 + 0x4f4 + local_8 * 4) = 2;
      FUN_005dcb00(local_8);
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        local_2c = 1000;
        local_14 = _DAT_006b3e40;
      }
      else {
        local_2c = 0x401;
        local_64 = 0x402;
        local_24 = _DAT_006b3e48;
        local_14 = _DAT_006b2c38;
      }
    }
    break;
  case 3:
    local_2c = 0x7d3;
    break;
  case 4:
    if (*(int *)(DAT_00790324 + 0x4d4) == 1) {
      iVar6 = FUN_00418700();
      local_55 = iVar6 != 1;
      cVar3 = FUN_0041b990(local_8,0xffffffff);
      if (cVar3 == '\0') {
        iVar6 = FUN_00418700();
        if (iVar6 != 1) {
          iVar6 = FUN_00419980(local_8,0xffffffff);
          if (iVar6 == 0x15) {
            *(undefined4 *)(DAT_00790324 + 0x4f4 + local_8 * 4) = 1;
            FUN_005dcb00(local_8);
            piVar4 = (int *)FUN_0063aac0();
            if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              local_2c = 0x3f0;
              local_64 = 0x7dc;
              local_24 = _DAT_006b2c38;
            }
            else {
              local_2c = 0x404;
              local_64 = 0x3f4;
              local_24 = _DAT_006b3e38;
            }
            local_14 = _DAT_006b2c38;
          }
          else {
            FUN_005dcb00(local_8);
            piVar4 = (int *)FUN_0063aac0();
            if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              iVar6 = FUN_00419980(local_8,0xffffffff);
              if ((iVar6 < 0xc) || (iVar6 = FUN_00419980(local_8,0xffffffff), 0x10 < iVar6)) {
                iVar6 = FUN_00419530(local_8,0xffffffff);
                if (4 < iVar6) {
                  local_2c = 0x7da;
                  local_14 = _DAT_006b2c38;
                }
              }
              else {
                local_2c = 0x7db;
                local_64 = 1000;
                local_24 = _DAT_006b3e38;
                local_14 = _DAT_006b3e40;
                *(undefined4 *)(DAT_00790324 + 0x4f4 + local_8 * 4) = 2;
              }
            }
            else {
              iVar6 = FUN_00419980(local_8,0xffffffff);
              if ((0xb < iVar6) && (iVar6 = FUN_00419980(local_8,0xffffffff), iVar6 < 0x11)) {
                local_2c = 0x402;
                local_64 = 0x3f6;
                local_24 = _DAT_006b2c38;
                local_14 = _DAT_006b2c38;
                *(undefined4 *)(DAT_00790324 + 0x4f4 + local_8 * 4) = 2;
              }
            }
          }
        }
      }
      else {
        *(undefined4 *)(DAT_00790324 + 0x4f4 + local_8 * 4) = 2;
        FUN_005dcb00(local_8);
        piVar4 = (int *)FUN_0063aac0();
        if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_2c = 1000;
          local_64 = 0x40f;
        }
        else {
          local_2c = 0x7d1;
          local_64 = 0x402;
        }
        local_14 = _DAT_006b2c40;
        local_24 = _DAT_006b3e48;
      }
    }
    else if (*(int *)(DAT_00790324 + 0x4d4) == 2) {
      iVar6 = FUN_00418700();
      local_55 = iVar6 != 1;
      cVar3 = FUN_0041b990(local_8,0xffffffff);
      if (cVar3 == '\0') {
        iVar6 = FUN_00418700();
        if (iVar6 != 1) {
          iVar6 = FUN_00419980(local_8,0xffffffff);
          if (iVar6 == 0x15) {
            *(undefined4 *)(DAT_00790324 + 0x4f4 + local_8 * 4) = 1;
            FUN_005dcb00(local_8);
            piVar4 = (int *)FUN_0063aac0();
            if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              local_2c = 0x7d9;
              local_64 = 0x40d;
            }
            else {
              local_2c = 0x404;
              local_64 = 0x3f4;
            }
            local_14 = _DAT_006b2c38;
            local_24 = _DAT_006b3e48;
          }
          else {
            iVar6 = FUN_00419980(local_8,0xffffffff);
            if (iVar6 < 0xf) {
              *(undefined4 *)(DAT_00790324 + 0x4f4 + local_8 * 4) = 2;
              FUN_005dcb00(local_8);
              piVar4 = (int *)FUN_0063aac0();
              if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              if (bVar1) {
                local_2c = 0x409;
                local_64 = 0x40f;
                local_24 = _DAT_006b3e38;
                local_14 = _DAT_006b2c38;
              }
              else {
                local_2c = 0x401;
                local_64 = 0x3f6;
                local_24 = _DAT_006b3e38;
                local_14 = _DAT_006b2c38;
              }
            }
          }
        }
      }
      else {
        *(undefined4 *)(DAT_00790324 + 0x4f4 + local_8 * 4) = 2;
        FUN_005dcb00(local_8);
        piVar4 = (int *)FUN_0063aac0();
        if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_2c = 1000;
        }
        else {
          local_2c = 0x7d1;
        }
        local_14 = _DAT_006b2c38;
      }
    }
    break;
  case 5:
    for (local_c = 3; -1 < local_c; local_c = local_c + -1) {
      if (*(char *)(DAT_00790324 + 0x110 + local_8 * 0x118 + local_c) != -1) {
        cVar3 = *(char *)(DAT_00790324 + 0x110 + local_8 * 0x118 + local_c);
        if (cVar3 == '\0') {
          *(undefined4 *)(DAT_00790324 + 0x4f4 + local_8 * 4) = 2;
          FUN_005dcb00(local_8);
          piVar4 = (int *)FUN_0063aac0();
          if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            local_2c = 1000;
            local_64 = 0x40f;
            local_24 = _DAT_006b3e38;
            local_14 = _DAT_006b2c38;
          }
          else {
            iVar6 = FUN_005dcb00(local_8);
            if (*(int *)(iVar6 + 0x4a8) < -5) {
              iVar6 = FUN_0062fbf0(2);
              if (iVar6 == 0) {
                local_2c = 0x3f1;
              }
              else {
                local_2c = 0x3ff;
              }
            }
            else {
              local_2c = 0x402;
            }
            local_64 = 0x3f6;
            local_24 = _DAT_006b3e38;
            local_14 = _DAT_006b2c38;
          }
        }
        else if (cVar3 == '\x01') {
          *(undefined4 *)(DAT_00790324 + 0x4f4 + local_8 * 4) = 1;
          FUN_005dcb00(local_8);
          piVar4 = (int *)FUN_0063aac0();
          if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            local_2c = 0x3f0;
            local_64 = 0x40d;
            local_24 = _DAT_006b3e38;
            local_14 = _DAT_006b2c38;
          }
          else {
            iVar6 = FUN_005dcb00(local_8);
            if (*(int *)(iVar6 + 0x4a8) < 6) {
              local_2c = 0x3fc;
            }
            else {
              local_2c = 0x400;
            }
            local_64 = 0x404;
            local_24 = _DAT_006b3e48;
            local_14 = _DAT_006b2c38;
          }
        }
        break;
      }
    }
    break;
  case 6:
    cVar3 = FUN_005db190();
    if (cVar3 == '\0') {
      iVar6 = FUN_0062fbf0(10);
      if (iVar6 < 6) {
        iVar6 = FUN_0062fbf0(2);
        if (iVar6 == 0) {
          local_8 = FUN_005dada0();
          if (local_8 != -1) {
            FUN_005dcb00(local_8);
            piVar4 = (int *)FUN_0063aac0();
            if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              local_2c = 0x40c;
              local_14 = _DAT_006b3e40;
            }
            else {
              local_5c = local_8;
              local_2c = 0x3f3;
              local_14 = _DAT_006b3e40;
            }
          }
        }
        else {
          local_8 = FUN_005dac90();
          if (local_8 != -1) {
            FUN_005dcb00(local_8);
            piVar4 = (int *)FUN_0063aac0();
            if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              local_2c = 0x40b;
              local_14 = _DAT_006b3e40;
            }
            else {
              local_5c = local_8;
              local_2c = 0x3f2;
              local_14 = _DAT_006b3e40;
            }
          }
        }
      }
      else {
        local_8 = FUN_005dada0();
        if (local_8 != -1) {
          FUN_005dcb00(local_8);
          iVar6 = FUN_005d5a50();
          iVar5 = FUN_005da880();
          if (iVar6 < iVar5 / 10) {
            FUN_005dcb00(local_8);
            piVar4 = (int *)FUN_0063aac0();
            if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              local_2c = 0x410;
              local_14 = _DAT_006b2c38;
            }
            else {
              local_5c = local_8;
              local_2c = 0x3f7;
              local_14 = _DAT_006b2c38;
            }
          }
        }
        if (local_2c == -1) {
          for (local_c = 0; local_c < 4; local_c = local_c + 1) {
            FUN_005dcb00(local_c);
            iVar6 = FUN_005d5a50();
            if ((iVar6 == 0) && (*(char *)(param_1 + local_c + 0x14) == '\0')) {
              *(undefined1 *)(param_1 + local_c + 0x14) = 1;
              FUN_005dcb00(local_c);
              piVar4 = (int *)FUN_0063aac0();
              if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              if (bVar1) {
                local_2c = 0x40e;
              }
              else {
                local_5c = local_c;
                local_2c = 0x3f5;
              }
              local_14 = _DAT_006b2c40;
              break;
            }
          }
        }
      }
    }
    else {
      iVar6 = FUN_005dac90();
      if (iVar6 != -1) {
        uVar7 = FUN_005dac90();
        FUN_005dcb00(uVar7);
        piVar4 = (int *)FUN_0063aac0();
        if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_1c8 = -1;
        }
        else {
          local_1c8 = FUN_005dac90();
        }
        local_5c = local_1c8;
        uVar7 = FUN_005dac90();
        FUN_005dcb00(uVar7);
        piVar4 = (int *)FUN_0063aac0();
        if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
        local_2c = (-(uint)bVar2 & 0x15) + 0x3fd;
        local_14 = 0x3ff0000000000000;
      }
    }
    break;
  case 7:
    local_30 = 0xcb52;
    break;
  case 8:
    local_30 = 0xcbb6;
    break;
  case 9:
    local_30 = 0xcbe8;
    break;
  case 10:
    local_30 = 0xcb85;
    break;
  case 0xb:
    local_60 = 0;
    cVar3 = FUN_00418460();
    if ((cVar3 != '\0') &&
       ((iVar6 = FUN_00418700(), 1 < iVar6 || (*(int *)(DAT_00790324 + 0x4d0) == -1)))) {
      if (local_8 == -1) {
        local_1e0 = 4;
      }
      else {
        local_1e0 = local_8;
      }
      local_28 = FUN_00419980(local_1e0,0xffffffff);
      if (local_8 == -1) {
        local_1e4 = 4;
      }
      else {
        local_1e4 = local_8;
      }
      local_18 = FUN_004198d0(local_1e4,0xffffffff);
      if ((local_18 == local_28) || (0x13 < local_28)) {
        local_30 = local_28 + 0xcb1d;
      }
      else {
        local_30 = local_18 + 0xcb31;
      }
    }
    break;
  case 0xc:
    for (local_c = 3; -1 < local_c; local_c = local_c + -1) {
      if (*(char *)(DAT_00790324 + 0x110 + local_8 * 0x118 + local_c) != -1) {
        cVar3 = *(char *)(DAT_00790324 + 0x110 + local_8 * 0x118 + local_c);
        if (cVar3 == '\0') {
          local_30 = 0xcb6b;
        }
        else if (cVar3 == '\x01') {
          local_30 = 0xcc01;
        }
        else if (cVar3 == '\x02') {
          local_30 = 0xcbcf;
        }
        break;
      }
    }
  }
  iVar6 = DAT_00790324;
  *(undefined4 *)(DAT_00790324 + 0x4ec) = 0xffffffff;
  *(undefined4 *)(iVar6 + 0x4f0) = 0xffffffff;
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1);
  if (param_2 == (int *)0x0) {
    param_2 = *(int **)(DAT_0162ee80 + 4);
  }
  if (local_5c == 4) {
    if (local_30 == -1) {
      (**(code **)(*param_2 + 0x1c))(0);
    }
    else {
      if ((local_30 == 0xcbe8) || (local_30 == 0xcb85)) {
        *(undefined1 *)(*(int *)(DAT_0079032c + 0x2c) + 400) = 1;
      }
      if (local_60 == -1) {
        FUN_005cd7c0(local_30,param_2,0);
      }
      else {
        FUN_005cd700(local_30,local_60,param_2,0);
      }
    }
  }
  else if (local_2c == -1) {
    (**(code **)(*param_2 + 0x1c))(0);
  }
  else {
    if (local_5c == -1) {
      local_1ec = FUN_00419280(*(undefined4 *)(DAT_00790324 + 0x4f4));
    }
    else {
      local_1ec = local_5c;
    }
    local_54 = local_1ec;
    local_50 = local_2c;
    local_4c = local_64;
    local_44 = local_24;
    local_3c = local_14;
    if (local_1ec == -1) {
      (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
    }
    else {
      (**(code **)(**(int **)(DAT_00790320 + 4) + 4))(1);
      uVar8 = (uint)local_55;
      uVar7 = FUN_00637810(2);
      FUN_00639390(&local_54,param_2,uVar7,uVar8);
    }
  }
  return;
}

