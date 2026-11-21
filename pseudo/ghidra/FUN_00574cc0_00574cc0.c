// FUN_00574cc0  00574cc0

uint * __thiscall FUN_00574cc0(int param_1,uint *param_2,uint param_3)

{
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  if (999999999 < (int)param_3) {
    FUN_005e9f20("numCredits <= MAX_SULTAN_CREDITS","..\\Casino\\sultanslot.cpp",0x137);
  }
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0:
    local_c = (int)param_3 / 0x14;
    local_8 = ((int)param_3 % 0x14) * 5;
    break;
  case 1:
    local_c = (int)param_3 / 10;
    local_8 = ((int)param_3 % 10) * 10;
    break;
  case 2:
    local_c = (int)(param_3 + ((int)param_3 >> 0x1f & 3U)) >> 2;
    param_3 = param_3 & 0x80000003;
    if ((int)param_3 < 0) {
      param_3 = (param_3 - 1 | 0xfffffffc) + 1;
    }
    local_8 = param_3 * 0x19;
    break;
  case 3:
    local_c = param_3;
    break;
  case 4:
    if ((int)param_3 < 200000000) {
      local_c = param_3 * 5;
    }
    else {
      local_c = 1000000000;
    }
    break;
  case 5:
    if ((int)param_3 < 100000000) {
      local_c = param_3 * 10;
    }
    else {
      local_c = 1000000000;
    }
    break;
  case 6:
    if ((int)param_3 < 40000000) {
      local_c = param_3 * 0x19;
    }
    else {
      local_c = 1000000000;
    }
    break;
  case 7:
    if ((int)param_3 < 20000000) {
      local_c = param_3 * 0x32;
    }
    else {
      local_c = 1000000000;
    }
    break;
  case 8:
    if ((int)param_3 < 10000000) {
      local_c = param_3 * 100;
    }
    else {
      local_c = 1000000000;
    }
    break;
  case 9:
    if ((int)param_3 < 10000000) {
      local_c = param_3 * 0xfa;
    }
    else {
      local_c = 1000000000;
    }
    break;
  case 10:
    if ((int)param_3 < 2000000) {
      local_c = param_3 * 500;
    }
    else {
      local_c = 1000000000;
    }
    break;
  case 0xb:
    if ((int)param_3 < 1000000) {
      local_c = param_3 * 1000;
    }
    else {
      local_c = 1000000000;
    }
  }
  *param_2 = local_c;
  param_2[1] = local_8;
  return param_2;
}

