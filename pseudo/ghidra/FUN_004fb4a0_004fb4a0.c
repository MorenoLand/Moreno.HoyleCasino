// FUN_004fb4a0  004fb4a0

undefined4 * __thiscall FUN_004fb4a0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_4c [18];
  
  local_4c[0] = 0xf0;
  local_4c[1] = 0xd2;
  local_4c[2] = 0x73;
  local_4c[3] = 0x14;
  local_4c[4] = 0x13b;
  local_4c[5] = 0x14;
  local_4c[6] = 0x168;
  local_4c[7] = 0x14;
  local_4c[8] = 0x168;
  local_4c[9] = 0xaa;
  local_4c[10] = 0x168;
  local_4c[0xb] = 0x136;
  local_4c[0xc] = 0x73;
  local_4c[0xd] = 0x136;
  local_4c[0xe] = 0x73;
  local_4c[0xf] = 0xaa;
  local_4c[0x10] = 0;
  local_4c[0x11] = 0;
  if (param_3 < 8) {
    uVar1 = local_4c[param_3 * 2 + 1];
    *param_2 = local_4c[param_3 * 2];
    param_2[1] = uVar1;
  }
  else {
    FUN_005e9f20("false","..\\Casino\\PokerRoom.cpp",0x261,param_1);
    *param_2 = local_4c[0x10];
    param_2[1] = local_4c[0x11];
  }
  return param_2;
}

