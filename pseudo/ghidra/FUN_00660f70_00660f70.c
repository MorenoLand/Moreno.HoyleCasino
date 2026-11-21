// FUN_00660f70  00660f70

int __fastcall FUN_00660f70(int param_1)

{
  int iVar1;
  char *_Source;
  int local_c;
  int local_8;
  
  local_c = 0;
  _Source = (char *)FUN_005fb8b0(0);
  strcpy((char *)(param_1 + 0x1bc),_Source);
  while (*(char *)(param_1 + 0x1bc) == ' ') {
    for (local_8 = 0; local_8 < 0x32; local_8 = local_8 + 1) {
      *(undefined1 *)(param_1 + local_8 + 0x1bc) = *(undefined1 *)(param_1 + local_8 + 0x1bd);
    }
  }
  for (local_8 = 0;
      (iVar1 = local_c, local_8 < 0x32 &&
      (iVar1 = local_8, *(char *)(param_1 + local_8 + 0x1bc) != '\0')); local_8 = local_8 + 1) {
  }
  while ((local_8 = iVar1 + -1, -1 < local_8 && (*(char *)(param_1 + local_8 + 0x1bc) == ' '))) {
    *(undefined1 *)(param_1 + local_8 + 0x1bc) = 0;
    iVar1 = local_8;
  }
  return param_1 + 0x1bc;
}

