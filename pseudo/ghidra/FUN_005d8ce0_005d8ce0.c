// FUN_005d8ce0  005d8ce0

undefined1 __fastcall FUN_005d8ce0(int *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 local_14;
  
  cVar2 = FUN_005da7b0();
  if ((cVar2 == '\0') && (*(char *)(DAT_007947e0 + 0x4ee9) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  cVar2 = (**(code **)(*param_1 + 0x80))();
  if ((cVar2 == '\0') || (bVar1)) {
    local_14 = 0;
  }
  else {
    local_14 = 1;
  }
  return local_14;
}

