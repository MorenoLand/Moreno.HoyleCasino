// FUN_0061da70  0061da70

void FUN_0061da70(byte *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  byte local_10;
  
  if (param_3 == 0xff) {
    local_10 = *param_1 + (char)((param_2 & 0xff) * (0xff - (uint)*param_1) >> 8);
    *param_1 = local_10;
    pbVar1 = param_1 + 1;
    local_10 = *pbVar1 + (char)((uint)param_2._1_1_ * (0xff - (uint)*pbVar1) >> 8);
    *pbVar1 = local_10;
    param_1 = param_1 + 2;
    local_10 = *param_1 + (char)((uint)param_2._2_1_ * (0xff - (uint)*param_1) >> 8);
    *param_1 = local_10;
  }
  else {
    local_10 = *param_1 +
               (char)(((int)((param_2 & 0xff) * param_3) >> 8) * (0xff - (uint)*param_1) >> 8);
    *param_1 = local_10;
    pbVar1 = param_1 + 1;
    local_10 = *pbVar1 + (char)(((int)((uint)param_2._1_1_ * param_3) >> 8) * (0xff - (uint)*pbVar1)
                               >> 8);
    *pbVar1 = local_10;
    param_1 = param_1 + 2;
    local_10 = *param_1 +
               (char)(((int)((uint)param_2._2_1_ * param_3) >> 8) * (0xff - (uint)*param_1) >> 8);
    *param_1 = local_10;
  }
  return;
}

