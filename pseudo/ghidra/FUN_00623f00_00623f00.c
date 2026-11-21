// FUN_00623f00  00623f00

void FUN_00623f00(int param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_38;
  uint local_34;
  uint *local_c;
  
  iVar2 = FUN_006238b0();
  local_34 = ((int)param_2 < 0) - 1 & param_2;
  iVar3 = FUN_00623910();
  if (iVar3 + -1 < (int)local_34) {
    iVar3 = FUN_00623910();
    local_34 = iVar3 - 1;
  }
  param_2 = local_34;
  local_38 = ((int)param_3 < 0) - 1 & param_3;
  iVar3 = FUN_00623910();
  if (iVar3 + -1 < (int)local_38) {
    iVar3 = FUN_00623910();
    local_38 = iVar3 - 1;
  }
  param_3 = local_38;
  if ((int)local_38 < (int)local_34) {
    param_3 = local_34;
    param_2 = local_38;
  }
  if ((-1 < param_1) && (iVar3 = FUN_006238f0(), param_1 < iVar3)) {
    iVar3 = FUN_006238d0(param_2);
    iVar4 = FUN_00623930();
    local_c = (uint *)(iVar3 + iVar4 * param_1);
    uVar5 = FUN_00617b30(param_4);
    switch(param_5) {
    case 2:
      param_4 = 0xff000000;
    case 4:
      if (param_4._3_1_ != 0) {
        if (param_4._3_1_ == 0xff) {
          for (; (int)param_2 <= (int)param_3; param_2 = param_2 + 1) {
            *local_c = uVar5;
            local_c = (uint *)((int)local_c + iVar2);
          }
        }
        else {
          for (; (int)param_2 <= (int)param_3; param_2 = param_2 + 1) {
            uVar6 = (uint)param_4._3_1_;
            uVar1 = *local_c;
            *local_c = (((int)(uVar1 & 0xff00) >> 8) -
                       ((int)((((int)(uVar1 & 0xff00) >> 8) - ((int)(uVar5 & 0xff00) >> 8)) * uVar6)
                       >> 8)) * 0x100 |
                       (((int)uVar1 >> 0x10) -
                       ((int)((((int)(uVar1 & 0xff0000) >> 0x10) - ((int)(uVar5 & 0xff0000) >> 0x10)
                              ) * uVar6) >> 8)) * 0x10000 |
                       (uVar1 & 0xff) - ((int)(((uVar1 & 0xff) - (uVar5 & 0xff)) * uVar6) >> 8);
            local_c = (uint *)((int)local_c + iVar2);
          }
        }
      }
      break;
    case 0x10:
      for (; (int)param_2 <= (int)param_3; param_2 = param_2 + 1) {
        FUN_0061d520(local_c,uVar5,param_4 >> 0x18);
        local_c = (uint *)((int)local_c + iVar2);
      }
      break;
    case 0x20:
      for (; (int)param_2 <= (int)param_3; param_2 = param_2 + 1) {
        FUN_0061d6a0(local_c,uVar5,param_4 >> 0x18);
        local_c = (uint *)((int)local_c + iVar2);
      }
    }
  }
  return;
}

