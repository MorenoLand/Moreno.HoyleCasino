// FUN_006241c0  006241c0

void FUN_006241c0(int param_1,int param_2,int param_3,int param_4,uint param_5,undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_24;
  int local_20;
  int local_1c;
  uint *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((param_1 == param_3) && (param_2 == param_4)) {
    FUN_00623ab0(param_1,param_2,param_5,param_6);
  }
  else if (param_1 == param_3) {
    FUN_00623f00(param_1,param_2,param_4,param_5,param_6);
  }
  else if (param_2 == param_4) {
    FUN_00623c60(param_1,param_3,param_2,param_5,param_6);
  }
  else {
    local_24 = param_3 - param_1;
    local_10 = param_4 - param_2;
    local_20 = 0;
    local_1c = 1;
    local_c = FUN_006238b0();
    if (local_24 < 0) {
      local_1c = -1;
      local_24 = -local_24;
    }
    if (local_10 < 0) {
      local_c = -local_c;
      local_10 = -local_10;
    }
    uVar2 = FUN_00617b30(param_5);
    iVar3 = FUN_006238d0(param_2);
    iVar4 = FUN_00623930();
    local_14 = (uint *)(iVar3 + iVar4 * param_1);
    switch(param_6) {
    case 2:
      param_5 = 0xff000000;
    case 4:
      if (param_5._3_1_ != 0) {
        if (param_5._3_1_ == 0xff) {
          if (local_10 < local_24) {
            local_8 = local_24 + 1;
            while (local_8 != 0) {
              *local_14 = uVar2;
              local_20 = local_20 + local_10;
              if (local_24 < local_20) {
                local_20 = local_20 - local_24;
                local_14 = (uint *)((int)local_14 + local_c);
              }
              local_14 = local_14 + local_1c;
              local_8 = local_8 + -1;
            }
          }
          else {
            local_8 = local_10 + 1;
            while (local_8 != 0) {
              *local_14 = uVar2;
              local_20 = local_20 + local_24;
              if (local_10 < local_20) {
                local_20 = local_20 - local_10;
                local_14 = local_14 + local_1c;
              }
              local_14 = (uint *)((int)local_14 + local_c);
              local_8 = local_8 + -1;
            }
          }
        }
        else if (local_10 < local_24) {
          local_8 = local_24 + 1;
          while (local_8 != 0) {
            uVar5 = (uint)param_5._3_1_;
            uVar1 = *local_14;
            *local_14 = (((int)(uVar1 & 0xff00) >> 8) -
                        ((int)((((int)(uVar1 & 0xff00) >> 8) - ((int)(uVar2 & 0xff00) >> 8)) * uVar5
                              ) >> 8)) * 0x100 |
                        (((int)uVar1 >> 0x10) -
                        ((int)((((int)(uVar1 & 0xff0000) >> 0x10) -
                               ((int)(uVar2 & 0xff0000) >> 0x10)) * uVar5) >> 8)) * 0x10000 |
                        (uVar1 & 0xff) - ((int)(((uVar1 & 0xff) - (uVar2 & 0xff)) * uVar5) >> 8);
            local_20 = local_20 + local_10;
            if (local_24 < local_20) {
              local_20 = local_20 - local_24;
              local_14 = (uint *)((int)local_14 + local_c);
            }
            local_14 = local_14 + local_1c;
            local_8 = local_8 + -1;
          }
        }
        else {
          local_8 = local_10 + 1;
          while (local_8 != 0) {
            uVar5 = (uint)param_5._3_1_;
            uVar1 = *local_14;
            *local_14 = (((int)(uVar1 & 0xff00) >> 8) -
                        ((int)((((int)(uVar1 & 0xff00) >> 8) - ((int)(uVar2 & 0xff00) >> 8)) * uVar5
                              ) >> 8)) * 0x100 |
                        (((int)uVar1 >> 0x10) -
                        ((int)((((int)(uVar1 & 0xff0000) >> 0x10) -
                               ((int)(uVar2 & 0xff0000) >> 0x10)) * uVar5) >> 8)) * 0x10000 |
                        (uVar1 & 0xff) - ((int)(((uVar1 & 0xff) - (uVar2 & 0xff)) * uVar5) >> 8);
            local_20 = local_20 + local_24;
            if (local_10 < local_20) {
              local_20 = local_20 - local_10;
              local_14 = local_14 + local_1c;
            }
            local_14 = (uint *)((int)local_14 + local_c);
            local_8 = local_8 + -1;
          }
        }
      }
      break;
    case 0x10:
      if (local_10 < local_24) {
        local_8 = local_24 + 1;
        while (local_8 != 0) {
          FUN_0061d520(local_14,uVar2,param_5 >> 0x18);
          local_20 = local_20 + local_10;
          if (local_24 < local_20) {
            local_20 = local_20 - local_24;
            local_14 = (uint *)((int)local_14 + local_c);
          }
          local_14 = local_14 + local_1c;
          local_8 = local_8 + -1;
        }
      }
      else {
        local_8 = local_10 + 1;
        while (local_8 != 0) {
          FUN_0061d520(local_14,uVar2,param_5 >> 0x18);
          local_20 = local_20 + local_24;
          if (local_10 < local_20) {
            local_20 = local_20 - local_10;
            local_14 = local_14 + local_1c;
          }
          local_14 = (uint *)((int)local_14 + local_c);
          local_8 = local_8 + -1;
        }
      }
      break;
    case 0x20:
      if (local_10 < local_24) {
        local_8 = local_24 + 1;
        while (local_8 != 0) {
          FUN_0061d6a0(local_14,uVar2,param_5 >> 0x18);
          local_20 = local_20 + local_10;
          if (local_24 < local_20) {
            local_20 = local_20 - local_24;
            local_14 = (uint *)((int)local_14 + local_c);
          }
          local_14 = local_14 + local_1c;
          local_8 = local_8 + -1;
        }
      }
      else {
        local_8 = local_10 + 1;
        while (local_8 != 0) {
          FUN_0061d6a0(local_14,uVar2,param_5 >> 0x18);
          local_20 = local_20 + local_24;
          if (local_10 < local_20) {
            local_20 = local_20 - local_10;
            local_14 = local_14 + local_1c;
          }
          local_14 = (uint *)((int)local_14 + local_c);
          local_8 = local_8 + -1;
        }
      }
    }
  }
  return;
}

