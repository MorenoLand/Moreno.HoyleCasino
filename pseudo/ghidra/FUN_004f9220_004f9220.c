// FUN_004f9220  004f9220

void __fastcall FUN_004f9220(int param_1)

{
  short sVar1;
  int iVar2;
  int local_20;
  short local_1c;
  int local_18;
  int local_14;
  int local_10;
  short local_8;
  
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x5e7);
  }
  sVar1 = FUN_004f9110();
  if (1 < sVar1) {
    FUN_005e9f20("ActivePlayersLeft() <= 1","..\\Casino\\PokerPot.cpp",0x5e8);
  }
  local_14 = 0;
  local_18 = 0;
  for (local_1c = 0; local_1c < *(short *)(param_1 + 6); local_1c = local_1c + 1) {
    if ((*(char *)(*(int *)(param_1 + 0x30) + (int)local_1c) == '\0') &&
       ((local_14 < *(int *)(*(int *)(param_1 + 0x68) + local_1c * 4) ||
        ((*(int *)(*(int *)(param_1 + 0x68) + local_1c * 4) == local_14 &&
         (local_18 < *(int *)(*(int *)(param_1 + 0x6c) + local_1c * 4))))))) {
      local_14 = *(int *)(*(int *)(param_1 + 0x68) + local_1c * 4);
      local_18 = *(int *)(*(int *)(param_1 + 0x6c) + local_1c * 4);
      *(short *)(param_1 + 0x20) = local_1c;
    }
  }
  local_20 = 0;
  local_10 = 0;
  local_8 = 0;
  for (local_1c = 0; local_1c < *(short *)(param_1 + 6); local_1c = local_1c + 1) {
    if (((local_1c != *(short *)(param_1 + 0x20)) &&
        (*(char *)(*(int *)(param_1 + 0x30) + (int)local_1c) == '\0')) &&
       ((local_20 < *(int *)(*(int *)(param_1 + 0x68) + local_1c * 4) ||
        ((*(int *)(*(int *)(param_1 + 0x68) + local_1c * 4) == local_20 &&
         (local_10 < *(int *)(*(int *)(param_1 + 0x6c) + local_1c * 4))))))) {
      local_20 = *(int *)(*(int *)(param_1 + 0x68) + local_1c * 4);
      local_10 = *(int *)(*(int *)(param_1 + 0x6c) + local_1c * 4);
      local_8 = local_1c;
    }
  }
  *(int *)(param_1 + 0x1c) =
       *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 0x20) * 4) -
       *(int *)(*(int *)(param_1 + 0x68) + local_8 * 4);
  *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 0x20) * 4) =
       *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 0x20) * 4) -
       *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(*(int *)(param_1 + 0x6c) + *(short *)(param_1 + 0x20) * 4) -
          *(int *)(*(int *)(param_1 + 0x6c) + local_8 * 4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - iVar2;
  *(int *)(*(int *)(param_1 + 0x6c) + *(short *)(param_1 + 0x20) * 4) =
       *(int *)(*(int *)(param_1 + 0x6c) + *(short *)(param_1 + 0x20) * 4) - iVar2;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar2;
  for (local_1c = 0; local_1c < *(short *)(param_1 + 6); local_1c = local_1c + 1) {
    if ((*(char *)(*(int *)(param_1 + 0x30) + (int)local_1c) != '\0') &&
       (*(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 0x20) * 4) <
        *(int *)(*(int *)(param_1 + 0x68) + local_1c * 4))) {
      *(int *)(param_1 + 0x1c) =
           (*(int *)(*(int *)(param_1 + 0x68) + local_1c * 4) -
           *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 0x20) * 4)) +
           *(int *)(param_1 + 0x1c);
      *(int *)(param_1 + 0xc) =
           *(int *)(param_1 + 0xc) -
           (*(int *)(*(int *)(param_1 + 0x68) + local_1c * 4) -
           *(int *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 0x20) * 4));
      *(undefined4 *)(*(int *)(param_1 + 0x68) + local_1c * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x68) + *(short *)(param_1 + 0x20) * 4);
    }
  }
  return;
}

