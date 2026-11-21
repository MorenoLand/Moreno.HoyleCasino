// FUN_005a9b10  005a9b10

undefined4 __thiscall FUN_005a9b10(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_100 [63];
  
  uVar3 = 0x167;
  local_100[0] = 0x13c;
  local_100[1] = 300;
  local_100[2] = 0x110;
  local_100[3] = 0x17a;
  local_100[4] = 0x110;
  local_100[5] = 0x15e;
  local_100[6] = 0xb8;
  local_100[7] = 300;
  local_100[8] = 0xb8;
  local_100[9] = 0x17a;
  local_100[10] = 0xb8;
  local_100[0xb] = 0xe2;
  local_100[0xc] = 0x13f;
  local_100[0xd] = 0x7a;
  local_100[0xe] = 0x110;
  local_100[0xf] = 200;
  local_100[0x10] = 0x110;
  local_100[0x11] = 0xb1;
  local_100[0x12] = 0xb8;
  local_100[0x13] = 0x83;
  local_100[0x14] = 0xb8;
  local_100[0x15] = 0xd1;
  local_100[0x16] = 0xb8;
  local_100[0x17] = 0x1e9;
  local_100[0x18] = 0x109;
  local_100[0x19] = 0x1c5;
  local_100[0x1a] = 0xcb;
  local_100[0x1b] = 0x214;
  local_100[0x1c] = 0xcb;
  local_100[0x1d] = 499;
  local_100[0x1e] = 0x78;
  local_100[0x1f] = 0x1c2;
  local_100[0x20] = 0x78;
  local_100[0x21] = 0x211;
  local_100[0x22] = 0x78;
  local_100[0x23] = 0x5a;
  local_100[0x24] = 0x111;
  local_100[0x25] = 0xffffffee;
  local_100[0x26] = 0xcb;
  local_100[0x27] = 0x3d;
  local_100[0x28] = 0xcb;
  local_100[0x29] = 0x24;
  local_100[0x2a] = 0x78;
  local_100[0x2b] = 0xffffffee;
  local_100[0x2c] = 0x78;
  local_100[0x2d] = 0x3d;
  local_100[0x2e] = 0x78;
  local_100[0x37] = 0x143;
  local_100[0x38] = 0x131;
  local_100[0x39] = 0xf3;
  local_100[0x3a] = 0x132;
  local_100[0x3b] = 0x1c7;
  local_100[0x3c] = 0xeb;
  local_100[0x3d] = 0x6e;
  local_100[0x3e] = 0xea;
  local_100[0x2f] = 0x186;
  local_100[0x30] = 0x110;
  local_100[0x31] = 0x10f;
  local_100[0x32] = 0x123;
  local_100[0x33] = 0x1f5;
  local_100[0x34] = 0xdd;
  local_100[0x35] = 0x8d;
  local_100[0x36] = 0x10b;
  if (*(int *)(param_1 + 0xcc0) == 0x65) {
    uVar3 = local_100[param_2 * 2 + 0x30];
  }
  else {
    iVar2 = FUN_005cb820(param_2);
    switch(iVar2 + -1) {
    case 0:
      uVar3 = local_100[param_2 * 0xc];
      break;
    case 1:
      cVar1 = FUN_005b6660(param_2);
      if ((cVar1 == '\0') || (param_3 != 1)) {
        uVar3 = local_100[param_2 * 0xc + param_3 * 2 + 2];
      }
      else {
        uVar3 = local_100[param_2 * 2 + 0x38];
      }
      break;
    case 2:
      uVar3 = local_100[param_2 * 0xc + param_3 * 2 + 2];
      break;
    case 3:
      if (param_3 < 2) {
        uVar3 = local_100[param_2 * 0xc + param_3 * 2 + 2];
      }
      else {
        uVar3 = local_100[param_2 * 0xc + param_3 * 2 + 4];
      }
      break;
    default:
      FUN_005e9f20("false","..\\Casino\\royalmatchdisplay.cpp",0x35f,iVar2 + -1,param_1,uVar3);
      uVar3 = 0;
    }
  }
  return uVar3;
}

