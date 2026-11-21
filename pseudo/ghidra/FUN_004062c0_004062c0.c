// FUN_004062c0  004062c0

undefined4 * __thiscall FUN_004062c0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_2c [10];
  
  local_2c[0] = 0x132;
  local_2c[1] = 0xd2;
  local_2c[2] = 0xb0;
  local_2c[3] = 0xcf;
  local_2c[4] = 0x1ca;
  local_2c[5] = 0x82;
  local_2c[6] = 0x14;
  local_2c[7] = 0x86;
  local_2c[8] = 0;
  local_2c[9] = 0;
  if (param_3 < 4) {
    uVar1 = local_2c[param_3 * 2 + 1];
    *param_2 = local_2c[param_3 * 2];
    param_2[1] = uVar1;
  }
  else {
    FUN_005e9f20("false","..\\Casino\\baccaratroom.cpp",0x1a4,param_1);
    *param_2 = local_2c[8];
    param_2[1] = local_2c[9];
  }
  return param_2;
}

