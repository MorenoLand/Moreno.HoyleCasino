// FUN_00447a70  00447a70

int FUN_00447a70(int param_1,int param_2)

{
  int iVar1;
  int local_28 [5];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_28[0] = 0x154;
  local_28[1] = 0xe2;
  local_28[2] = 0x1b5;
  local_28[3] = 0x75;
  local_14 = 0x148;
  local_10 = 0x9d;
  local_c = 0x1de;
  local_8 = 6;
  if (param_1 == -1) {
    iVar1 = (-(uint)(param_2 != 0) & 0x11) + 0x114;
  }
  else {
    iVar1 = local_28[param_1] + -4 + param_2 * 0x11;
  }
  return iVar1;
}

