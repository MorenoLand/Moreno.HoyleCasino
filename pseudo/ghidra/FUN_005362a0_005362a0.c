// FUN_005362a0  005362a0

void __fastcall FUN_005362a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0x32;
  local_14 = 0x32;
  local_10 = 100;
  local_20 = 0;
  switch(*(undefined4 *)(DAT_007947e0 + 0x4f14)) {
  case 0x13:
  case 0x15:
    local_14 = 0x16;
    local_18 = 0x16;
    break;
  case 0x1b:
  case 0x1d:
    local_18 = 0x3c;
    local_14 = 0x28;
    local_10 = 0x14;
    local_20 = 0x50;
  }
  iVar1 = FUN_0062fbf0(100);
  if (local_10 < iVar1) {
    if ((local_20 != 0) && (iVar1 = FUN_0062fbf0(100), iVar1 < local_20)) {
      iVar1 = FUN_0062fbf0(100);
      if (iVar1 < 0x28) {
        do {
          uVar2 = FUN_00536b40(0);
          *(undefined4 *)(param_1 + 0x58) = uVar2;
          iVar1 = FUN_00537880(0,2);
        } while (*(char *)(param_1 + 0x15 + iVar1) == -1);
        do {
          uVar2 = FUN_00536b40(1);
          *(undefined4 *)(param_1 + 0x5c) = uVar2;
          iVar1 = FUN_00537880(1,2);
        } while (*(char *)(param_1 + iVar1 + 0x2b) == -1);
        do {
          uVar2 = FUN_00536b40(2);
          *(undefined4 *)(param_1 + 0x60) = uVar2;
          iVar1 = FUN_00537880(2,2);
        } while (*(char *)(param_1 + iVar1 + 0x41) == -1);
      }
      else {
        do {
          uVar2 = FUN_00536b40(0);
          *(undefined4 *)(param_1 + 0x58) = uVar2;
          iVar1 = FUN_00537880(0,2);
        } while (*(char *)(param_1 + 0x15 + iVar1) != -1);
        do {
          uVar2 = FUN_00536b40(1);
          *(undefined4 *)(param_1 + 0x5c) = uVar2;
          iVar1 = FUN_00537880(1,2);
        } while (*(char *)(param_1 + iVar1 + 0x2b) != -1);
        do {
          uVar2 = FUN_00536b40(2);
          *(undefined4 *)(param_1 + 0x60) = uVar2;
          iVar1 = FUN_00537880(2,2);
        } while (*(char *)(param_1 + iVar1 + 0x41) != -1);
      }
    }
  }
  else {
    iVar1 = FUN_0062fbf0(100);
    if (iVar1 < local_18) {
      do {
        uVar2 = FUN_00536b40(0);
        *(undefined4 *)(param_1 + 0x58) = uVar2;
        iVar1 = FUN_00537880(0,2);
      } while (*(char *)(param_1 + 0x15 + iVar1) != -1);
      do {
        uVar2 = FUN_00536b40(1);
        *(undefined4 *)(param_1 + 0x5c) = uVar2;
        iVar1 = FUN_00537880(1,2);
      } while (*(char *)(param_1 + iVar1 + 0x2b) == -1);
      do {
        uVar2 = FUN_00536b40(2);
        *(undefined4 *)(param_1 + 0x60) = uVar2;
        iVar1 = FUN_00537880(2,2);
      } while (*(char *)(param_1 + iVar1 + 0x41) != -1);
    }
    else {
      iVar1 = FUN_0062fbf0(100);
      if (iVar1 < local_14) {
        do {
          uVar2 = FUN_00536b40(0);
          *(undefined4 *)(param_1 + 0x58) = uVar2;
          iVar1 = FUN_00537880(0,2);
        } while (*(char *)(param_1 + 0x15 + iVar1) == -1);
        do {
          uVar2 = FUN_00536b40(1);
          *(undefined4 *)(param_1 + 0x5c) = uVar2;
          iVar1 = FUN_00537880(1,2);
        } while (*(char *)(param_1 + iVar1 + 0x2b) != -1);
        do {
          uVar2 = FUN_00536b40(2);
          *(undefined4 *)(param_1 + 0x60) = uVar2;
          iVar1 = FUN_00537880(2,2);
        } while (*(char *)(param_1 + iVar1 + 0x41) == -1);
      }
    }
  }
  return;
}

