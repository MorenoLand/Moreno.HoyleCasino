// FUN_006217b0  006217b0

void FUN_006217b0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  int local_8;
  
  local_20 = *param_2;
  local_8 = param_2[1];
  local_14 = param_2[2];
  local_38 = param_2[3];
  local_34 = param_2[4];
  local_2c = param_2[5];
  local_24 = local_20;
  if (local_20 < local_8) {
    for (; local_3c = local_14, local_24 <= local_8; local_24 = local_24 + 1) {
      for (; local_3c <= local_38; local_3c = local_3c + 1) {
        local_30 = (int *)(param_1 + local_24 * 0x2000 + local_3c * 0x80 + local_34 * 4);
        for (local_1c = local_34; local_1c <= local_2c; local_1c = local_1c + 1) {
          iVar1 = *local_30;
          local_30 = local_30 + 1;
          if (iVar1 != 0) {
            local_20 = local_24;
            *param_2 = local_24;
            goto LAB_00621894;
          }
        }
      }
    }
  }
LAB_00621894:
  local_24 = local_8;
  if (local_20 < local_8) {
    for (; local_3c = local_14, local_20 <= local_24; local_24 = local_24 + -1) {
      for (; local_3c <= local_38; local_3c = local_3c + 1) {
        local_30 = (int *)(param_1 + local_24 * 0x2000 + local_3c * 0x80 + local_34 * 4);
        for (local_1c = local_34; local_1c <= local_2c; local_1c = local_1c + 1) {
          iVar1 = *local_30;
          local_30 = local_30 + 1;
          if (iVar1 != 0) {
            local_8 = local_24;
            param_2[1] = local_24;
            goto LAB_0062193e;
          }
        }
      }
    }
  }
LAB_0062193e:
  local_3c = local_14;
  if (local_14 < local_38) {
    for (; local_3c <= local_38; local_3c = local_3c + 1) {
      for (local_24 = local_20; local_24 <= local_8; local_24 = local_24 + 1) {
        local_30 = (int *)(param_1 + local_24 * 0x2000 + local_3c * 0x80 + local_34 * 4);
        for (local_1c = local_34; local_1c <= local_2c; local_1c = local_1c + 1) {
          iVar1 = *local_30;
          local_30 = local_30 + 1;
          if (iVar1 != 0) {
            local_14 = local_3c;
            param_2[2] = local_3c;
            goto LAB_006219e8;
          }
        }
      }
    }
  }
LAB_006219e8:
  local_3c = local_38;
  if (local_14 < local_38) {
    for (; local_14 <= local_3c; local_3c = local_3c + -1) {
      for (local_24 = local_20; local_24 <= local_8; local_24 = local_24 + 1) {
        local_30 = (int *)(param_1 + local_24 * 0x2000 + local_3c * 0x80 + local_34 * 4);
        for (local_1c = local_34; local_1c <= local_2c; local_1c = local_1c + 1) {
          iVar1 = *local_30;
          local_30 = local_30 + 1;
          if (iVar1 != 0) {
            local_38 = local_3c;
            param_2[3] = local_3c;
            goto LAB_00621a92;
          }
        }
      }
    }
  }
LAB_00621a92:
  local_1c = local_34;
  if (local_34 < local_2c) {
    for (; local_1c <= local_2c; local_1c = local_1c + 1) {
      for (local_24 = local_20; local_24 <= local_8; local_24 = local_24 + 1) {
        local_30 = (int *)(param_1 + local_24 * 0x2000 + local_14 * 0x80 + local_1c * 4);
        for (local_3c = local_14; local_3c <= local_38; local_3c = local_3c + 1) {
          if (*local_30 != 0) {
            local_34 = local_1c;
            param_2[4] = local_1c;
            goto LAB_00621b3d;
          }
          local_30 = local_30 + 0x20;
        }
      }
    }
  }
LAB_00621b3d:
  local_1c = local_2c;
  if (local_34 < local_2c) {
    for (; local_34 <= local_1c; local_1c = local_1c + -1) {
      for (local_24 = local_20; local_24 <= local_8; local_24 = local_24 + 1) {
        local_30 = (int *)(param_1 + local_24 * 0x2000 + local_14 * 0x80 + local_1c * 4);
        for (local_3c = local_14; local_3c <= local_38; local_3c = local_3c + 1) {
          if (*local_30 != 0) {
            local_2c = local_1c;
            param_2[5] = local_1c;
            goto LAB_00621be9;
          }
          local_30 = local_30 + 0x20;
        }
      }
    }
  }
LAB_00621be9:
  iVar2 = (local_8 - local_20) * 0x78;
  iVar3 = (local_38 - local_14) * 0xec;
  iVar1 = (local_2c - local_34) * 0x58;
  param_2[6] = iVar2 * iVar2 + iVar3 * iVar3 + iVar1 * iVar1;
  local_10 = 0;
  for (local_24 = local_20; local_24 <= local_8; local_24 = local_24 + 1) {
    for (local_3c = local_14; local_3c <= local_38; local_3c = local_3c + 1) {
      local_30 = (int *)(param_1 + local_24 * 0x2000 + local_3c * 0x80 + local_34 * 4);
      for (local_1c = local_34; local_1c <= local_2c; local_1c = local_1c + 1) {
        if (*local_30 != 0) {
          local_10 = local_10 + 1;
        }
        local_30 = local_30 + 1;
      }
    }
  }
  param_2[7] = local_10;
  return;
}

