// FUN_006314a0  006314a0

byte FUN_006314a0(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  bVar3 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = *param_3;
  local_18 = param_3[1];
  local_44 = param_3[2];
  local_40 = param_3[3];
  local_28 = 3;
  iVar1 = param_3[4];
  iVar2 = param_3[5];
  local_38 = iVar1;
  local_34 = iVar2;
  if (param_4 < 4) {
    local_14 = *param_3;
    local_10 = param_3[1];
  }
  else {
    local_14 = param_3[6];
    local_10 = param_3[7];
  }
  while( true ) {
    if ((((local_18 <= param_2) && (param_2 <= local_40)) ||
        ((local_40 <= param_2 && (param_2 <= local_18)))) &&
       (((local_1c <= param_1 && (param_1 <= local_44)) ||
        ((local_44 <= param_1 && (param_1 <= local_1c)))))) {
      local_24 = param_1 - local_24;
      local_20 = param_2 - local_20;
      if ((param_1 - local_1c) * local_20 - (param_2 - local_18) * local_24 == 0) {
        return 1;
      }
    }
    if (((local_18 < param_2) && (param_2 < local_40)) ||
       ((local_40 < param_2 && (param_2 < local_18)))) {
      local_30 = local_44 - local_1c;
      local_2c = local_40 - local_18;
      if (local_2c < 0) {
        local_30 = -local_30;
        local_2c = -local_2c;
      }
      local_24 = param_1 - local_1c;
      local_20 = param_2 - local_18;
      if (0 < local_30 * local_20 - local_2c * local_24) {
        bVar3 = bVar3 + 1;
      }
    }
    else if ((local_40 == param_2) && (param_1 < local_44)) {
      if (local_34 == local_40) {
        if (0 < (local_40 - local_18) * (local_10 - local_34)) {
          bVar3 = bVar3 ^ 1;
        }
      }
      else if (0 < (local_40 - local_18) * (local_34 - local_40)) {
        bVar3 = bVar3 ^ 1;
      }
    }
    local_1c = local_44;
    local_18 = local_40;
    local_44 = local_38;
    local_40 = local_34;
    local_38 = local_14;
    local_34 = local_10;
    if ((local_14 == iVar1) && (local_10 == iVar2)) break;
    local_28 = local_28 + 1;
    local_14 = param_3[(local_28 % param_4) * 2];
    local_10 = param_3[(local_28 % param_4) * 2 + 1];
  }
  return bVar3 & 1;
}

