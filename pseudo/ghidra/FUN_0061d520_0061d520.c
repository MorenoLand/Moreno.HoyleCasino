// FUN_0061d520  0061d520

void FUN_0061d520(byte *param_1,uint param_2,int param_3)

{
  uint local_10;
  
  if (param_3 == 0xff) {
    local_10 = (uint)*param_1 + (param_2 & 0xff);
    if (0xff < local_10) {
      local_10 = 0xff;
    }
    *param_1 = (byte)local_10;
    local_10 = (uint)param_1[1] + (uint)param_2._1_1_;
    if (0xff < local_10) {
      local_10 = 0xff;
    }
    param_1[1] = (byte)local_10;
    local_10 = (uint)param_1[2] + (uint)param_2._2_1_;
    if (0xff < local_10) {
      local_10 = 0xff;
    }
    param_1[2] = (byte)local_10;
  }
  else {
    local_10 = (uint)*param_1 + ((int)((param_2 & 0xff) * param_3) >> 8);
    if (0xff < (int)local_10) {
      local_10 = 0xff;
    }
    *param_1 = (byte)local_10;
    local_10 = (uint)param_1[1] + ((int)((uint)param_2._1_1_ * param_3) >> 8);
    if (0xff < (int)local_10) {
      local_10 = 0xff;
    }
    param_1[1] = (byte)local_10;
    local_10 = (uint)param_1[2] + ((int)((uint)param_2._2_1_ * param_3) >> 8);
    if (0xff < (int)local_10) {
      local_10 = 0xff;
    }
    param_1[2] = (byte)local_10;
  }
  return;
}

