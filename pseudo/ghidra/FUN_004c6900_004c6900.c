// FUN_004c6900  004c6900

void __fastcall FUN_004c6900(int param_1)

{
  char cVar1;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x400);
  if (((local_8 == 1) || (local_8 == 2)) || (local_8 == 3)) {
    cVar1 = FUN_005da7b0();
    if (cVar1 == '\0') {
      local_38 = FUN_0047e2c0();
    }
    else {
      local_38 = *(undefined4 *)(DAT_007947e0 + 0x4efc);
    }
    FUN_00519c80(local_38,*(undefined4 *)(param_1 + 0x400),&local_28);
    *(undefined4 *)(param_1 + 0x404) = local_28;
    *(undefined4 *)(param_1 + 0x408) = local_24;
    *(undefined4 *)(param_1 + 0x40c) = local_20;
    *(undefined4 *)(param_1 + 0x410) = local_18;
    *(undefined4 *)(param_1 + 0x414) = local_14;
    *(undefined4 *)(param_1 + 0x41c) = local_c;
    *(undefined4 *)(param_1 + 0x418) = local_10;
    *(undefined4 *)(param_1 + 0x420) = local_1c;
    *(undefined1 *)(param_1 + 0x424) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x404) = 0;
    *(undefined4 *)(param_1 + 0x408) = 0;
    *(undefined4 *)(param_1 + 0x40c) = 0;
    *(undefined4 *)(param_1 + 0x410) = 0;
    *(undefined4 *)(param_1 + 0x414) = 0;
    *(undefined4 *)(param_1 + 0x418) = 0;
    *(undefined4 *)(param_1 + 0x41c) = 0;
    *(undefined4 *)(param_1 + 0x420) = 0;
    *(undefined1 *)(param_1 + 0x424) = 0;
  }
  return;
}

