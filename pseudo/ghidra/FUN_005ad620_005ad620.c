// FUN_005ad620  005ad620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005ad620(int param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_1b0;
  int local_1a8;
  int local_1a4;
  int local_18c;
  int local_68;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  bool local_49;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_8;
  
  local_49 = true;
  local_48 = FUN_005b5cb0();
  local_44 = -1;
  local_50 = -1;
  local_8 = FUN_005b4f00();
  local_1c = 0;
  local_14 = 0x3ff0000000000000;
  local_54 = 0xffffffff;
  local_40 = -1;
  uVar4 = FUN_005b5240();
  switch(uVar4) {
  case 0:
    local_40 = 0x7d8;
    break;
  case 1:
    switch(*(undefined4 *)(DAT_00793604 + 0x5bc)) {
    case 0:
      local_40 = 0x7d5;
      FUN_005dcb00(local_48);
      piVar5 = (int *)FUN_0063aac0();
      if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        iVar7 = FUN_005b4f50(local_48,0xffffffff);
        if ((iVar7 < 0x11) || (iVar7 = FUN_005b4f50(local_48,0xffffffff), 0x13 < iVar7)) {
          iVar7 = FUN_005b4f50(local_48,0xffffffff);
          if ((0x13 < iVar7) && (iVar7 = FUN_005b4f50(local_48,0xffffffff), iVar7 < 0x16)) {
            local_40 = 0x7d7;
          }
        }
        else {
          local_40 = 0x7d6;
        }
      }
      break;
    case 1:
      local_40 = 2000;
      break;
    case 2:
      local_40 = 0x7d2;
      break;
    case 3:
      local_40 = 0x7d4;
      break;
    case 4:
      local_40 = 0x402;
      FUN_005dcb00(local_48);
      piVar5 = (int *)FUN_0063aac0();
      if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        local_54 = 0x3f6;
        FUN_005b73a0(local_8,2);
      }
      local_49 = bVar1;
      break;
    default:
      FUN_005e9f20("false","..\\Casino\\royalmatchgame.cpp",0x135);
    }
    break;
  case 2:
    iVar7 = FUN_005b4f50(local_8,0xffffffff);
    if (iVar7 == 0x15) {
      FUN_005b73a0(local_8,1);
      FUN_005dcb00(local_8);
      piVar5 = (int *)FUN_0063aac0();
      if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        local_40 = 0x40d;
        local_14 = _DAT_006b2c38;
      }
    }
    else {
      FUN_005b73a0(local_8,2);
      FUN_005dcb00(local_8);
      piVar5 = (int *)FUN_0063aac0();
      if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        local_40 = 1000;
        local_14 = _DAT_006b3e40;
      }
      else {
        local_40 = 0x401;
        local_54 = 0x402;
        local_1c = _DAT_006b3e48;
        local_14 = _DAT_006b2c38;
      }
    }
    break;
  case 3:
    local_40 = 0x7d3;
    break;
  case 4:
    if (*(int *)(DAT_00793604 + 0x5bc) == 1) {
      iVar7 = FUN_005b58a0();
      local_49 = iVar7 != 1;
      cVar3 = FUN_005b3300(local_8,0xffffffff);
      if (cVar3 == '\0') {
        iVar7 = FUN_005b58a0();
        if (iVar7 != 1) {
          iVar7 = FUN_005b4f50(local_8,0xffffffff);
          if (iVar7 == 0x15) {
            FUN_005b73a0(local_8,1);
            FUN_005dcb00(local_8);
            piVar5 = (int *)FUN_0063aac0();
            if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              local_40 = 0x3f0;
              local_54 = 0x7dc;
              local_1c = _DAT_006b2c38;
            }
            else {
              local_40 = 0x404;
              local_54 = 0x3f4;
              local_1c = _DAT_006b3e38;
            }
            local_14 = _DAT_006b2c38;
          }
          else {
            FUN_005dcb00(local_8);
            piVar5 = (int *)FUN_0063aac0();
            if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (((bVar1) || (iVar7 = FUN_005b4f50(local_8,0xffffffff), iVar7 < 0xc)) ||
               (iVar7 = FUN_005b4f50(local_8,0xffffffff), 0x10 < iVar7)) {
              iVar7 = FUN_005b4f50(local_8,0xffffffff);
              if ((iVar7 < 0xc) || (iVar7 = FUN_005b4f50(local_8,0xffffffff), 0x10 < iVar7)) {
                iVar7 = FUN_005b5830(local_8,0xffffffff);
                if (4 < iVar7) {
                  local_40 = 0x7da;
                  local_14 = _DAT_006b2c38;
                }
              }
              else {
                local_40 = 0x7db;
                local_54 = 1000;
                local_1c = _DAT_006b3e38;
                local_14 = _DAT_006b3e40;
                FUN_005b73a0(local_8,2);
              }
            }
            else {
              local_40 = 0x402;
              local_54 = 0x3f6;
              local_1c = _DAT_006b2c38;
              local_14 = _DAT_006b2c38;
              FUN_005b73a0(local_8,2);
            }
          }
        }
      }
      else {
        FUN_005b73a0(local_8,2);
        FUN_005dcb00(local_8);
        piVar5 = (int *)FUN_0063aac0();
        if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_40 = 1000;
          local_54 = 0x40f;
        }
        else {
          local_40 = 0x7d1;
          local_54 = 0x402;
        }
        local_14 = _DAT_006b2c40;
        local_1c = _DAT_006b3e48;
      }
    }
    else if (*(int *)(DAT_00793604 + 0x5bc) == 2) {
      iVar7 = FUN_005b58a0();
      local_49 = iVar7 != 1;
      cVar3 = FUN_005b3300(local_8,0xffffffff);
      if (cVar3 == '\0') {
        iVar7 = FUN_005b58a0();
        if (iVar7 != 1) {
          iVar7 = FUN_005b4f50(local_8,0xffffffff);
          if (iVar7 == 0x15) {
            FUN_005b73a0(local_8,1);
            FUN_005dcb00(local_8);
            piVar5 = (int *)FUN_0063aac0();
            if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              local_40 = 0x7d9;
              local_54 = 0x40d;
            }
            else {
              local_40 = 0x404;
              local_54 = 0x3f4;
            }
            local_14 = _DAT_006b2c38;
            local_1c = _DAT_006b3e48;
          }
          else {
            iVar7 = FUN_005b4f50(local_8,0xffffffff);
            if (iVar7 < 0xf) {
              FUN_005b73a0(local_8,2);
              FUN_005dcb00(local_8);
              piVar5 = (int *)FUN_0063aac0();
              if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              if (bVar1) {
                local_40 = 0x409;
                local_54 = 0x40f;
                local_1c = _DAT_006b3e38;
                local_14 = _DAT_006b2c38;
              }
              else {
                local_40 = 0x401;
                local_54 = 0x3f6;
                local_1c = _DAT_006b3e38;
                local_14 = _DAT_006b2c38;
              }
            }
          }
        }
      }
      else {
        FUN_005b73a0(local_8,2);
        FUN_005dcb00(local_8);
        piVar5 = (int *)FUN_0063aac0();
        if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_40 = 1000;
        }
        else {
          local_40 = 0x7d1;
        }
        local_14 = _DAT_006b2c38;
      }
    }
    break;
  case 5:
    for (local_58 = 3; -1 < local_58; local_58 = local_58 + -1) {
      iVar7 = FUN_005b5010(local_8,local_58);
      if (iVar7 != -1) {
        iVar7 = FUN_005b5010(local_8,local_58);
        if (iVar7 == 0) {
          FUN_005b73a0(local_8,2);
          FUN_005dcb00(local_8);
          piVar5 = (int *)FUN_0063aac0();
          if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            local_40 = 1000;
            local_54 = 0x40f;
            local_1c = _DAT_006b3e38;
            local_14 = _DAT_006b2c38;
          }
          else {
            iVar7 = FUN_005dcb00(local_8);
            if (*(int *)(iVar7 + 0x4a8) < -5) {
              iVar7 = FUN_0062fbf0(2);
              if (iVar7 == 0) {
                local_40 = 0x3f1;
              }
              else {
                local_40 = 0x3ff;
              }
            }
            else {
              local_40 = 0x402;
            }
            local_54 = 0x3f6;
            local_1c = _DAT_006b3e38;
            local_14 = _DAT_006b2c38;
          }
        }
        else if (iVar7 == 1) {
          FUN_005b73a0(local_8,1);
          FUN_005dcb00(local_8);
          piVar5 = (int *)FUN_0063aac0();
          if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            local_40 = 0x3f0;
            local_54 = 0x40d;
            local_1c = _DAT_006b3e38;
            local_14 = _DAT_006b2c38;
          }
          else {
            iVar7 = FUN_005dcb00(local_8);
            if (*(int *)(iVar7 + 0x4a8) < 6) {
              local_40 = 0x3fc;
            }
            else {
              local_40 = 0x400;
            }
            local_54 = 0x404;
            local_1c = _DAT_006b3e48;
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
      iVar7 = FUN_0062fbf0(10);
      if (iVar7 < 6) {
        iVar7 = FUN_0062fbf0(2);
        if (iVar7 == 0) {
          local_8 = FUN_005dada0();
          if (local_8 != -1) {
            FUN_005dcb00(local_8);
            piVar5 = (int *)FUN_0063aac0();
            if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              local_40 = 0x40c;
              local_14 = _DAT_006b3e40;
            }
            else {
              local_48 = local_8;
              local_40 = 0x3f3;
              local_14 = _DAT_006b3e40;
            }
          }
        }
        else {
          local_8 = FUN_005dac90();
          if (local_8 != -1) {
            FUN_005dcb00(local_8);
            piVar5 = (int *)FUN_0063aac0();
            if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              local_40 = 0x40b;
              local_14 = _DAT_006b3e40;
            }
            else {
              local_48 = local_8;
              local_40 = 0x3f2;
              local_14 = _DAT_006b3e40;
            }
          }
        }
      }
      else {
        local_8 = FUN_005dada0();
        if (local_8 != -1) {
          FUN_005dcb00(local_8);
          iVar7 = FUN_005d5a50();
          iVar6 = FUN_005da880();
          if (iVar7 < iVar6 / 10) {
            FUN_005dcb00(local_8);
            piVar5 = (int *)FUN_0063aac0();
            if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              local_40 = 0x410;
              local_14 = _DAT_006b2c38;
            }
            else {
              local_48 = local_8;
              local_40 = 0x3f7;
              local_14 = _DAT_006b2c38;
            }
          }
        }
        if (local_40 == -1) {
          for (local_5c = 0; local_5c < 4; local_5c = local_5c + 1) {
            FUN_005dcb00(local_5c);
            iVar7 = FUN_005d5a50();
            if ((iVar7 == 0) && (*(char *)(param_1 + local_5c + 0x14) == '\0')) {
              *(undefined1 *)(param_1 + local_5c + 0x14) = 1;
              FUN_005dcb00(local_5c);
              piVar5 = (int *)FUN_0063aac0();
              if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              if (bVar1) {
                local_40 = 0x40e;
              }
              else {
                local_48 = local_5c;
                local_40 = 0x3f5;
              }
              local_14 = _DAT_006b2c40;
              break;
            }
          }
        }
      }
    }
    else {
      iVar7 = FUN_005dac90();
      if (iVar7 != -1) {
        uVar4 = FUN_005dac90();
        FUN_005dcb00(uVar4);
        piVar5 = (int *)FUN_0063aac0();
        if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_18c = -1;
        }
        else {
          local_18c = FUN_005dac90();
        }
        local_48 = local_18c;
        uVar4 = FUN_005dac90();
        FUN_005dcb00(uVar4);
        piVar5 = (int *)FUN_0063aac0();
        if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
        local_40 = (-(uint)bVar2 & 0x15) + 0x3fd;
        local_14 = 0x3ff0000000000000;
      }
    }
    break;
  case 7:
    local_44 = 0xcb52;
    break;
  case 8:
    local_44 = 0xcbb6;
    break;
  case 9:
    local_44 = 0xcbe8;
    break;
  case 10:
    local_44 = 0xcb85;
    break;
  case 0xb:
    local_50 = 0;
    cVar3 = FUN_005b7d50();
    if ((cVar3 != '\0') &&
       ((iVar7 = FUN_005b58a0(), 1 < iVar7 || (iVar7 = FUN_005b4f00(), iVar7 == -1)))) {
      if (local_8 == -1) {
        local_1a4 = 4;
      }
      else {
        local_1a4 = local_8;
      }
      iVar7 = FUN_005b4f50(local_1a4,0xffffffff);
      if (local_8 == -1) {
        local_1a8 = 4;
      }
      else {
        local_1a8 = local_8;
      }
      local_44 = FUN_005b5260(local_1a8,0xffffffff);
      if ((local_44 == iVar7) || (0x13 < iVar7)) {
        local_44 = iVar7 + 0xcb1d;
      }
      else {
        local_44 = local_44 + 0xcb31;
      }
    }
    break;
  case 0xc:
    for (local_68 = 3; -1 < local_68; local_68 = local_68 + -1) {
      iVar7 = FUN_005b5010(local_8,local_68);
      if (iVar7 != -1) {
        iVar7 = FUN_005b5010(local_8,local_68);
        if (iVar7 == 0) {
          local_44 = 0xcb6b;
        }
        else if (iVar7 == 1) {
          local_44 = 0xcc01;
        }
        else if (iVar7 == 2) {
          local_44 = 0xcbcf;
        }
        break;
      }
    }
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\royalmatchgame.cpp",0x2a5);
  }
  FUN_005b7310(0xffffffff,0xffffffff);
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1);
  if (param_2 == (int *)0x0) {
    param_2 = *(int **)(DAT_0162ee80 + 4);
  }
  if (local_48 == 4) {
    if (local_44 == -1) {
      (**(code **)(*param_2 + 0x1c))(0);
    }
    else {
      if ((local_44 == 0xcbe8) || (local_44 == 0xcb85)) {
        *(undefined1 *)(*(int *)(DAT_007935f8 + 0x2c) + 400) = 1;
      }
      if (local_50 == -1) {
        FUN_005cd7c0(local_44,param_2,0);
      }
      else {
        FUN_005cd700(local_44,local_50,param_2,0);
      }
    }
  }
  else if (local_40 == -1) {
    (**(code **)(*param_2 + 0x1c))(0);
  }
  else {
    if (local_48 == -1) {
      uVar4 = FUN_005b5c90(0);
      local_1b0 = FUN_005b5cd0(uVar4);
    }
    else {
      local_1b0 = local_48;
    }
    local_3c = local_1b0;
    local_38 = local_40;
    local_34 = local_54;
    local_2c = local_1c;
    local_24 = local_14;
    if (local_1b0 == -1) {
      (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
    }
    else {
      (**(code **)(**(int **)(DAT_00793600 + 4) + 4))(1);
      uVar8 = (uint)local_49;
      uVar4 = FUN_00637810(2);
      FUN_00639390(&local_3c,param_2,uVar4,uVar8);
    }
  }
  return;
}

