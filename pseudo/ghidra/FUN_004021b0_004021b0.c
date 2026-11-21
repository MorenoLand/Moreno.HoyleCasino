// FUN_004021b0  004021b0

undefined4 FUN_004021b0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_1c [6];
  
  if (param_1 == 0) {
    local_1c[3] = 0xdc;
    local_1c[4] = 0xf0;
    local_1c[5] = 0xf2;
    uVar1 = local_1c[param_2 + 3];
  }
  else if (param_1 == 4) {
    local_1c[0] = 0x147;
    local_1c[1] = 0x15b;
    local_1c[2] = 0x15d;
    uVar1 = local_1c[param_2];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

