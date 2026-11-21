// FUN_00459a10  00459a10

undefined4 __fastcall FUN_00459a10(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_14;
  
  iVar2 = *(int *)(DAT_00790738 + 0x104);
  if (*(int *)(DAT_00790738 + 0x104) == *(int *)(param_1 + 0x194)) {
    iVar2 = DAT_00790738;
    if (*(char *)(DAT_00790738 + 0xe0 + *(int *)(param_1 + 0x194)) != '\0') {
      cVar1 = *(char *)(DAT_00790738 + 0xe5 + *(int *)(param_1 + 0x194));
      iVar2 = CONCAT31((int3)((uint)param_1 >> 8),cVar1);
      if (cVar1 == '\0') {
        local_14 = 1;
        goto LAB_00459a86;
      }
    }
  }
  local_14 = 0;
LAB_00459a86:
  return CONCAT31((int3)((uint)iVar2 >> 8),local_14);
}

