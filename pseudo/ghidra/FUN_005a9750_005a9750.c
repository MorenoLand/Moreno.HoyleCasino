// FUN_005a9750  005a9750

undefined4 __thiscall FUN_005a9750(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_104 [64];
  
  local_104[0] = 0x167;
  local_104[1] = 0x13c;
  local_104[2] = 300;
  local_104[3] = 0x110;
  local_104[4] = 0x17a;
  local_104[5] = 0x110;
  local_104[6] = 0x15e;
  local_104[7] = 0xb8;
  local_104[8] = 300;
  local_104[9] = 0xb8;
  local_104[10] = 0x17a;
  local_104[0xb] = 0xb8;
  local_104[0xc] = 0xe2;
  local_104[0xd] = 0x13f;
  local_104[0xe] = 0x7a;
  local_104[0xf] = 0x110;
  local_104[0x10] = 200;
  local_104[0x11] = 0x110;
  local_104[0x12] = 0xb1;
  local_104[0x13] = 0xb8;
  local_104[0x14] = 0x83;
  local_104[0x15] = 0xb8;
  local_104[0x16] = 0xd1;
  local_104[0x17] = 0xb8;
  local_104[0x18] = 0x1e9;
  local_104[0x19] = 0x109;
  local_104[0x1a] = 0x1c5;
  local_104[0x1b] = 0xcb;
  local_104[0x1c] = 0x214;
  local_104[0x1d] = 0xcb;
  local_104[0x1e] = 499;
  local_104[0x1f] = 0x78;
  local_104[0x20] = 0x1c2;
  local_104[0x21] = 0x78;
  local_104[0x22] = 0x211;
  local_104[0x23] = 0x78;
  local_104[0x24] = 0x5a;
  local_104[0x25] = 0x111;
  local_104[0x26] = 0xffffffee;
  local_104[0x27] = 0xcb;
  local_104[0x28] = 0x3d;
  local_104[0x29] = 0xcb;
  local_104[0x2a] = 0x24;
  local_104[0x2b] = 0x78;
  local_104[0x2c] = 0xffffffee;
  local_104[0x2d] = 0x78;
  local_104[0x2e] = 0x3d;
  local_104[0x2f] = 0x78;
  local_104[0x38] = 0x143;
  local_104[0x39] = 0x131;
  local_104[0x3a] = 0xf3;
  local_104[0x3b] = 0x132;
  local_104[0x3c] = 0x1c7;
  local_104[0x3d] = 0xeb;
  local_104[0x3e] = 0x6e;
  local_104[0x3f] = 0xea;
  local_104[0x30] = 0x186;
  local_104[0x31] = 0x110;
  local_104[0x32] = 0x10f;
  local_104[0x33] = 0x123;
  local_104[0x34] = 0x1f5;
  local_104[0x35] = 0xdd;
  local_104[0x36] = 0x8d;
  local_104[0x37] = 0x10b;
  if (*(int *)(param_1 + 0xcc0) == 0x65) {
    uVar2 = local_104[param_2 * 2 + 0x30];
  }
  else {
    uVar2 = FUN_005cb820(param_2);
    switch(uVar2) {
    case 1:
      uVar2 = local_104[param_2 * 0xc];
      break;
    case 2:
      cVar1 = FUN_005b6660(param_2);
      if ((cVar1 == '\0') || (param_3 != 1)) {
        uVar2 = local_104[param_2 * 0xc + param_3 * 2 + 2];
      }
      else {
        uVar2 = local_104[param_2 * 2 + 0x38];
      }
      break;
    case 3:
      uVar2 = local_104[param_2 * 0xc + param_3 * 2 + 2];
      break;
    case 4:
      if (param_3 < 2) {
        uVar2 = local_104[param_2 * 0xc + param_3 * 2 + 2];
      }
      else {
        uVar2 = local_104[param_2 * 0xc + param_3 * 2 + 4];
      }
      break;
    default:
      FUN_005e9f20("false","..\\Casino\\royalmatchdisplay.cpp",0x31e);
      uVar2 = 0;
    }
  }
  return uVar2;
}

