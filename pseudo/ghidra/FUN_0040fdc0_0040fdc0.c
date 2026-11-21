// FUN_0040fdc0  0040fdc0

void __fastcall FUN_0040fdc0(int param_1)

{
  int iVar1;
  char cVar2;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = *(int *)(DAT_00790324 + 0x4d0);
  if (iVar1 == -1) {
    local_10 = -1;
  }
  else {
    if (iVar1 == 4) {
      local_1c = 0;
    }
    else {
      local_1c = (int)*(char *)(DAT_00790324 + 0x119 + iVar1 * 0x118);
    }
    local_10 = local_1c;
  }
  local_14 = abs(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48));
  if (local_14 < 0x32) {
    local_14 = 0;
  }
  local_c = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c);
  if (local_c < 0x32) {
    local_c = 0;
  }
  if (*(int *)(param_1 + 0x58) == 8) {
    if ((local_c < local_14) && (cVar2 = FUN_00413360(iVar1,0,1), cVar2 != '\0')) {
      FUN_0040da70();
    }
    if (((local_14 < local_c) && (*(char *)(DAT_00790324 + 0x118 + iVar1 * 0x118) == '\0')) &&
       (cVar2 = FUN_00413360(iVar1,1,1), cVar2 != '\0')) {
      FUN_0040da70();
    }
  }
  else if (*(int *)(param_1 + 0x58) == 0x10) {
    if (((local_c < local_14) && (cVar2 = FUN_0041ade0(iVar1,local_10), cVar2 != '\0')) &&
       (cVar2 = FUN_00413360(iVar1,3,1), cVar2 != '\0')) {
      FUN_0040da70();
    }
    if (((local_14 < local_c) && (cVar2 = FUN_0041a960(iVar1), cVar2 != '\0')) &&
       (cVar2 = FUN_00413360(iVar1,2,1), cVar2 != '\0')) {
      FUN_0040da70();
    }
  }
  return;
}

