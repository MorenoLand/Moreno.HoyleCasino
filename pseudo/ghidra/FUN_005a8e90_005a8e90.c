// FUN_005a8e90  005a8e90

void FUN_005a8e90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c [10];
  
  local_2c[0] = 0x20;
  local_2c[1] = 0x22;
  local_2c[2] = 0x20;
  local_2c[3] = 0x40;
  local_2c[4] = 0x20;
  local_2c[5] = 0x5e;
  local_2c[6] = 0x20;
  local_2c[7] = 0x7c;
  local_2c[8] = 5;
  local_2c[9] = 0x9a;
  iVar1 = FUN_005fb2b0(0);
  if (iVar1 == 0) {
    FUN_005f9ce0(0,0,(param_1 == 4) + 0x1398,local_2c[param_1 * 2],local_2c[param_1 * 2 + 1],3,0,
                 0xff,0);
    uVar2 = 100;
    FUN_005fb2b0(0);
    FUN_005eb5d0(uVar2);
  }
  return;
}

