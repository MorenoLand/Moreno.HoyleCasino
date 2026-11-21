// FUN_0053f9e0  0053f9e0

undefined4 * __thiscall FUN_0053f9e0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_2c [10];
  
  local_2c[0] = 0x132;
  local_2c[1] = 0xf6;
  local_2c[2] = 0x96;
  local_2c[3] = 0xf6;
  local_2c[4] = 0x1ca;
  local_2c[5] = 0x4c;
  local_2c[6] = 5;
  local_2c[7] = 0x4a;
  local_2c[8] = 0;
  local_2c[9] = 0;
  if (param_3 < 4) {
    uVar1 = local_2c[param_3 * 2 + 1];
    *param_2 = local_2c[param_3 * 2];
    param_2[1] = uVar1;
  }
  else {
    FUN_005e9f20("false","..\\Casino\\threecardpokerroom.cpp",0x177,param_1);
    *param_2 = local_2c[8];
    param_2[1] = local_2c[9];
  }
  return param_2;
}

