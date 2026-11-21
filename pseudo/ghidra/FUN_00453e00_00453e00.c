// FUN_00453e00  00453e00

undefined2 FUN_00453e00(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_2c = 0xffffffff;
  local_20 = 0xffffffff;
  local_18 = -1;
  local_10 = -1;
  local_8 = -1;
  local_14 = -1;
  local_1c = 0xffffffff;
  local_38 = 0xffffffff;
  local_c = 0xffffffff;
  local_30 = 0xffffffff;
  local_34 = FUN_00450cd0(0,0,0);
  local_24 = FUN_00450cd0(1,&local_c,&local_30);
  if ((local_34 == 0) || (local_24 == 0)) {
    FUN_005e9f20("hiPairRank != 0 && loPairRank != 0","..\\Casino\\paigowai.cpp",0x909);
  }
  FUN_00450c50(1,&local_18,&local_1c);
  FUN_00450c50(2,&local_10,&local_38);
  switch(local_34) {
  case 3:
    local_8 = 0xb;
    local_14 = 10;
    break;
  case 4:
    local_8 = 0xc;
    local_14 = 5;
    break;
  case 5:
    if (local_24 < 4) {
      local_8 = 0xc;
      local_14 = (local_24 != 2) + 9;
    }
    else {
      local_8 = 0xd;
      local_14 = 3;
    }
    break;
  case 6:
    if (local_24 == 2) {
      local_8 = 0xc;
      local_14 = 0xb;
    }
    else {
      local_8 = 0xd;
      local_14 = (local_24 == 3) + 3;
    }
    break;
  case 7:
    local_8 = 0xd;
    if (local_24 < 5) {
      local_14 = (local_24 != 4) + 3;
    }
    else {
      local_14 = (local_24 != 5) + 10;
    }
    break;
  case 8:
    if (local_24 < 6) {
      local_8 = 0xd;
      if (local_24 == 2) {
        local_14 = 4;
      }
      else if (local_24 == 3) {
        local_14 = 5;
      }
      else if (local_24 == 4) {
        local_14 = 0xb;
      }
      else {
        local_14 = 0xc;
      }
    }
    else {
      local_8 = 0xe;
      local_14 = 3;
    }
    break;
  case 9:
    if (local_24 < 5) {
      local_8 = 0xd;
      if (local_24 == 2) {
        local_14 = 10;
      }
      else if (local_24 == 3) {
        local_14 = 0xb;
      }
      else {
        local_14 = 0xc;
      }
    }
    else {
      local_8 = 0xe;
      local_14 = 3;
    }
    break;
  case 10:
    if (local_24 == 2) {
      local_8 = 0xd;
      local_14 = 0xc;
    }
    else {
      local_8 = 0xe;
      if (local_24 < 7) {
        local_14 = (local_24 == 3) + 3;
      }
      else if (local_24 == 7) {
        local_14 = 5;
      }
      else if (local_24 == 8) {
        local_14 = 0xb;
      }
      else {
        local_14 = 0xc;
      }
    }
    break;
  case 0xb:
    if (local_24 == 10) {
      local_8 = 0xf;
    }
    else {
      local_8 = 0xe;
      if (local_24 < 5) {
        local_14 = (local_24 != 4) + 3;
      }
      else if (local_24 == 5) {
        local_14 = 9;
      }
      else if (local_24 == 6) {
        local_14 = 10;
      }
      else if (local_24 == 7) {
        local_14 = 0xc;
      }
      else {
        local_14 = 0xd;
      }
    }
    break;
  case 0xc:
    if (local_24 < 7) {
      local_8 = 0xe;
      if (local_24 == 2) {
        local_14 = 8;
      }
      else if (local_24 == 3) {
        local_14 = 10;
      }
      else if (local_24 == 4) {
        local_14 = 0xb;
      }
      else {
        local_14 = 0xd;
      }
    }
    else {
      local_8 = 0xf;
    }
    break;
  case 0xd:
    if (local_24 == 2) {
      local_8 = 0xe;
      local_14 = 0xc;
    }
    else {
      local_8 = 0xf;
    }
    break;
  case 0xe:
    local_8 = 0xf;
  }
  if ((local_8 < local_18) || ((local_18 == local_8 && (local_14 <= local_10)))) {
    local_28 = 1;
    local_2c = local_1c;
    local_20 = local_38;
  }
  else {
    local_28 = 0;
    local_2c = local_c;
    local_20 = local_30;
  }
  FUN_0044f840(local_2c,local_20,param_1,param_2);
  return local_28;
}

