// FUN_00685e50  00685e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00685e50(int param_1,short *param_2,int param_3,short *param_4,int param_5,int param_6,
                 undefined4 *param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  short *local_24;
  short *local_20;
  int local_1c;
  double local_18;
  double local_10;
  
  local_20 = (short *)FUN_00686200();
  if (*(int *)(param_1 + 0x58) < 2) {
    return 0xffffff7d;
  }
  do {
    if ((*(int *)(param_1 + 0x58) == 4) &&
       (uVar1 = FUN_00691c40(param_1 + 0x1e0,&local_34), local_28 = uVar1, uVar1 != 0)) {
      if ((int)uVar1 < 1) {
        return uVar1;
      }
      iVar2 = FUN_00685dd0(param_1,0xffffffff);
      local_30 = *(int *)(iVar2 + 4);
      local_1c = local_30 * param_5;
      uVar3 = param_3 / local_1c;
      if ((int)uVar3 < (int)uVar1) {
        uVar1 = uVar3;
        local_28 = uVar3;
      }
      if ((int)uVar1 < 1) {
        return 0xffffff7d;
      }
      if (param_5 == 1) {
        iVar2 = 0;
        if (0 < (int)uVar1) {
          do {
            iVar4 = 0;
            if (0 < local_30) {
              do {
                local_18 = (double)(*(float *)(*(int *)(local_34 + iVar4 * 4) + iVar2 * 4) *
                                   _DAT_006e4f9c);
                local_20 = (short *)(int)ROUND(local_18);
                if ((int)local_20 < 0x80) {
                  psVar5 = local_20;
                  if ((int)local_20 < -0x80) {
                    psVar5 = (short *)0xffffff80;
                  }
                }
                else {
                  psVar5 = (short *)0x7f;
                }
                *(byte *)param_2 = (-(param_6 != 0) & 0x80U) + 0x80 + (char)psVar5;
                param_2 = (short *)((int)param_2 + 1);
                iVar4 = iVar4 + 1;
                uVar1 = local_28;
              } while (iVar4 < local_30);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)uVar1);
        }
      }
      else {
        local_24 = (short *)((-(uint)(param_6 != 0) & 0xffff8000) + 0x8000);
        if (local_20 == param_4) {
          local_2c = 0;
          if (param_6 == 0) {
            if (0 < local_30) {
              do {
                iVar2 = *(int *)(local_34 + local_2c * 4);
                iVar4 = 0;
                psVar5 = param_2;
                if (0 < (int)uVar1) {
                  do {
                    local_10 = (double)(*(float *)(iVar2 + iVar4 * 4) * _DAT_006e4f98);
                    iVar7 = (int)ROUND(local_10);
                    local_18 = (double)CONCAT44(local_18._4_4_,iVar7);
                    if (iVar7 < 0x8000) {
                      if (iVar7 < -0x8000) {
                        iVar7 = -0x8000;
                      }
                    }
                    else {
                      iVar7 = 0x7fff;
                    }
                    *psVar5 = (short)iVar7 + -0x8000;
                    iVar4 = iVar4 + 1;
                    psVar5 = psVar5 + local_30;
                    uVar1 = local_28;
                  } while (iVar4 < (int)local_28);
                }
                local_2c = local_2c + 1;
                param_2 = param_2 + 1;
                local_20 = param_2;
              } while (local_2c < local_30);
            }
          }
          else if (0 < local_30) {
            do {
              iVar2 = *(int *)(local_34 + local_2c * 4);
              iVar4 = 0;
              psVar5 = param_2;
              if (0 < (int)uVar1) {
                do {
                  local_18 = (double)(*(float *)(iVar2 + iVar4 * 4) * _DAT_006e4f98);
                  local_20 = (short *)(int)ROUND(local_18);
                  if ((int)local_20 < 0x8000) {
                    psVar6 = local_20;
                    if ((int)local_20 < -0x8000) {
                      psVar6 = (short *)0xffff8000;
                    }
                  }
                  else {
                    psVar6 = (short *)0x7fff;
                  }
                  *psVar5 = (short)psVar6;
                  iVar4 = iVar4 + 1;
                  psVar5 = psVar5 + local_30;
                } while (iVar4 < (int)uVar1);
              }
              local_2c = local_2c + 1;
              param_2 = param_2 + 1;
              local_24 = param_2;
            } while (local_2c < local_30);
          }
        }
        else if (param_4 == (short *)0x0) {
          iVar2 = 0;
          if (0 < (int)uVar1) {
            do {
              iVar4 = 0;
              if (0 < local_30) {
                do {
                  local_10 = (double)(*(float *)(*(int *)(local_34 + iVar4 * 4) + iVar2 * 4) *
                                     _DAT_006e4f98);
                  iVar7 = (int)ROUND(local_10);
                  local_18 = (double)CONCAT44(local_18._4_4_,iVar7);
                  if (iVar7 < 0x8000) {
                    if (iVar7 < -0x8000) {
                      iVar7 = -0x8000;
                    }
                  }
                  else {
                    iVar7 = 0x7fff;
                  }
                  *(char *)param_2 = (char)(char *)(iVar7 + (int)local_24);
                  *(char *)((int)param_2 + 1) = (char)((uint)(iVar7 + (int)local_24) >> 8);
                  param_2 = param_2 + 1;
                  iVar4 = iVar4 + 1;
                } while (iVar4 < local_30);
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)uVar1);
          }
        }
        else {
          iVar2 = 0;
          if (0 < (int)uVar1) {
            do {
              iVar4 = 0;
              if (0 < local_30) {
                do {
                  local_10 = (double)(*(float *)(*(int *)(local_34 + iVar4 * 4) + iVar2 * 4) *
                                     _DAT_006e4f98);
                  iVar7 = (int)ROUND(local_10);
                  local_18 = (double)CONCAT44(local_18._4_4_,iVar7);
                  if (iVar7 < 0x8000) {
                    if (iVar7 < -0x8000) {
                      iVar7 = -0x8000;
                    }
                  }
                  else {
                    iVar7 = 0x7fff;
                  }
                  *(char *)param_2 = (char)((uint)(iVar7 + (int)local_24) >> 8);
                  *(char *)((int)param_2 + 1) = (char)(char *)(iVar7 + (int)local_24);
                  param_2 = param_2 + 1;
                  iVar4 = iVar4 + 1;
                } while (iVar4 < local_30);
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)uVar1);
          }
        }
      }
      FUN_00691ca0(param_1 + 0x1e0,uVar1);
      uVar3 = *(uint *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = uVar3 + uVar1;
      *(uint *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar3,uVar1);
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = *(undefined4 *)(param_1 + 0x60);
      }
      return local_1c * uVar1;
    }
    uVar1 = FUN_006859f0(param_1,0,1,1);
    if (uVar1 == 0xfffffffe) {
      return 0;
    }
  } while (0 < (int)uVar1);
  return uVar1;
}

