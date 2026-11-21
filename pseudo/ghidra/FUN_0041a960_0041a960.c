// FUN_0041a960  0041a960

bool __thiscall FUN_0041a960(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int local_6c;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar3 = FUN_004194c0(param_2);
  if (((iVar3 < 2) ||
      ((cVar1 = FUN_00418650(), cVar1 != '\0' &&
       (*(char *)(param_1 + 0x118 + param_2 * 0x118) == '\0')))) &&
     (cVar1 = FUN_0041af20(param_2), cVar1 != '\0')) {
    if (param_2 == -1) {
      local_8 = -1;
    }
    else {
      if (param_2 == 4) {
        local_38 = 0;
      }
      else {
        local_38 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
      }
      local_8 = local_38;
    }
    iVar3 = FUN_00419530(param_2,local_8);
    if (iVar3 < 3) {
      uVar2 = FUN_004186d0();
      switch(uVar2) {
      case 0:
        if (param_2 == -1) {
          local_c = -1;
        }
        else {
          if (param_2 == 4) {
            local_40 = 0;
          }
          else {
            local_40 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
          }
          local_c = local_40;
        }
        iVar3 = FUN_004197d0(param_2,local_c);
        return iVar3 == 0xb;
      case 1:
        goto switchD_0041aa33_caseD_1;
      case 2:
        if (param_2 == -1) {
          local_1c = -1;
        }
        else {
          if (param_2 == 4) {
            local_54 = 0;
          }
          else {
            local_54 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
          }
          local_1c = local_54;
        }
        iVar3 = FUN_004197d0(param_2,local_1c);
        if (iVar3 != 0xb) {
          if (param_2 == -1) {
            local_20 = -1;
          }
          else {
            if (param_2 == 4) {
              local_58 = 0;
            }
            else {
              local_58 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
            }
            local_20 = local_58;
          }
          iVar3 = FUN_004197d0(param_2,local_20);
          if (iVar3 != 10) {
            if (param_2 == -1) {
              local_24 = -1;
            }
            else {
              if (param_2 == 4) {
                local_5c = 0;
              }
              else {
                local_5c = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
              }
              local_24 = local_5c;
            }
            iVar3 = FUN_004197d0(param_2,local_24);
            if (iVar3 != 9) {
              if (param_2 == -1) {
                local_28 = -1;
              }
              else {
                if (param_2 == 4) {
                  local_60 = 0;
                }
                else {
                  local_60 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
                }
                local_28 = local_60;
              }
              iVar3 = FUN_004198d0(param_2,local_28);
              if (iVar3 != 10) {
                if (param_2 == -1) {
                  local_2c = -1;
                }
                else {
                  if (param_2 == 4) {
                    local_64 = 0;
                  }
                  else {
                    local_64 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
                  }
                  local_2c = local_64;
                }
                iVar3 = FUN_004198d0(param_2,local_2c);
                if (iVar3 != 9) {
                  return false;
                }
              }
            }
          }
        }
        return true;
      case 3:
        if (param_2 == -1) {
          local_30 = -1;
        }
        else {
          if (param_2 == 4) {
            local_6c = 0;
          }
          else {
            local_6c = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
          }
          local_30 = local_6c;
        }
        uVar2 = FUN_0041af80(param_2,local_30);
        return (bool)uVar2;
      case 4:
        return true;
      default:
        FUN_005e9f20("false","..\\Casino\\blackjackstate.cpp",0x432);
        return false;
      }
    }
  }
  return false;
switchD_0041aa33_caseD_1:
  if (param_2 == -1) {
    local_10 = -1;
  }
  else {
    if (param_2 == 4) {
      local_44 = 0;
    }
    else {
      local_44 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
    }
    local_10 = local_44;
  }
  iVar3 = FUN_004197d0(param_2,local_10);
  if (iVar3 != 0xb) {
    if (param_2 == -1) {
      local_14 = -1;
    }
    else {
      if (param_2 == 4) {
        local_48 = 0;
      }
      else {
        local_48 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
      }
      local_14 = local_48;
    }
    iVar3 = FUN_004197d0(param_2,local_14);
    if (iVar3 != 10) {
      if (param_2 == -1) {
        local_18 = -1;
      }
      else {
        if (param_2 == 4) {
          local_4c = 0;
        }
        else {
          local_4c = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
        }
        local_18 = local_4c;
      }
      iVar3 = FUN_004198d0(param_2,local_18);
      if (iVar3 != 10) {
        return false;
      }
    }
  }
  return true;
}

