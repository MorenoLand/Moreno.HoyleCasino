// FUN_0061d800  0061d800

void FUN_0061d800(byte *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  byte local_10;
  
  if (param_3 == 0xff) {
    if (*param_1 < 0x81) {
      local_20 = (uint)*param_1;
    }
    else {
      local_20 = 0xff - *param_1;
    }
    local_10 = *param_1 + (char)((int)(((param_2 & 0xff) - 0x80) * local_20) >> 7);
    *param_1 = local_10;
    pbVar1 = param_1 + 1;
    if (*pbVar1 < 0x81) {
      local_24 = (uint)*pbVar1;
    }
    else {
      local_24 = 0xff - *pbVar1;
    }
    local_10 = *pbVar1 + (char)((int)((param_2._1_1_ - 0x80) * local_24) >> 7);
    *pbVar1 = local_10;
    param_1 = param_1 + 2;
    if (*param_1 < 0x81) {
      local_28 = (uint)*param_1;
    }
    else {
      local_28 = 0xff - *param_1;
    }
    local_10 = *param_1 + (char)((int)((param_2._2_1_ - 0x80) * local_28) >> 7);
    *param_1 = local_10;
  }
  else {
    if (*param_1 < 0x81) {
      local_14 = (uint)*param_1;
    }
    else {
      local_14 = 0xff - *param_1;
    }
    local_10 = *param_1 +
               (char)((int)(((param_2 & 0xff) - 0x80) * ((int)(local_14 * param_3) >> 8)) >> 7);
    *param_1 = local_10;
    pbVar1 = param_1 + 1;
    if (*pbVar1 < 0x81) {
      local_18 = (uint)*pbVar1;
    }
    else {
      local_18 = 0xff - *pbVar1;
    }
    local_10 = *pbVar1 + (char)((int)((param_2._1_1_ - 0x80) * ((int)(local_18 * param_3) >> 8)) >>
                               7);
    *pbVar1 = local_10;
    param_1 = param_1 + 2;
    if (*param_1 < 0x81) {
      local_1c = (uint)*param_1;
    }
    else {
      local_1c = 0xff - *param_1;
    }
    local_10 = *param_1 +
               (char)((int)((param_2._2_1_ - 0x80) * ((int)(local_1c * param_3) >> 8)) >> 7);
    *param_1 = local_10;
  }
  return;
}

