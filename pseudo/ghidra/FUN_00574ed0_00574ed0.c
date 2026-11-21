// FUN_00574ed0  00574ed0

int __thiscall FUN_00574ed0(int param_1,int param_2,int param_3)

{
  int local_8;
  
  local_8 = 0;
  if (1000000000 < param_2) {
    FUN_005e9f20("money.dollars <= 1000000000","..\\Casino\\sultanslot.cpp",0x184);
  }
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0:
    if (param_2 < 50000000) {
      local_8 = param_3 / 5 + param_2 * 0x14;
    }
    else {
      local_8 = 999999999;
    }
    break;
  case 1:
    if (param_2 < 100000000) {
      local_8 = param_3 / 10 + param_2 * 10;
    }
    else {
      local_8 = 999999999;
    }
    break;
  case 2:
    if (param_2 < 250000000) {
      local_8 = param_3 / 0x19 + param_2 * 4;
    }
    else {
      local_8 = 999999999;
    }
    break;
  case 3:
    if (param_2 < 1000000000) {
      local_8 = param_2;
    }
    else {
      local_8 = 999999999;
    }
    break;
  case 4:
    local_8 = param_2 / 5;
    break;
  case 5:
    local_8 = param_2 / 10;
    break;
  case 6:
    local_8 = param_2 / 0x19;
    break;
  case 7:
    local_8 = param_2 / 0x32;
    break;
  case 8:
    local_8 = param_2 / 100;
    break;
  case 9:
    local_8 = param_2 / 0xfa;
    break;
  case 10:
    local_8 = param_2 / 500;
    break;
  case 0xb:
    local_8 = param_2 / 1000;
  }
  if (0x3b9ac9fe < local_8) {
    FUN_005e9f20("numCredits < MAX_SULTAN_CREDITS","..\\Casino\\sultanslot.cpp",0x1c1);
  }
  return local_8;
}

