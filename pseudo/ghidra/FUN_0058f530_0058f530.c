// FUN_0058f530  0058f530

void __thiscall FUN_0058f530(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar2 = FUN_005e10d0();
  iVar1 = *(int *)(*(int *)(param_1 + 0x174) + 0x3c08);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x150) = *(char *)(param_2 + 2) + -1 + *(int *)(param_1 + 0x14c);
  if ((iVar2 < 1) || (1000 < iVar2)) {
    FUN_005e9f20("lastGame >=1 && lastGame <= 1000","..\\Casino\\kenoticketdialog.cpp",0xa42);
  }
  (**(code **)(**(int **)(param_1 + 0x178) + 0x70))();
  FUN_0058f450();
  FUN_0058fb90();
  FUN_0058fb90();
  FUN_0062fde0("curDisplay:%d  curTickets:%d\n",*(undefined4 *)(param_1 + 0x154 + iVar1 * 4),
               *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x3be4 + iVar1 * 4));
  if ((0 < *(int *)(param_2 + 0x1c)) && (*(int *)(param_2 + 0x1c) < 0x3e9)) {
    local_8 = 0;
    if (*(char *)(param_2 + 4) == '\x01') {
      local_8 = *(int *)(param_1 + 0x150);
      if (1000 < local_8) {
        local_8 = local_8 + -1000;
      }
    }
    else if (((*(int *)(DAT_007947e0 + 0x98) != *(int *)(param_1 + 0x14c)) &&
             ((local_8 = iVar2, iVar2 < *(int *)(param_1 + 0x14c) ||
              (*(int *)(param_1 + 0x150) < iVar2)))) &&
            ((iVar2 + 1000 < *(int *)(param_1 + 0x14c) || (*(int *)(param_1 + 0x150) < iVar2 + 1000)
             ))) {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\kenoticketdialog.cpp",0xa69);
      local_8 = *(int *)(param_1 + 0x150);
      if (1000 < local_8) {
        local_8 = local_8 + -1000;
      }
    }
    if (local_8 != 0) {
      *(int *)(param_1 + 0x154 + iVar1 * 4) = local_8;
      FUN_0058f730();
    }
  }
  return;
}

