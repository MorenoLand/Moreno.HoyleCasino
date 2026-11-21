// FUN_005490e0  005490e0

void __fastcall FUN_005490e0(int param_1)

{
  char cVar1;
  bool bVar2;
  int local_8;
  
  *(undefined1 *)(param_1 + 0x1c) = 1;
  FUN_005492c0(1,1);
  FUN_005492c0(1,1);
  local_8 = FUN_00549e80(1,1);
  bVar2 = local_8 != 0x15;
  while ((local_8 < 0x11 && (local_8 < 0x15))) {
    FUN_005492c0(1,1);
    local_8 = FUN_00549e80(1,1);
  }
  FUN_005492c0(0,1);
  FUN_005492c0(0,1);
  FUN_005442b0();
  if ((local_8 < 0x16) && (bVar2)) {
    while( true ) {
      cVar1 = FUN_00542980();
      if (cVar1 != '\0') break;
      FUN_005492c0(0,1);
    }
  }
  FUN_00544780();
  FUN_005451d0();
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_00548960();
  return;
}

