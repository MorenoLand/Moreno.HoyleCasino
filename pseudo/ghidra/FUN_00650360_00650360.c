// FUN_00650360  00650360

void __thiscall FUN_00650360(int param_1,int param_2)

{
  DWORD DVar1;
  
  if (*(int *)(param_2 + 0x18) != 3) {
    DVar1 = GetTickCount();
    *(DWORD *)(param_1 + 0x44) = DVar1;
  }
  if (*(int *)(param_2 + 0x18) == 1) {
    if ((*(int *)(param_1 + 0x30) != 0) && (*(char *)(*(int *)(param_1 + 0x30) + 0x2ac) != '\0')) {
      FUN_00650550(1);
    }
    if (DAT_016306c4 != 0) {
      FUN_0066f370(param_2);
    }
    if (*(char *)(DAT_0162ee80 + 0x48) != '\0') {
      FUN_0064fa90(0,0);
    }
  }
  FUN_005f1680(param_2);
  return;
}

