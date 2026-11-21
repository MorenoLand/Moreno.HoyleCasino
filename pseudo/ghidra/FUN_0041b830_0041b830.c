// FUN_0041b830  0041b830

undefined4 __fastcall FUN_0041b830(int param_1)

{
  char cVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar2 = FUN_00419980(4,0);
  if (0x11 < iVar2) {
    return 1;
  }
  iVar2 = FUN_00419980(4,0);
  if ((iVar2 != 0x11) ||
     ((iVar2 = FUN_004198d0(4,0), iVar2 != 0x11 && (cVar1 = FUN_004185c0(), cVar1 != '\0')))) {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      for (local_c = 0; iVar2 = FUN_004194c0(local_8), local_c < iVar2; local_c = local_c + 1) {
        if (*(char *)(param_1 + 0x110 + local_8 * 0x118 + local_c) == -1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

