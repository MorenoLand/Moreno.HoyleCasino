// FUN_0040f4a0  0040f4a0

undefined4 FUN_0040f4a0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_ec [49];
  undefined4 local_28 [9];
  
  local_ec[0] = 0x16b;
  local_ec[1] = 0x131;
  local_ec[2] = 300;
  local_ec[3] = 0x110;
  local_ec[4] = 0x17a;
  local_ec[5] = 0x110;
  local_ec[6] = 0x15e;
  local_ec[7] = 0xb8;
  local_ec[8] = 300;
  local_ec[9] = 0xb8;
  local_ec[10] = 0x17a;
  local_ec[0xb] = 0xb8;
  local_ec[0xc] = 0xcb;
  local_ec[0xd] = 0x132;
  local_ec[0xe] = 0x7a;
  local_ec[0xf] = 0x110;
  local_ec[0x10] = 200;
  local_ec[0x11] = 0x110;
  local_ec[0x12] = 0xb1;
  local_ec[0x13] = 0xb8;
  local_ec[0x14] = 0x83;
  local_ec[0x15] = 0xb8;
  local_ec[0x16] = 0xd1;
  local_ec[0x17] = 0xb8;
  local_ec[0x18] = 0x1ef;
  local_ec[0x19] = 0xeb;
  local_ec[0x1a] = 0x1c5;
  local_ec[0x1b] = 0xcb;
  local_ec[0x1c] = 0x214;
  local_ec[0x1d] = 0xcb;
  local_ec[0x1e] = 499;
  local_ec[0x1f] = 0x78;
  local_ec[0x20] = 0x1c2;
  local_ec[0x21] = 0x78;
  local_ec[0x22] = 0x211;
  local_ec[0x23] = 0x78;
  local_ec[0x24] = 0x46;
  local_ec[0x25] = 0xea;
  local_ec[0x26] = 0xffffffee;
  local_ec[0x27] = 0xcb;
  local_ec[0x28] = 0x3d;
  local_ec[0x29] = 0xcb;
  local_ec[0x2a] = 0x24;
  local_ec[0x2b] = 0x78;
  local_ec[0x2c] = 0xffffffee;
  local_ec[0x2d] = 0x78;
  local_ec[0x2e] = 0x3d;
  local_ec[0x2f] = 0x78;
  local_28[0] = 0x143;
  local_28[1] = 0x131;
  local_28[2] = 0xf3;
  local_28[3] = 0x132;
  local_28[4] = 0x1c7;
  local_28[5] = 0xeb;
  local_28[6] = 0x6e;
  local_28[7] = 0xea;
  local_28[8] = FUN_005cb820(param_1);
  switch(local_28[8]) {
  case 1:
    uVar1 = local_ec[param_1 * 0xc];
    break;
  case 2:
    if ((*(char *)(DAT_00790324 + 0x11b + param_1 * 0x118) == '\0') || (param_2 != 1)) {
      uVar1 = local_ec[param_1 * 0xc + param_2 * 2 + 2];
    }
    else {
      uVar1 = local_28[param_1 * 2];
    }
    break;
  case 3:
    uVar1 = local_ec[param_1 * 0xc + param_2 * 2 + 2];
    break;
  case 4:
    if (param_2 < 2) {
      uVar1 = local_ec[param_1 * 0xc + param_2 * 2 + 2];
    }
    else {
      uVar1 = local_ec[param_1 * 0xc + param_2 * 2 + 4];
    }
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}

