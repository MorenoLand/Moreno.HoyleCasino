// FUN_00485000  00485000

void __fastcall FUN_00485000(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  short local_24;
  char acStack_20 [16];
  uint local_10;
  short local_c;
  short local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_24 = 0;
  local_c = 0;
  if (*(short *)(param_1 + 4) != 0) {
    for (local_8 = 1; local_8 < 0xf; local_8 = local_8 + 1) {
      acStack_20[local_8] = '\0';
    }
    for (local_8 = 0; local_8 < *(short *)(param_1 + 4); local_8 = local_8 + 1) {
      uVar2 = DAT_007907a4;
      FUN_00464480(&local_25);
      cVar1 = FUN_00464050(uVar2);
      if (cVar1 != '\0') {
        acStack_20[0xe] = 1;
        acStack_20[1] = 1;
      }
      uVar2 = DAT_00790758;
      FUN_00464480(&local_26);
      cVar1 = FUN_00464050(uVar2);
      if (cVar1 != '\0') {
        acStack_20[2] = 1;
      }
      uVar2 = DAT_00790768;
      FUN_00464480(&local_27);
      cVar1 = FUN_00464050(uVar2);
      if (cVar1 != '\0') {
        acStack_20[3] = 1;
      }
      uVar2 = DAT_00790790;
      FUN_00464480(&local_28);
      cVar1 = FUN_00464050(uVar2);
      if (cVar1 != '\0') {
        acStack_20[4] = 1;
      }
      uVar2 = DAT_00790750;
      FUN_00464480(&local_29);
      cVar1 = FUN_00464050(uVar2);
      if (cVar1 != '\0') {
        acStack_20[5] = 1;
      }
      uVar2 = DAT_0079079c;
      FUN_00464480(&local_2a);
      cVar1 = FUN_00464050(uVar2);
      if (cVar1 != '\0') {
        acStack_20[6] = 1;
      }
      uVar2 = DAT_00790760;
      FUN_00464480(&local_2b);
      cVar1 = FUN_00464050(uVar2);
      if (cVar1 != '\0') {
        acStack_20[7] = 1;
      }
      uVar2 = DAT_00790798;
      FUN_00464480(&local_2c);
      cVar1 = FUN_00464050(uVar2);
      if (cVar1 != '\0') {
        acStack_20[8] = 1;
      }
      uVar2 = DAT_00790794;
      FUN_00464480(&local_2d);
      cVar1 = FUN_00464050(uVar2);
      if (cVar1 != '\0') {
        acStack_20[9] = 1;
      }
      uVar2 = DAT_00790788;
      FUN_00464480(&local_2e);
      cVar1 = FUN_00464050(uVar2);
      if (cVar1 != '\0') {
        acStack_20[10] = 1;
      }
      uVar2 = DAT_00790774;
      FUN_00464480(&local_2f);
      cVar1 = FUN_00464050(uVar2);
      if (cVar1 != '\0') {
        acStack_20[0xb] = 1;
      }
      uVar2 = DAT_007907b0;
      FUN_00464480(&local_30);
      cVar1 = FUN_00464050(uVar2);
      if (cVar1 != '\0') {
        acStack_20[0xc] = 1;
      }
      uVar2 = DAT_007907a8;
      FUN_00464480(&local_31);
      cVar1 = FUN_00464050(uVar2);
      if (cVar1 != '\0') {
        acStack_20[0xd] = 1;
      }
    }
    for (local_8 = 1; local_8 < 0xf; local_8 = local_8 + 1) {
      if (acStack_20[local_8] == '\0') {
        if (local_c < local_24) {
          local_c = local_24;
        }
        local_24 = 0;
      }
      else {
        local_24 = local_24 + 1;
      }
    }
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

