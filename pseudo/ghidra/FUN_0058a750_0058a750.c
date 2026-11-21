// FUN_0058a750  0058a750

void __fastcall FUN_0058a750(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_10 [2];
  int local_8;
  
  FUN_005de230(param_1 + 0x3ba4 + *(int *)(param_1 + 0x3c08) * 0x10,local_10);
  cVar1 = FUN_00585eb0();
  if (cVar1 != '\0') {
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x3b68) + 4) + 2) == '\0') {
      FUN_00585aa0(1);
    }
    local_8 = (int)*(char *)(*(int *)(*(int *)(param_1 + 0x3b68) + 4) + 1) *
              (int)*(char *)(*(int *)(*(int *)(param_1 + 0x3b68) + 4) + 2);
    if (local_10[0] < local_8) {
      uVar2 = FUN_00630f40("SID_KENO_CANTSUBMITTICKET",0);
      uVar2 = FUN_00630f40("SID_KENO_NOTENOUGHMONEY",uVar2);
      FUN_0062ff10(uVar2);
    }
    else {
      local_10[0] = local_10[0] - local_8;
      FUN_005de620(param_1 + 0x3ba4 + *(int *)(param_1 + 0x3c08) * 0x10,local_10);
      FUN_00585e00();
      FUN_00585e30(-local_8);
      FUN_005e2c40(param_1 + 0x3ba4 + *(int *)(param_1 + 0x3c08) * 0x10,
                   *(undefined4 *)(*(int *)(param_1 + 0x3b68) + 4),
                   *(undefined4 *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4),0);
    }
  }
  return;
}

