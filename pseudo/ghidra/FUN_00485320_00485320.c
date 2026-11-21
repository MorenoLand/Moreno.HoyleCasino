// FUN_00485320  00485320

bool __thiscall FUN_00485320(int param_1,short param_2,short param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  short local_c;
  short local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < *(short *)(param_1 + 4); local_8 = local_8 + 1) {
    uVar2 = DAT_007907a4;
    FUN_00464480(&local_d);
    cVar1 = FUN_00464050(uVar2);
    if ((cVar1 != '\0') && (param_2 < 1)) {
      local_c = local_c + 1;
    }
    uVar2 = DAT_00790758;
    FUN_00464480(&local_e);
    cVar1 = FUN_00464050(uVar2);
    if ((cVar1 != '\0') && (param_2 < 2)) {
      local_c = local_c + 1;
    }
    uVar2 = DAT_00790768;
    FUN_00464480(&local_f);
    cVar1 = FUN_00464050(uVar2);
    if ((cVar1 != '\0') && (param_2 < 3)) {
      local_c = local_c + 1;
    }
    uVar2 = DAT_00790790;
    FUN_00464480(&local_10);
    cVar1 = FUN_00464050(uVar2);
    if ((cVar1 != '\0') && (param_2 < 4)) {
      local_c = local_c + 1;
    }
    uVar2 = DAT_00790750;
    FUN_00464480(&local_11);
    cVar1 = FUN_00464050(uVar2);
    if ((cVar1 != '\0') && (param_2 < 5)) {
      local_c = local_c + 1;
    }
    uVar2 = DAT_0079079c;
    FUN_00464480(&local_12);
    cVar1 = FUN_00464050(uVar2);
    if ((cVar1 != '\0') && (param_2 < 6)) {
      local_c = local_c + 1;
    }
    uVar2 = DAT_00790760;
    FUN_00464480(&local_13);
    cVar1 = FUN_00464050(uVar2);
    if ((cVar1 != '\0') && (param_2 < 7)) {
      local_c = local_c + 1;
    }
    uVar2 = DAT_00790798;
    FUN_00464480(&local_14);
    cVar1 = FUN_00464050(uVar2);
    if ((cVar1 != '\0') && (param_2 < 8)) {
      local_c = local_c + 1;
    }
    uVar2 = DAT_00790794;
    FUN_00464480(&local_15);
    cVar1 = FUN_00464050(uVar2);
    if ((cVar1 != '\0') && (param_2 < 9)) {
      local_c = local_c + 1;
    }
    uVar2 = DAT_00790788;
    FUN_00464480(&local_16);
    cVar1 = FUN_00464050(uVar2);
    if ((cVar1 != '\0') && (param_2 < 10)) {
      local_c = local_c + 1;
    }
    uVar2 = DAT_00790774;
    FUN_00464480(&local_17);
    cVar1 = FUN_00464050(uVar2);
    if ((cVar1 != '\0') && (param_2 < 0xb)) {
      local_c = local_c + 1;
    }
    uVar2 = DAT_007907b0;
    FUN_00464480(&local_18);
    cVar1 = FUN_00464050(uVar2);
    if ((cVar1 != '\0') && (param_2 < 0xc)) {
      local_c = local_c + 1;
    }
    uVar2 = DAT_007907a8;
    FUN_00464480(&local_19);
    cVar1 = FUN_00464050(uVar2);
    if ((cVar1 != '\0') && (param_2 < 0xd)) {
      local_c = local_c + 1;
    }
  }
  return local_c <= param_3;
}

