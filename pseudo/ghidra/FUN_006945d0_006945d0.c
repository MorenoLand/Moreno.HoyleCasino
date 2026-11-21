// FUN_006945d0  006945d0

float10 FUN_006945d0(uint param_1)

{
  double dVar1;
  undefined8 local_8;
  
  local_8 = (double)(param_1 & 0x1fffff);
  if ((int)param_1 < 0) {
    local_8 = -local_8;
  }
  dVar1 = ldexp(local_8,((int)param_1 >> 0x15 & 0x3ffU) - 0x314);
  return (float10)dVar1;
}

