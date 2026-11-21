// FUN_00627440  00627440

undefined1 __fastcall FUN_00627440(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x54) == *(int *)(param_1 + 0x5c)) &&
     (cVar1 = FUN_00627480(), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}

