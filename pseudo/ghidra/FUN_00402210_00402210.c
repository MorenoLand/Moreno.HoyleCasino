// FUN_00402210  00402210

undefined4 FUN_00402210(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_1c [6];
  
  if (param_1 == 0) {
    local_1c[3] = 0x65;
    local_1c[4] = 0x61;
    local_1c[5] = 0x68;
    uVar1 = local_1c[param_2 + 3];
  }
  else if (param_1 == 4) {
    local_1c[0] = 0x65;
    local_1c[1] = 0x61;
    local_1c[2] = 0x68;
    uVar1 = local_1c[param_2];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

