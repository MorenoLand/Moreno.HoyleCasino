// FUN_005698c0  005698c0

int __thiscall FUN_005698c0(int param_1,int param_2)

{
  int local_1c8;
  int local_1bc [68];
  int local_ac [42];
  
  local_1bc[9] = 0xfa;
  local_1bc[10] = 0x32;
  local_1bc[0xb] = 0x19;
  local_1bc[0xc] = 9;
  local_1bc[0xd] = 6;
  local_1bc[0xe] = 4;
  local_1bc[0xf] = 3;
  local_1bc[0x10] = 2;
  local_1bc[0x11] = 1;
  local_1bc[0x30] = 0xfa;
  local_1bc[0x31] = 0x32;
  local_1bc[0x32] = 0x19;
  local_1bc[0x33] = 6;
  local_1bc[0x34] = 5;
  local_1bc[0x35] = 4;
  local_1bc[0x36] = 3;
  local_1bc[0x37] = 2;
  local_1bc[0x38] = 1;
  local_ac[0x1f] = 0x177;
  local_ac[0x20] = 0x4b;
  local_ac[0x21] = 0x50;
  local_ac[0x22] = 0x28;
  local_ac[0x23] = 0x19;
  local_ac[0x24] = 8;
  local_ac[0x25] = 6;
  local_ac[0x26] = 4;
  local_ac[0x27] = 2;
  local_ac[0x28] = 2;
  local_ac[0x29] = 1;
  local_1bc[0x12] = 0xfa;
  local_1bc[0x13] = 0x32;
  local_1bc[0x14] = 0x19;
  local_1bc[0x15] = 6;
  local_1bc[0x16] = 5;
  local_1bc[0x17] = 4;
  local_1bc[0x18] = 3;
  local_1bc[0x19] = 2;
  local_1bc[0x1a] = 1;
  local_1bc[0] = 0xfa;
  local_1bc[1] = 0x32;
  local_1bc[2] = 0x19;
  local_1bc[3] = 9;
  local_1bc[4] = 6;
  local_1bc[5] = 4;
  local_1bc[6] = 3;
  local_1bc[7] = 1;
  local_1bc[8] = 1;
  local_1bc[0x39] = 500;
  local_1bc[0x3a] = 100;
  local_1bc[0x3b] = 0x19;
  local_1bc[0x3c] = 0x10;
  local_1bc[0x3d] = 0xd;
  local_1bc[0x3e] = 4;
  local_1bc[0x3f] = 3;
  local_1bc[0x40] = 2;
  local_1bc[0x41] = 2;
  local_1bc[0x42] = 1;
  local_ac[0] = 0x177;
  local_ac[1] = 0x4b;
  local_ac[2] = 0x19;
  local_ac[3] = 0xf;
  local_ac[4] = 0xb;
  local_ac[5] = 4;
  local_ac[6] = 3;
  local_ac[7] = 2;
  local_ac[8] = 2;
  local_ac[9] = 1;
  local_ac[10] = 500;
  local_ac[0xb] = 100;
  local_ac[0xc] = 0x14;
  local_ac[0xd] = 10;
  local_ac[0xe] = 8;
  local_ac[0xf] = 4;
  local_ac[0x10] = 4;
  local_ac[0x11] = 2;
  local_ac[0x12] = 2;
  local_ac[0x13] = 1;
  local_ac[0x14] = 1000;
  local_ac[0x15] = 200;
  local_ac[0x16] = 100;
  local_ac[0x17] = 0x32;
  local_ac[0x18] = 0x11;
  local_ac[0x19] = 7;
  local_ac[0x1a] = 5;
  local_ac[0x1b] = 3;
  local_ac[0x1c] = 2;
  local_ac[0x1d] = 1;
  local_ac[0x1e] = 1;
  local_1bc[0x1b] = 500;
  local_1bc[0x1c] = 100;
  local_1bc[0x1d] = 0x32;
  local_1bc[0x1e] = 0x32;
  local_1bc[0x1f] = 0x14;
  local_1bc[0x20] = 8;
  local_1bc[0x21] = 5;
  local_1bc[0x22] = 4;
  local_1bc[0x23] = 2;
  local_1bc[0x24] = 1;
  local_1bc[0x25] = 4000;
  local_1bc[0x26] = 800;
  local_1bc[0x27] = 0x19;
  local_1bc[0x28] = 0xc;
  local_1bc[0x29] = 9;
  local_1bc[0x2a] = 6;
  local_1bc[0x2b] = 3;
  local_1bc[0x2c] = 3;
  local_1bc[0x2d] = 3;
  local_1bc[0x2e] = 2;
  local_1bc[0x2f] = 1;
  if (*(char *)(param_1 + 0x2e) == '\0') {
    local_1c8 = *(int *)(param_1 + 8);
  }
  else {
    local_1c8 = 1;
  }
  local_1bc[0x43] = local_1c8;
  if (param_2 < 0) {
    local_1c8 = 0;
  }
  else {
    switch(*(undefined4 *)(DAT_007947e0 + 0x4f14)) {
    case 0:
      if ((local_1c8 == 5) && (param_2 == 0)) {
        local_1c8 = 5000;
      }
      else {
        local_1c8 = local_1bc[param_2 + 9] * local_1c8;
      }
      break;
    case 1:
      if ((local_1c8 == 5) && (param_2 == 0)) {
        local_1c8 = 5000;
      }
      else {
        local_1c8 = local_1bc[param_2 + 0x30] * local_1c8;
      }
      break;
    case 2:
      if ((local_1c8 == 5) && (param_2 == 0)) {
        local_1c8 = 0x9c4;
      }
      else {
        local_1c8 = local_ac[param_2 + 0x1f] * local_1c8;
      }
      break;
    case 3:
      if ((local_1c8 == 5) && (param_2 == 0)) {
        local_1c8 = 4000;
      }
      else {
        local_1c8 = local_1bc[param_2 + 0x12] * local_1c8;
      }
      break;
    case 4:
      if ((local_1c8 == 5) && (param_2 == 0)) {
        local_1c8 = 4000;
      }
      else {
        local_1c8 = local_1bc[param_2] * local_1c8;
      }
      break;
    case 5:
      if ((local_1c8 == 5) && (param_2 == 0)) {
        local_1c8 = 4000;
      }
      else {
        local_1c8 = local_1bc[param_2 + 0x39] * local_1c8;
      }
      break;
    case 6:
      if ((local_1c8 == 5) && (param_2 == 0)) {
        local_1c8 = 4000;
      }
      else {
        local_1c8 = local_ac[param_2] * local_1c8;
      }
      break;
    case 7:
      if ((local_1c8 == 5) && (param_2 == 0)) {
        local_1c8 = 4000;
      }
      else {
        local_1c8 = local_ac[param_2 + 10] * local_1c8;
      }
      break;
    case 8:
      local_1c8 = local_ac[param_2 + 0x14] * local_1c8;
      break;
    case 9:
      local_1c8 = local_1bc[param_2 + 0x1b] * local_1c8;
      break;
    case 10:
      local_1c8 = local_1bc[param_2 + 0x25] * local_1c8;
      break;
    default:
      local_1c8 = 0;
    }
  }
  return local_1c8;
}

