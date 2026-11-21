// FUN_0061d6a0  0061d6a0

void FUN_0061d6a0(byte *param_1,uint param_2,int param_3)

{
  byte local_10;
  
  if (param_3 == 0xff) {
    local_10 = (byte)((param_2 & 0xff) * (uint)*param_1 >> 8);
    *param_1 = local_10;
    local_10 = (byte)((uint)param_2._1_1_ * (uint)param_1[1] >> 8);
    param_1[1] = local_10;
    local_10 = (byte)((uint)param_2._2_1_ * (uint)param_1[2] >> 8);
    param_1[2] = local_10;
  }
  else {
    local_10 = (byte)((uint)*param_1 * (0xff - ((int)((0xff - (param_2 & 0xff)) * param_3) >> 8)) >>
                     8);
    *param_1 = local_10;
    local_10 = (byte)((uint)param_1[1] *
                      (0xff - ((int)((0xff - (uint)param_2._1_1_) * param_3) >> 8)) >> 8);
    param_1[1] = local_10;
    local_10 = (byte)((uint)param_1[2] *
                      (0xff - ((int)((0xff - (uint)param_2._2_1_) * param_3) >> 8)) >> 8);
    param_1[2] = local_10;
  }
  return;
}

