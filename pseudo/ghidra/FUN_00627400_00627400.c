// FUN_00627400  00627400

undefined1 __fastcall FUN_00627400(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x50) == *(int *)(param_1 + 0x58)) &&
     (cVar1 = FUN_00627480(), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}

