// FUN_0040f790  0040f790

undefined4 FUN_0040f790(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_e8 [48];
  undefined4 local_28;
  undefined4 local_24 [8];
  
  local_e8[0] = 0x131;
  local_e8[1] = 300;
  local_e8[2] = 0x110;
  local_e8[3] = 0x17a;
  local_e8[4] = 0x110;
  local_e8[5] = 0x15e;
  local_e8[6] = 0xb8;
  local_e8[7] = 300;
  local_e8[8] = 0xb8;
  local_e8[9] = 0x17a;
  local_e8[10] = 0xb8;
  local_e8[0xb] = 0xcb;
  local_e8[0xc] = 0x132;
  local_e8[0xd] = 0x7a;
  local_e8[0xe] = 0x110;
  local_e8[0xf] = 200;
  local_e8[0x10] = 0x110;
  local_e8[0x11] = 0xb1;
  local_e8[0x12] = 0xb8;
  local_e8[0x13] = 0x83;
  local_e8[0x14] = 0xb8;
  local_e8[0x15] = 0xd1;
  local_e8[0x16] = 0xb8;
  local_e8[0x17] = 0x1ef;
  local_e8[0x18] = 0xeb;
  local_e8[0x19] = 0x1c5;
  local_e8[0x1a] = 0xcb;
  local_e8[0x1b] = 0x214;
  local_e8[0x1c] = 0xcb;
  local_e8[0x1d] = 499;
  local_e8[0x1e] = 0x78;
  local_e8[0x1f] = 0x1c2;
  local_e8[0x20] = 0x78;
  local_e8[0x21] = 0x211;
  local_e8[0x22] = 0x78;
  local_e8[0x23] = 0x46;
  local_e8[0x24] = 0xea;
  local_e8[0x25] = 0xffffffee;
  local_e8[0x26] = 0xcb;
  local_e8[0x27] = 0x3d;
  local_e8[0x28] = 0xcb;
  local_e8[0x29] = 0x24;
  local_e8[0x2a] = 0x78;
  local_e8[0x2b] = 0xffffffee;
  local_e8[0x2c] = 0x78;
  local_e8[0x2d] = 0x3d;
  local_e8[0x2e] = 0x78;
  local_28 = 0x143;
  local_24[0] = 0x131;
  local_24[1] = 0xf3;
  local_24[2] = 0x132;
  local_24[3] = 0x1c7;
  local_24[4] = 0xeb;
  local_24[5] = 0x6e;
  local_24[6] = 0xea;
  local_24[7] = FUN_005cb820(param_1);
  switch(local_24[7]) {
  case 1:
    uVar1 = local_e8[param_1 * 0xc];
    break;
  case 2:
    if ((*(char *)(DAT_00790324 + 0x11b + param_1 * 0x118) == '\0') || (param_2 != 1)) {
      uVar1 = local_e8[param_1 * 0xc + param_2 * 2 + 2];
    }
    else {
      uVar1 = local_24[param_1 * 2];
    }
    break;
  case 3:
    uVar1 = local_e8[param_1 * 0xc + param_2 * 2 + 2];
    break;
  case 4:
    if (param_2 < 2) {
      uVar1 = local_e8[param_1 * 0xc + param_2 * 2 + 2];
    }
    else {
      uVar1 = local_e8[param_1 * 0xc + param_2 * 2 + 4];
    }
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}

