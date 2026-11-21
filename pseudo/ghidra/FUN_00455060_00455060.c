// FUN_00455060  00455060

undefined2 __thiscall FUN_00455060(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 extraout_var;
  ulonglong uVar6;
  uint local_40;
  uint local_38;
  uint local_30;
  undefined2 local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  char local_9;
  uint local_8;
  
  local_30 = 0xffffffff;
  local_20 = 0xffffffff;
  FUN_004517a0(&local_1c,&local_8,&local_10);
  cVar2 = FUN_00451c20(local_10,local_1c,local_8,&local_30,&local_20);
  if (cVar2 == '\0') {
    uVar6 = FUN_00451870(local_10,local_1c,local_8,&local_30,&local_20);
    uVar5 = (uint)(uVar6 >> 0x20);
    if ((uVar6 & 0xff) == 0) {
      local_38 = 0xffffffff;
      local_14 = 0;
      while ((int)local_14 < 7) {
        iVar3 = FUN_0044f6c0(CONCAT22((short)(uVar5 >> 0x10),
                                      *(undefined2 *)(param_1 + 4 + local_14 * 2)));
        if ((iVar3 != -1) &&
           (iVar3 = FUN_0044f6c0(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_14 * 2)))
           , iVar3 != *(int *)(param_1 + 0x2d0))) {
          uVar4 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_14 * 2));
          cVar2 = FUN_00450c20(uVar4);
          if (cVar2 == '\0') {
            local_38 = local_14;
            break;
          }
        }
        uVar5 = local_14 + 1;
        local_14 = uVar5;
      }
      local_9 = '\x01';
      bVar1 = true;
      if (local_10 == 0xe) {
        cVar2 = FUN_0044f750(0xe,*(undefined4 *)(param_1 + 0x2d0));
        if ((cVar2 == '\0') || (4 < *(int *)(param_1 + 0x2d4))) {
          local_9 = '\0';
        }
        if (((*(int *)(param_1 + 0x2d8) != 1) &&
            (*(int *)(param_1 + 0x2d4 + *(int *)(param_1 + 0x2f4) * 4) != 0xe)) ||
           (5 < *(int *)(param_1 + 0x2f4))) {
          bVar1 = false;
        }
        if ((local_9 != '\0') && (bVar1)) {
          local_30 = 2;
          local_20 = 3;
          FUN_0044f840(2,3,param_2,param_3);
          if (*(int *)(param_1 + 0x2d8) == 1) {
            return 3;
          }
          return 2;
        }
        local_30 = local_1c;
        if ((local_9 == '\0') && (bVar1)) {
          if (local_38 == 0xffffffff) {
            FUN_005e9f20("singletonCardNotInFlush != -1","..\\Casino\\paigowai.cpp",0xbeb);
          }
          local_20 = local_38;
          FUN_0044f840(local_30,local_38,param_2,param_3);
          return 1;
        }
        if ((!bVar1) && (local_9 != '\0')) {
          if (*(int *)(param_1 + 0x2f4) < 6) {
            for (local_14 = 2; (int)local_14 < 7; local_14 = local_14 + 1) {
              iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_14 * 2));
              if ((*(int *)(param_1 + 0x2e8) < iVar3) ||
                 (iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_14 * 2)),
                 iVar3 < *(int *)(param_1 + 0x2d8))) {
                local_20 = local_14;
                break;
              }
            }
          }
          else if (*(int *)(param_1 + 0x2f4) == 6) {
            if ((*(int *)(param_1 + 0x2d8) == 1) || (*(int *)(param_1 + 0x2ec) == 0xe)) {
              for (local_14 = 2; (int)local_14 < 7; local_14 = local_14 + 1) {
                iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_14 * 2));
                if ((*(int *)(param_1 + 0x2ec) < iVar3) ||
                   (iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_14 * 2)),
                   iVar3 < *(int *)(param_1 + 0x2d8))) {
                  local_20 = local_14;
                  break;
                }
              }
            }
            else {
              local_20 = FUN_0044f7e0(*(undefined4 *)
                                       (param_1 + 0x2d4 + *(int *)(param_1 + 0x2f4) * 4),0);
            }
          }
          else if (*(int *)(param_1 + 0x2d8) == 1) {
            local_20 = FUN_0044f7e0(*(undefined4 *)(param_1 + 0x2d4 + *(int *)(param_1 + 0x2f4) * 4)
                                    ,0);
          }
          else {
            local_20 = FUN_0044f7e0(*(undefined4 *)(param_1 + 0x2d0 + *(int *)(param_1 + 0x2f4) * 4)
                                    ,0);
          }
          FUN_0044f840(local_30,local_20,param_2,param_3);
          return 1;
        }
        if (local_9 == '\0') {
          FUN_00455740(param_2,param_3);
          return 1;
        }
      }
      if (local_38 == 0xffffffff) {
        if (*(int *)(param_1 + 0x2f4) == 5) {
          for (local_14 = 1; (int)local_14 < 7; local_14 = local_14 + 1) {
            iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_14 * 2));
            if ((*(int *)(param_1 + 0x2e8) < iVar3) ||
               (iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_14 * 2)),
               iVar3 < *(int *)(param_1 + 0x2d8))) {
              local_38 = local_14;
              break;
            }
          }
        }
        else if (*(int *)(param_1 + 0x2d8) == 1) {
          local_38 = 0;
        }
        else {
          local_38 = FUN_0044f7e0(*(undefined4 *)(param_1 + 0x2ec),0);
        }
      }
      iVar3 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_1c * 2));
      if (iVar3 == *(int *)(param_1 + 0x2d0)) {
        local_40 = local_8;
      }
      else {
        local_40 = local_1c;
      }
      local_24 = local_40;
      local_28 = -1;
      local_18 = -1;
      for (local_14 = 0; (int)local_14 < 4; local_14 = local_14 + 1) {
        if (*(int *)(param_1 + 0x328 + ((*(int *)(param_1 + 0x344) + -1) - local_14) * 4) !=
            *(int *)(param_1 + 0x2fc)) {
          if (local_28 != -1) {
            local_18 = *(int *)(param_1 + 0x328 + ((*(int *)(param_1 + 0x344) + -1) - local_14) * 4)
            ;
            break;
          }
          local_28 = *(int *)(param_1 + 0x328 + ((*(int *)(param_1 + 0x344) + -1) - local_14) * 4);
        }
      }
      local_2c = 3;
      local_30 = local_40;
      local_20 = local_38;
      if (((7 < local_10) && (10 < *(int *)(param_1 + 0x324 + *(int *)(param_1 + 0x344) * 4))) &&
         (((((local_28 == 0xd && (((local_18 == 0xc && (8 < local_10)) && (local_10 < 0xe)))) ||
            ((((local_28 == 0xd && (local_18 == 0xb)) && (8 < local_10)) && (local_10 < 0xd)))) ||
           (((local_28 == 0xc && (9 < local_18)) &&
            (iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_38 * 2)), iVar3 < 0xd)))) ||
          (((local_28 == 0xb && (8 < local_10)) &&
           (iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_38 * 2)), iVar3 < 0xc)))))) {
        local_2c = 4;
        local_30 = 0xffffffff;
        local_20 = 0xffffffff;
        for (local_14 = 0; (int)local_14 < 7; local_14 = local_14 + 1) {
          uVar4 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_14 * 2));
          cVar2 = FUN_00450c20(uVar4);
          if (cVar2 == '\0') {
            if (local_30 != 0xffffffff) {
              local_20 = local_14;
              break;
            }
            local_30 = local_14;
          }
        }
      }
      FUN_0044f840(local_30,local_20,param_2,param_3);
    }
    else {
      FUN_0044f840(local_30,local_20,param_2,param_3);
      local_2c = 0;
    }
  }
  else {
    FUN_0044f840(local_30,local_20,param_2,param_3);
    local_2c = 0;
  }
  return local_2c;
}

