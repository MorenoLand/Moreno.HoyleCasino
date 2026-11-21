// FUN_00520ef0  00520ef0

void FUN_00520ef0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_48;
  int local_44 [5];
  short local_30 [4];
  int local_28;
  char local_24 [16];
  uint local_14;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_c = 0;
  local_8 = FUN_00528000();
  local_24[0] = '\x02';
  local_24[1] = 0;
  local_24[2] = 4;
  local_24[3] = 0;
  local_24[4] = 0xc;
  local_24[5] = 0;
  local_24[6] = 0xe;
  local_24[7] = 0;
  local_24[8] = 0x16;
  local_24[9] = 0;
  local_24[10] = 0x18;
  local_24[0xb] = 0;
  local_24[0xc] = 0x20;
  local_24[0xd] = 0;
  local_24[0xe] = 0x24;
  local_24[0xf] = 0;
  local_30[0] = 0x98;
  local_30[1] = 0x99;
  local_30[2] = 0x9a;
  local_30[3] = 0x9b;
  local_44[0] = 2;
  local_44[1] = 0;
  local_44[2] = 1;
  local_44[3] = 3;
  local_c = FUN_00521660(0);
  for (local_10 = 0; (int)local_10 < 5; local_10 = local_10 + 1) {
    *(undefined1 *)(DAT_00793374 + 0xc98 + param_1 * 0x28 + local_10 * 8) = 0;
  }
  iVar1 = FUN_0062fbf0(100);
  if (iVar1 < 10) {
    local_10 = FUN_0062fbf0(4);
    FUN_00521a30((int)local_30[local_10],0);
    *(undefined1 *)(DAT_00793374 + 0xc98 + param_1 * 0x28 + local_44[local_10] * 8) = 1;
  }
  else {
    switch(*(undefined4 *)(local_8 + 8)) {
    case 0x13:
      local_28 = FUN_0062fbf0(100);
      if (local_28 < 0x19) {
        local_48 = 0x98;
        *(undefined1 *)(DAT_00793374 + 0xca8 + param_1 * 0x28) = 1;
      }
      else if (local_28 < 0x32) {
        local_48 = 0x99;
        *(undefined1 *)(DAT_00793374 + 0xc98 + param_1 * 0x28) = 1;
      }
      else {
        local_48 = 0x94;
      }
      FUN_00521a30(local_48,0);
      break;
    case 0x14:
      FUN_0062fbf0(2);
      *(undefined1 *)(DAT_00793374 + 0xcb8 + param_1 * 0x28) = 1;
      *(undefined1 *)(DAT_00793374 + 0xca8 + param_1 * 0x28) = 1;
      FUN_00521a30(0x98,0);
      local_44[4] = 0;
      while (local_44[4] < 4) {
        local_10 = FUN_0062fbf0(8);
        if (local_24[local_10 + 1] == '\0') {
          FUN_00521a30((int)local_24[local_10],local_c);
          local_24[local_10 + 1] = '\x01';
          local_44[4] = local_44[4] + 1;
        }
      }
      break;
    case 0x15:
      *(undefined1 *)(DAT_00793374 + 0xcb8 + param_1 * 0x28) = 1;
      iVar1 = FUN_0062fbf0(100);
      if (iVar1 < 10) {
        FUN_00521a30(0,local_c);
        FUN_00521a30(0x25,local_c);
      }
      iVar1 = FUN_0062fbf0(1);
      if (iVar1 == 0) {
        FUN_00521a30(0x9c,0);
        for (local_44[4] = 0; local_44[4] < 2; local_44[4] = local_44[4] + 1) {
          iVar1 = FUN_0062fbf0(0x12);
          local_10 = iVar1 + 0x13;
          FUN_00521a30(local_10,local_c);
        }
      }
      else {
        FUN_00521a30(0x97,0);
        for (local_44[4] = 0; local_44[4] < 2; local_44[4] = local_44[4] + 1) {
          iVar1 = FUN_0062fbf0(0x12);
          local_10 = iVar1 + 1;
          FUN_00521a30(local_10,local_c);
        }
      }
      break;
    case 0x16:
      *(undefined1 *)(DAT_00793374 + 0xcb8 + param_1 * 0x28) = 1;
      FUN_00521a30(0,local_c);
      FUN_00521a30(0x25,local_c);
      for (local_10 = 0; (int)local_10 < 4; local_10 = local_10 + 1) {
        uVar3 = 0;
        iVar1 = FUN_0062fbf0(0xb,0);
        FUN_00521a30(iVar1 + 99,uVar3);
      }
      break;
    case 0x17:
      FUN_0062fbf0(2);
      *(undefined1 *)(DAT_00793374 + 0xcb8 + param_1 * 0x28) = 1;
      *(undefined1 *)(DAT_00793374 + 0xcb0 + param_1 * 0x28) = 1;
      FUN_00521a30(0x9b,0);
      local_44[4] = 0;
      while (local_44[4] < 4) {
        iVar1 = FUN_0062fbf0(0x24);
        local_10 = iVar1 + 1;
        uVar4 = local_10 & 0x80000001;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
        }
        if (uVar4 != 0) {
          FUN_00521a30(local_10,local_c);
          local_44[4] = local_44[4] + 1;
        }
      }
      break;
    case 0x18:
      FUN_0062fbf0(2);
      *(undefined1 *)(DAT_00793374 + 0xcb8 + param_1 * 0x28) = 1;
      *(undefined1 *)(DAT_00793374 + 0xca8 + param_1 * 0x28) = 1;
      FUN_00521a30(0x98,0);
      FUN_00521a30(6,local_c);
      FUN_00521a30(0x10,local_c);
      FUN_00521a30(0x1a,local_c);
      FUN_00521a30(0x24,local_c);
      break;
    case 0x19:
      *(undefined1 *)(DAT_00793374 + 0xcb8 + param_1 * 0x28) = 1;
      local_10 = FUN_0062fbf0(3);
      FUN_00521a30(local_10 + 0x94,0);
      for (local_44[4] = 0; local_44[4] < 4; local_44[4] = local_44[4] + 1) {
        iVar1 = FUN_0062fbf0(0xc);
        iVar2 = FUN_0062fbf0(0xc);
        FUN_00521a30(iVar1 + iVar2 * 3,local_c);
      }
      break;
    case 0x1a:
      FUN_0062fbf0(2);
      *(undefined1 *)(DAT_00793374 + 0xcb8 + param_1 * 0x28) = 1;
      *(undefined1 *)(DAT_00793374 + 0xca8 + param_1 * 0x28) = 1;
      FUN_00521a30(0x98,0);
      local_44[4] = 0;
      while (local_44[4] < 4) {
        iVar1 = FUN_0062fbf0(0x24);
        local_10 = iVar1 + 1;
        uVar4 = local_10 & 0x80000001;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
        }
        if (uVar4 == 0) {
          FUN_00521a30(local_10,local_c);
          local_44[4] = local_44[4] + 1;
        }
      }
      break;
    case 0x1b:
      *(undefined1 *)(DAT_00793374 + 0xca0 + param_1 * 0x28) = 1;
      *(undefined1 *)(DAT_00793374 + 0xcb8 + param_1 * 0x28) = 1;
      FUN_00521a30(0x9a,0);
      FUN_00521a30(0,local_c);
      FUN_00521a30(0x25,local_c);
      local_10 = FUN_0062fbf0(3);
      FUN_00521a30(local_10 + 0x94,0);
      break;
    case 0x1c:
      *(undefined1 *)(DAT_00793374 + 0xc98 + param_1 * 0x28) = 1;
      *(undefined1 *)(DAT_00793374 + 0xcb8 + param_1 * 0x28) = 1;
      FUN_00521a30(0x99,0);
      iVar1 = FUN_0062fbf0(0x15);
      local_10 = iVar1 + 0x6f;
      FUN_00521a30(local_10,0);
      break;
    default:
      uVar3 = FUN_00521a10();
      FUN_00521a30(uVar3,0);
    }
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

