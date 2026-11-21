// FUN_0040d040  0040d040

undefined4 FUN_0040d040(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_18 [5];
  
  local_18[0] = 0x138a;
  local_18[1] = 0x138b;
  local_18[2] = 0x1389;
  local_18[3] = 0x138c;
  local_18[4] = 0x138f;
  if (((param_1 < 4) && (param_3 == 2)) &&
     (*(char *)(DAT_00790324 + 0x10c + param_1 * 0x118 + param_2) != '\0')) {
    uVar1 = 0x1390;
  }
  else {
    uVar1 = local_18[param_1];
  }
  return uVar1;
}

